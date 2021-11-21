/*******************************************************************************
* File Name: PIN_ALARM.h  
* Version 2.20
*
* Description:
*  This file contains Pin function prototypes and register defines
*
* Note:
*
********************************************************************************
* Copyright 2008-2015, Cypress Semiconductor Corporation.  All rights reserved.
* You may use this file only in accordance with the license, terms, conditions, 
* disclaimers, and limitations in the end user license agreement accompanying 
* the software package with which this file was provided.
*******************************************************************************/

#if !defined(CY_PINS_PIN_ALARM_H) /* Pins PIN_ALARM_H */
#define CY_PINS_PIN_ALARM_H

#include "cytypes.h"
#include "cyfitter.h"
#include "cypins.h"
#include "PIN_ALARM_aliases.h"

/* APIs are not generated for P15[7:6] */
#if !(CY_PSOC5A &&\
	 PIN_ALARM__PORT == 15 && ((PIN_ALARM__MASK & 0xC0) != 0))


/***************************************
*        Function Prototypes             
***************************************/    

/**
* \addtogroup group_general
* @{
*/
void    PIN_ALARM_Write(uint8 value);
void    PIN_ALARM_SetDriveMode(uint8 mode);
uint8   PIN_ALARM_ReadDataReg(void);
uint8   PIN_ALARM_Read(void);
void    PIN_ALARM_SetInterruptMode(uint16 position, uint16 mode);
uint8   PIN_ALARM_ClearInterrupt(void);
/** @} general */

/***************************************
*           API Constants        
***************************************/
/**
* \addtogroup group_constants
* @{
*/
    /** \addtogroup driveMode Drive mode constants
     * \brief Constants to be passed as "mode" parameter in the PIN_ALARM_SetDriveMode() function.
     *  @{
     */
        #define PIN_ALARM_DM_ALG_HIZ         PIN_DM_ALG_HIZ
        #define PIN_ALARM_DM_DIG_HIZ         PIN_DM_DIG_HIZ
        #define PIN_ALARM_DM_RES_UP          PIN_DM_RES_UP
        #define PIN_ALARM_DM_RES_DWN         PIN_DM_RES_DWN
        #define PIN_ALARM_DM_OD_LO           PIN_DM_OD_LO
        #define PIN_ALARM_DM_OD_HI           PIN_DM_OD_HI
        #define PIN_ALARM_DM_STRONG          PIN_DM_STRONG
        #define PIN_ALARM_DM_RES_UPDWN       PIN_DM_RES_UPDWN
    /** @} driveMode */
/** @} group_constants */
    
/* Digital Port Constants */
#define PIN_ALARM_MASK               PIN_ALARM__MASK
#define PIN_ALARM_SHIFT              PIN_ALARM__SHIFT
#define PIN_ALARM_WIDTH              1u

/* Interrupt constants */
#if defined(PIN_ALARM__INTSTAT)
/**
* \addtogroup group_constants
* @{
*/
    /** \addtogroup intrMode Interrupt constants
     * \brief Constants to be passed as "mode" parameter in PIN_ALARM_SetInterruptMode() function.
     *  @{
     */
        #define PIN_ALARM_INTR_NONE      (uint16)(0x0000u)
        #define PIN_ALARM_INTR_RISING    (uint16)(0x0001u)
        #define PIN_ALARM_INTR_FALLING   (uint16)(0x0002u)
        #define PIN_ALARM_INTR_BOTH      (uint16)(0x0003u) 
    /** @} intrMode */
/** @} group_constants */

    #define PIN_ALARM_INTR_MASK      (0x01u) 
#endif /* (PIN_ALARM__INTSTAT) */


/***************************************
*             Registers        
***************************************/

