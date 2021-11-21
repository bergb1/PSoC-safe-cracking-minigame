#include <project.h>
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include <u8x8.h>

#define DMA_BYTES_PER_BURST 1
#define DMA_REQUEST_PER_BURST 1
#define DMA_SRC_BASE (samples_pointer)
#define DMA_DST_BASE (CYDEV_PERIPH_BASE)

uint8_t psoc_gpio_and_delay_callback(u8x8_t *u8x8, 
    uint8_t msg, uint8_t arg_int, void *arg_ptr);
uint8_t u8x8_byte_hw_i2c(u8x8_t *u8x8, uint8_t msg, 
    uint8_t arg_int, void *arg_ptr);

struct Locks {
    uint8_t difficulty;
    uint16_t *combination;
    uint8_t size;
};

u8x8_t EM2Display;

uint8_t *samples_pointer = NULL;
uint8_t sample_size;

uint8_t line_selection;
_Bool interrupt_flag = 0;
_Bool playing = 0;

uint64_t pick_dif_rep = 0;

// Interrupt to make your selections
CY_ISR(PIN_IR_InterruptHandler) {
    interrupt_flag = 1;
    
    if(!playing) {
        for(uint8_t i = 0; i < 3; i++) {
            if(i != line_selection) {
                u8x8_DrawString(&EM2Display, 1, (i * 2) + 3, "              ");
            }
        }
        
        PWM_O_LED_Start();
        for(uint16_t i = 0; i < PWM_O_LED_ReadPeriod(); i++) {
            PWM_O_LED_WriteCompare(i);
            CyDelay(1);
        } for(uint16_t i = PWM_O_LED_ReadPeriod(); i > 0; i--) {
            PWM_O_LED_WriteCompare(i);
            CyDelay(1);
        }
        PWM_O_LED_Stop();
    } else {
        PWM_BUZZER_Stop();
    }
    
    PIN_IR_ClearInterrupt();
}

// Function to display a message
void display_msg(char **msg) {
    ISR_IR_Stop();
    for(uint8_t i = 0; i < 4; i++) {
        u8x8_DrawString(&EM2Display, 1, (i * 2) + 1, msg[i]);
    }
    ISR_IR_StartEx(PIN_IR_InterruptHandler);
}

// Function to make the user pick their desired difficulty
uint8_t pick_difficulty() {
    const uint16_t maximum_output = 1023;
    
    char *msg[4];
    msg[0] = "Difficulty:    ";
    msg[1] = "   Easy        ";
    msg[2] = "   Medium      ";
    msg[3] = "   Hard        ";
    display_msg(msg);
    
    ADC_POT_Start();
    
    // If the interrupt triggers before assigning a value, the difficulty is "easy"
    line_selection = 0;
    interrupt_flag = 0;
    while(!interrupt_flag) {
        ADC_POT_StartConvert();
        ADC_POT_IsEndConversion(ADC_POT_WAIT_FOR_RESULT);
        uint16_t output = ADC_POT_GetResult16();
        
        // The ranges are now: [0 - 0.99] = 0, [1 - 1.99] = 1 and [2 - 2.99] = 2
        line_selection = 2.99 - (((float) output / (float) maximum_output) * 2.99);
        
        ISR_IR_Stop();
        for(uint8_t i = 0; i < 3; i++) {
            if(i == line_selection) {
                    u8x8_DrawString(&EM2Display, 2, (i * 2) + 3, ">");
            } else {
                u8x8_DrawString(&EM2Display, 2, (i * 2) + 3, " ");
            }
        }
        ISR_IR_StartEx(PIN_IR_InterruptHandler);
        pick_dif_rep++;
    }
    ADC_POT_Stop();
    
    return line_selection;
}

// Funtion to generate a lock
struct Locks generate_lock(uint8_t difficulty) {
    struct Locks lock;
    lock.difficulty = difficulty;
    lock.size = (lock.difficulty + 1) * 2;
    
    // NOTE TO SELF: Don't forget to free the combination in memory //
    lock.combination = (uint16_t *) malloc(sizeof(uint16_t) * lock.size);
    
    // This isn't as good as using the current real time,
    // but the random seed is based on your time in "pick_difficulty"
    srand(pick_dif_rep);
    for(uint8_t i = 0; i < lock.size; i++) {
        lock.combination[i] = rand() % 1023;
    }
    
    return lock;
}

// Function to calculate the distance between the POT Meter and combination value
uint16_t get_distance(uint16_t ref) {
    ADC_POT_Start();
    ADC_POT_StartConvert();
    ADC_POT_IsEndConversion(ADC_POT_WAIT_FOR_RESULT);
    uint16_t output = ADC_POT_GetResult16();
    
    uint16_t distance = abs(output - ref);
    
    return distance;
}

// Function that calculates and assigns the Block size of a PWM based distance
void set_pwm_speed(uint16_t distance, uint8_t difficulty) {
    const uint16_t max_period = 1000;
    const uint8_t minimum_range = 75 * (3 - difficulty);
    if(distance < minimum_range) {
        float percentage = (float) distance / (float) minimum_range;
        PWM_BUZZER_WritePeriod(percentage * max_period + 50);
        PWM_BUZZER_WriteCompare(percentage * (max_period / 4) + 75);
    } else {
        PWM_BUZZER_WriteCompare(0);
    }
}

