/*******************************************************************************
* File Name: CLOCK_O_LED.h
* Version 2.20
*
*  Description:
*   Provides the function and constant definitions for the clock component.
*
*  Note:
*
********************************************************************************
* Copyright 2008-2012, Cypress Semiconductor Corporation.  All rights reserved.
* You may use this file only in accordance with the license, terms, conditions, 
* disclaimers, and limitations in the end user license agreement accompanying 
* the software package with which this file was provided.
*******************************************************************************/

#if !defined(CY_CLOCK_CLOCK_O_LED_H)
#define CY_CLOCK_CLOCK_O_LED_H

#include <cytypes.h>
#include <cyfitter.h>


/***************************************
* Conditional Compilation Parameters
***************************************/

/* Check to see if required defines such as CY_PSOC5LP are available */
/* They are defined starting with cy_boot v3.0 */
#if !defined (CY_PSOC5LP)
    #error Component cy_clock_v2_20 requires cy_boot v3.0 or later
#endif /* (CY_PSOC5LP) */


/***************************************
*        Function Prototypes
***************************************/

void CLOCK_O_LED_Start(void) ;
void CLOCK_O_LED_Stop(void) ;

#if(CY_PSOC3 || CY_PSOC5LP)
void CLOCK_O_LED_StopBlock(void) ;
#endif /* (CY_PSOC3 || CY_PSOC5LP) */

void CLOCK_O_LED_StandbyPower(uint8 state) ;
void CLOCK_O_LED_SetDividerRegister(uint16 clkDivider, uint8 restart) 
                                ;
uint16 CLOCK_O_LED_GetDividerRegister(void) ;
void CLOCK_O_LED_SetModeRegister(uint8 modeBitMask) ;
void CLOCK_O_LED_ClearModeRegister(uint8 modeBitMask) ;
uint8 CLOCK_O_LED_GetModeRegister(void) ;
void CLOCK_O_LED_SetSourceRegister(uint8 clkSource) ;
uint8 CLOCK_O_LED_GetSourceRegister(void) ;
#if defined(CLOCK_O_LED__CFG3)
void CLOCK_O_LED_SetPhaseRegister(uint8 clkPhase) ;
uint8 CLOCK_O_LED_GetPhaseRegister(void) ;
#endif /* defined(CLOCK_O_LED__CFG3) */

#define CLOCK_O_LED_Enable()                       CLOCK_O_LED_Start()
#define CLOCK_O_LED_Disable()                      CLOCK_O_LED_Stop()
#define CLOCK_O_LED_SetDivider(clkDivider)         CLOCK_O_LED_SetDividerRegister(clkDivider, 1u)
#define CLOCK_O_LED_SetDividerValue(clkDivider)    CLOCK_O_LED_SetDividerRegister((clkDivider) - 1u, 1u)
#define CLOCK_O_LED_SetMode(clkMode)               CLOCK_O_LED_SetModeRegister(clkMode)
#define CLOCK_O_LED_SetSource(clkSource)           CLOCK_O_LED_SetSourceRegister(clkSource)
#if defined(CLOCK_O_LED__CFG3)
#define CLOCK_O_LED_SetPhase(clkPhase)             CLOCK_O_LED_SetPhaseRegister(clkPhase)
#define CLOCK_O_LED_SetPhaseValue(clkPhase)        CLOCK_O_LED_SetPhaseRegister((clkPhase) + 1u)
#endif /* defined(CLOCK_O_LED__CFG3) */


/***************************************
*             Registers
***************************************/

/* Register to enable or disable the clock */
#define CLOCK_O_LED_CLKEN              (* (reg8 *) CLOCK_O_LED__PM_ACT_CFG)
#define CLOCK_O_LED_CLKEN_PTR          ((reg8 *) CLOCK_O_LED__PM_ACT_CFG)

/* Register to enable or disable the clock */
#define CLOCK_O_LED_CLKSTBY            (* (reg8 *) CLOCK_O_LED__PM_STBY_CFG)
#define CLOCK_O_LED_CLKSTBY_PTR        ((reg8 *) CLOCK_O_LED__PM_STBY_CFG)

/* Clock LSB divider configuration register. */
#define CLOCK_O_LED_DIV_LSB            (* (reg8 *) CLOCK_O_LED__CFG0)
#define CLOCK_O_LED_DIV_LSB_PTR        ((reg8 *) CLOCK_O_LED__CFG0)
#define CLOCK_O_LED_DIV_PTR            ((reg16 *) CLOCK_O_LED__CFG0)

/* Clock MSB divider configuration register. */
#define CLOCK_O_LED_DIV_MSB            (* (reg8 *) CLOCK_O_LED__CFG1)
#define CLOCK_O_LED_DIV_MSB_PTR        ((reg8 *) CLOCK_O_LED__CFG1)

/* Mode and source configuration register */
#define CLOCK_O_LED_MOD_SRC            (* (reg8 *) CLOCK_O_LED__CFG2)
#define CLOCK_O_LED_MOD_SRC_PTR        ((reg8 *) CLOCK_O_LED__CFG2)

#if defined(CLOCK_O_LED__CFG3)
/* Analog clock phase configuration register */
#define CLOCK_O_LED_PHASE              (* (reg8 *) CLOCK_O_LED__CFG3)
#define CLOCK_O_LED_PHASE_PTR          ((reg8 *) CLOCK_O_LED__CFG3)
#endif /* defined(CLOCK_O_LED__CFG3) */


/**************************************
*       Register Constants
**************************************/

/* Power manager register masks */
#define CLOCK_O_LED_CLKEN_MASK         CLOCK_O_LED__PM_ACT_MSK
#define CLOCK_O_LED_CLKSTBY_MASK       CLOCK_O_LED__PM_STBY_MSK

/* CFG2 field masks */
#define CLOCK_O_LED_SRC_SEL_MSK        CLOCK_O_LED__CFG2_SRC_SEL_MASK
#define CLOCK_O_LED_MODE_MASK          (~(CLOCK_O_LED_SRC_SEL_MSK))

#if defined(CLOCK_O_LED__CFG3)
/* CFG3 phase mask */
#define CLOCK_O_LED_PHASE_MASK         CLOCK_O_LED__CFG3_PHASE_DLY_MASK
#endif /* defined(CLOCK_O_LED__CFG3) */

#endif /* CY_CLOCK_CLOCK_O_LED_H */


/* [] END OF FILE */
