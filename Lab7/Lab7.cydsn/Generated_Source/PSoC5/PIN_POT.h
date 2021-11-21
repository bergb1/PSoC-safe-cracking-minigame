/*******************************************************************************
* File Name: PIN_POT.h  
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

#if !defined(CY_PINS_PIN_POT_H) /* Pins PIN_POT_H */
#define CY_PINS_PIN_POT_H

#include "cytypes.h"
#include "cyfitter.h"
#include "cypins.h"
#include "PIN_POT_aliases.h"

/* APIs are not generated for P15[7:6] */
#if !(CY_PSOC5A &&\
	 PIN_POT__PORT == 15 && ((PIN_POT__MASK & 0xC0) != 0))


/***************************************
*        Function Prototypes             
***************************************/    

/**
* \addtogroup group_general
* @{
*/
void    PIN_POT_Write(uint8 value);
void    PIN_POT_SetDriveMode(uint8 mode);
uint8   PIN_POT_ReadDataReg(void);
uint8   PIN_POT_Read(void);
void    PIN_POT_SetInterruptMode(uint16 position, uint16 mode);
uint8   PIN_POT_ClearInterrupt(void);
/** @} general */

/***************************************
*           API Constants        
***************************************/
/**
* \addtogroup group_constants
* @{
*/
    /** \addtogroup driveMode Drive mode constants
     * \brief Constants to be passed as "mode" parameter in the PIN_POT_SetDriveMode() function.
     *  @{
     */
        #define PIN_POT_DM_ALG_HIZ         PIN_DM_ALG_HIZ
        #define PIN_POT_DM_DIG_HIZ         PIN_DM_DIG_HIZ
        #define PIN_POT_DM_RES_UP          PIN_DM_RES_UP
        #define PIN_POT_DM_RES_DWN         PIN_DM_RES_DWN
        #define PIN_POT_DM_OD_LO           PIN_DM_OD_LO
        #define PIN_POT_DM_OD_HI           PIN_DM_OD_HI
        #define PIN_POT_DM_STRONG          PIN_DM_STRONG
        #define PIN_POT_DM_RES_UPDWN       PIN_DM_RES_UPDWN
    /** @} driveMode */
/** @} group_constants */
    
/* Digital Port Constants */
#define PIN_POT_MASK               PIN_POT__MASK
#define PIN_POT_SHIFT              PIN_POT__SHIFT
#define PIN_POT_WIDTH              1u

/* Interrupt constants */
#if defined(PIN_POT__INTSTAT)
/**
* \addtogroup group_constants
* @{
*/
    /** \addtogroup intrMode Interrupt constants
     * \brief Constants to be passed as "mode" parameter in PIN_POT_SetInterruptMode() function.
     *  @{
     */
        #define PIN_POT_INTR_NONE      (uint16)(0x0000u)
        #define PIN_POT_INTR_RISING    (uint16)(0x0001u)
        #define PIN_POT_INTR_FALLING   (uint16)(0x0002u)
        #define PIN_POT_INTR_BOTH      (uint16)(0x0003u) 
    /** @} intrMode */
/** @} group_constants */

    #define PIN_POT_INTR_MASK      (0x01u) 
#endif /* (PIN_POT__INTSTAT) */


/***************************************
*             Registers        
***************************************/

/* Main Port Registers */
/* Pin State */
#define PIN_POT_PS                     (* (reg8 *) PIN_POT__PS)
/* Data Register */
#define PIN_POT_DR                     (* (reg8 *) PIN_POT__DR)
/* Port Number */
#define PIN_POT_PRT_NUM                (* (reg8 *) PIN_POT__PRT) 
/* Connect to Analog Globals */                                                  
#define PIN_POT_AG                     (* (reg8 *) PIN_POT__AG)                       
/* Analog MUX bux enable */
#define PIN_POT_AMUX                   (* (reg8 *) PIN_POT__AMUX) 
/* Bidirectional Enable */                                                        
#define PIN_POT_BIE                    (* (reg8 *) PIN_POT__BIE)
/* Bit-mask for Aliased Register Access */
#define PIN_POT_BIT_MASK               (* (reg8 *) PIN_POT__BIT_MASK)
/* Bypass Enable */
#define PIN_POT_BYP                    (* (reg8 *) PIN_POT__BYP)
/* Port wide control signals */                                                   
#define PIN_POT_CTL                    (* (reg8 *) PIN_POT__CTL)
/* Drive Modes */
#define PIN_POT_DM0                    (* (reg8 *) PIN_POT__DM0) 
#define PIN_POT_DM1                    (* (reg8 *) PIN_POT__DM1)
#define PIN_POT_DM2                    (* (reg8 *) PIN_POT__DM2) 
/* Input Buffer Disable Override */
#define PIN_POT_INP_DIS                (* (reg8 *) PIN_POT__INP_DIS)
/* LCD Common or Segment Drive */
#define PIN_POT_LCD_COM_SEG            (* (reg8 *) PIN_POT__LCD_COM_SEG)
/* Enable Segment LCD */
#define PIN_POT_LCD_EN                 (* (reg8 *) PIN_POT__LCD_EN)
/* Slew Rate Control */
#define PIN_POT_SLW                    (* (reg8 *) PIN_POT__SLW)

/* DSI Port Registers */
/* Global DSI Select Register */
#define PIN_POT_PRTDSI__CAPS_SEL       (* (reg8 *) PIN_POT__PRTDSI__CAPS_SEL) 
/* Double Sync Enable */
#define PIN_POT_PRTDSI__DBL_SYNC_IN    (* (reg8 *) PIN_POT__PRTDSI__DBL_SYNC_IN) 
/* Output Enable Select Drive Strength */
#define PIN_POT_PRTDSI__OE_SEL0        (* (reg8 *) PIN_POT__PRTDSI__OE_SEL0) 
#define PIN_POT_PRTDSI__OE_SEL1        (* (reg8 *) PIN_POT__PRTDSI__OE_SEL1) 
/* Port Pin Output Select Registers */
#define PIN_POT_PRTDSI__OUT_SEL0       (* (reg8 *) PIN_POT__PRTDSI__OUT_SEL0) 
#define PIN_POT_PRTDSI__OUT_SEL1       (* (reg8 *) PIN_POT__PRTDSI__OUT_SEL1) 
/* Sync Output Enable Registers */
#define PIN_POT_PRTDSI__SYNC_OUT       (* (reg8 *) PIN_POT__PRTDSI__SYNC_OUT) 

/* SIO registers */
#if defined(PIN_POT__SIO_CFG)
    #define PIN_POT_SIO_HYST_EN        (* (reg8 *) PIN_POT__SIO_HYST_EN)
    #define PIN_POT_SIO_REG_HIFREQ     (* (reg8 *) PIN_POT__SIO_REG_HIFREQ)
    #define PIN_POT_SIO_CFG            (* (reg8 *) PIN_POT__SIO_CFG)
    #define PIN_POT_SIO_DIFF           (* (reg8 *) PIN_POT__SIO_DIFF)
#endif /* (PIN_POT__SIO_CFG) */

/* Interrupt Registers */
#if defined(PIN_POT__INTSTAT)
    #define PIN_POT_INTSTAT            (* (reg8 *) PIN_POT__INTSTAT)
    #define PIN_POT_SNAP               (* (reg8 *) PIN_POT__SNAP)
    
	#define PIN_POT_0_INTTYPE_REG 		(* (reg8 *) PIN_POT__0__INTTYPE)
#endif /* (PIN_POT__INTSTAT) */

#endif /* CY_PSOC5A... */

#endif /*  CY_PINS_PIN_POT_H */


/* [] END OF FILE */