void lose() {
    char *msg[4];
    msg[0] = "===============";
    msg[1] = "| You lost :) |";
    msg[2] = "===============";
    msg[3] = "               ";
    display_msg(msg);
    
    PWM_ALARM_Start();
    for(uint8_t i = 0; i < 5; i++) {
        for(uint16_t j = 0; j < PWM_ALARM_ReadPeriod(); j++) {
            PWM_ALARM_WriteCompare(j);
            CyDelay(1);
        }
        for(uint16_t j = PWM_ALARM_ReadPeriod(); j > 0; j--) {
            PWM_ALARM_WriteCompare(j);
            CyDelay(1);
        }
    }
    PWM_ALARM_Stop();
}

void succes() {
    char *msg[4];
    msg[0] = "===============";
    msg[1] = "|  Good Job   |";
    msg[2] = "===============";
    msg[3] = "               ";
    display_msg(msg);
    
    PWM_O_LED_Start();
    for(uint16_t i = 0; i < PWM_O_LED_ReadPeriod(); i++) {
        PWM_O_LED_WriteCompare(i);
        CyDelay(1);
    } for(uint16_t i = PWM_O_LED_ReadPeriod(); i > 0; i--) {
        PWM_O_LED_WriteCompare(i);
        CyDelay(1);
    }
    PWM_O_LED_Stop();
}

// The main function that's executed when booted
int main(void)
{
    
    CyGlobalIntEnable;
    
    // Display Initialization
    I2C_DISPLAY_Start();
    
    u8x8_Setup(&EM2Display, u8x8_d_ssd1306_128x64_noname, 
        u8x8_cad_ssd13xx_i2c, u8x8_byte_hw_i2c, 
        psoc_gpio_and_delay_callback);
    
    u8x8_InitDisplay(&EM2Display);
    u8x8_SetPowerSave(&EM2Display, 0);
    u8x8_ClearDisplay(&EM2Display);
    u8x8_SetFont(&EM2Display, u8x8_font_amstrad_cpc_extended_f);
    
    // Interrupt Initialization
    ISR_IR_StartEx(PIN_IR_InterruptHandler);
    
    // Intro Message
    char *msg[4];
    msg[0] = "HvA HBO-ICT";
    msg[1] = "TI EM2";
    msg[2] = "";
    msg[3] = "Lab 7 Project";
    display_msg(msg);
    CyDelay(2000);
    
    // The Game Loop
    for(;;)
    {
        uint8_t difficulty = pick_difficulty();
        struct Locks lock = generate_lock(difficulty);
        
        playing = 1;
        for(uint8_t i = 0; i < lock.size; i++) {
            char *msg[4];
            msg[0] = "===============";
            msg[1] = "|   Locked    |";
            msg[2] = "===============";
            msg[3] = "               ";
            display_msg(msg);
            
            interrupt_flag = 0;
            PWM_BUZZER_Start();
            
            uint16_t distance = 11;
            while(!interrupt_flag) {
                distance = get_distance(lock.combination[i]);
                set_pwm_speed(distance, lock.difficulty);
            }
            if(distance < 30 / (lock.difficulty + 1)) {
                succes();
            } else {
                i = lock.size;
                lose();
            }
            
        }
        free(lock.combination);
        playing = 0;
    }
}

/*
    NOTE:

    Everything from this point onwards is NOT my code.
    The two functions are there to get the display working on
    this specific micro controller.
*/

uint8_t psoc_gpio_and_delay_callback(u8x8_t *u8x8, uint8_t msg, 
    uint8_t arg_int, void *arg_ptr) {
        (void) u8x8;
        (void) arg_ptr;
    
        switch(msg) {
            case U8X8_MSG_GPIO_AND_DELAY_INIT:
                break;

            case U8X8_MSG_DELAY_MILLI:
                CyDelay(arg_int);
                break;

            case U8X8_MSG_DELAY_10MICRO:
                CyDelayUs(10);
                break;

            case U8X8_MSG_DELAY_100NANO:
                CyDelayCycles(100);
                break;
        }
        return 1;
}

uint8_t u8x8_byte_hw_i2c(u8x8_t *u8x8, uint8_t msg, 
    uint8_t arg_int, void *arg_ptr) {
        uint8_t *data;

        switch(msg) {
            case U8X8_MSG_BYTE_SEND:
            data = (uint8_t *)arg_ptr;

            while(arg_int > 0) {
                (void) I2C_DISPLAY_MasterWriteByte(*data);
                data++;
                arg_int--;
            }
            break;

        case U8X8_MSG_BYTE_INIT:
            break;

        case U8X8_MSG_BYTE_SET_DC:
            break;

        case U8X8_MSG_BYTE_START_TRANSFER:
            (void) I2C_DISPLAY_MasterSendStart(u8x8_GetI2CAddress(u8x8) >> 1, 
                I2C_DISPLAY_WRITE_XFER_MODE);
            break;

        case U8X8_MSG_BYTE_END_TRANSFER:
            (void) I2C_DISPLAY_MasterSendStop();
            break;

        default:
            return 0;
        }
        return 1;
}