/* Main Port Registers */
/* Pin State */
#define PIN_ALARM_PS                     (* (reg8 *) PIN_ALARM__PS)
/* Data Register */
#define PIN_ALARM_DR                     (* (reg8 *) PIN_ALARM__DR)
/* Port Number */
#define PIN_ALARM_PRT_NUM                (* (reg8 *) PIN_ALARM__PRT) 
/* Connect to Analog Globals */                                                  
#define PIN_ALARM_AG                     (* (reg8 *) PIN_ALARM__AG)                       
/* Analog MUX bux enable */
#define PIN_ALARM_AMUX                   (* (reg8 *) PIN_ALARM__AMUX) 
/* Bidirectional Enable */                                                        
#define PIN_ALARM_BIE                    (* (reg8 *) PIN_ALARM__BIE)
/* Bit-mask for Aliased Register Access */
#define PIN_ALARM_BIT_MASK               (* (reg8 *) PIN_ALARM__BIT_MASK)
/* Bypass Enable */
#define PIN_ALARM_BYP                    (* (reg8 *) PIN_ALARM__BYP)
/* Port wide control signals */                                                   
#define PIN_ALARM_CTL                    (* (reg8 *) PIN_ALARM__CTL)
/* Drive Modes */
#define PIN_ALARM_DM0                    (* (reg8 *) PIN_ALARM__DM0) 
#define PIN_ALARM_DM1                    (* (reg8 *) PIN_ALARM__DM1)
#define PIN_ALARM_DM2                    (* (reg8 *) PIN_ALARM__DM2) 
/* Input Buffer Disable Override */
#define PIN_ALARM_INP_DIS                (* (reg8 *) PIN_ALARM__INP_DIS)
/* LCD Common or Segment Drive */
#define PIN_ALARM_LCD_COM_SEG            (* (reg8 *) PIN_ALARM__LCD_COM_SEG)
/* Enable Segment LCD */
#define PIN_ALARM_LCD_EN                 (* (reg8 *) PIN_ALARM__LCD_EN)
/* Slew Rate Control */
#define PIN_ALARM_SLW                    (* (reg8 *) PIN_ALARM__SLW)

/* DSI Port Registers */
/* Global DSI Select Register */
#define PIN_ALARM_PRTDSI__CAPS_SEL       (* (reg8 *) PIN_ALARM__PRTDSI__CAPS_SEL) 
/* Double Sync Enable */
#define PIN_ALARM_PRTDSI__DBL_SYNC_IN    (* (reg8 *) PIN_ALARM__PRTDSI__DBL_SYNC_IN) 
/* Output Enable Select Drive Strength */
#define PIN_ALARM_PRTDSI__OE_SEL0        (* (reg8 *) PIN_ALARM__PRTDSI__OE_SEL0) 
#define PIN_ALARM_PRTDSI__OE_SEL1        (* (reg8 *) PIN_ALARM__PRTDSI__OE_SEL1) 
/* Port Pin Output Select Registers */
#define PIN_ALARM_PRTDSI__OUT_SEL0       (* (reg8 *) PIN_ALARM__PRTDSI__OUT_SEL0) 
#define PIN_ALARM_PRTDSI__OUT_SEL1       (* (reg8 *) PIN_ALARM__PRTDSI__OUT_SEL1) 
/* Sync Output Enable Registers */
#define PIN_ALARM_PRTDSI__SYNC_OUT       (* (reg8 *) PIN_ALARM__PRTDSI__SYNC_OUT) 

/* SIO registers */
#if defined(PIN_ALARM__SIO_CFG)
    #define PIN_ALARM_SIO_HYST_EN        (* (reg8 *) PIN_ALARM__SIO_HYST_EN)
    #define PIN_ALARM_SIO_REG_HIFREQ     (* (reg8 *) PIN_ALARM__SIO_REG_HIFREQ)
    #define PIN_ALARM_SIO_CFG            (* (reg8 *) PIN_ALARM__SIO_CFG)
    #define PIN_ALARM_SIO_DIFF           (* (reg8 *) PIN_ALARM__SIO_DIFF)
#endif /* (PIN_ALARM__SIO_CFG) */

/* Interrupt Registers */
#if defined(PIN_ALARM__INTSTAT)
    #define PIN_ALARM_INTSTAT            (* (reg8 *) PIN_ALARM__INTSTAT)
    #define PIN_ALARM_SNAP               (* (reg8 *) PIN_ALARM__SNAP)
    
	#define PIN_ALARM_0_INTTYPE_REG 		(* (reg8 *) PIN_ALARM__0__INTTYPE)
#endif /* (PIN_ALARM__INTSTAT) */

#endif /* CY_PSOC5A... */

#endif /*  CY_PINS_PIN_ALARM_H */


/* [] END OF FILE */
