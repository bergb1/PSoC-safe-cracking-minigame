;
; File Name: cyfitteriar.inc
; 
; PSoC Creator  4.4
;
; Description:
; 
;
;-------------------------------------------------------------------------------
; Copyright (c) 2007-2020 Cypress Semiconductor.  All rights reserved.
; You may use this file only in accordance with the license, terms, conditions, 
; disclaimers, and limitations in the end user license agreement accompanying 
; the software package with which this file was provided.
;-------------------------------------------------------------------------------

#ifndef INCLUDED_CYFITTERIAR_INC
#define INCLUDED_CYFITTERIAR_INC
    INCLUDE cydeviceiar.inc
    INCLUDE cydeviceiar_trm.inc

/* ISR_IR */
ISR_IR__INTC_CLR_EN_REG EQU CYREG_NVIC_CLRENA0
ISR_IR__INTC_CLR_PD_REG EQU CYREG_NVIC_CLRPEND0
ISR_IR__INTC_MASK EQU 0x40
ISR_IR__INTC_NUMBER EQU 6
ISR_IR__INTC_PRIOR_NUM EQU 7
ISR_IR__INTC_PRIOR_REG EQU CYREG_NVIC_PRI_6
ISR_IR__INTC_SET_EN_REG EQU CYREG_NVIC_SETENA0
ISR_IR__INTC_SET_PD_REG EQU CYREG_NVIC_SETPEND0

/* PIN_IR */
PIN_IR__0__INTTYPE EQU CYREG_PICU2_INTTYPE0
PIN_IR__0__MASK EQU 0x01
PIN_IR__0__PC EQU CYREG_PRT2_PC0
PIN_IR__0__PORT EQU 2
PIN_IR__0__SHIFT EQU 0
PIN_IR__AG EQU CYREG_PRT2_AG
PIN_IR__AMUX EQU CYREG_PRT2_AMUX
PIN_IR__BIE EQU CYREG_PRT2_BIE
PIN_IR__BIT_MASK EQU CYREG_PRT2_BIT_MASK
PIN_IR__BYP EQU CYREG_PRT2_BYP
PIN_IR__CTL EQU CYREG_PRT2_CTL
PIN_IR__DM0 EQU CYREG_PRT2_DM0
PIN_IR__DM1 EQU CYREG_PRT2_DM1
PIN_IR__DM2 EQU CYREG_PRT2_DM2
PIN_IR__DR EQU CYREG_PRT2_DR
PIN_IR__INP_DIS EQU CYREG_PRT2_INP_DIS
PIN_IR__INTSTAT EQU CYREG_PICU2_INTSTAT
PIN_IR__INTTYPE_BASE EQU CYDEV_PICU_INTTYPE_PICU2_BASE
PIN_IR__LCD_COM_SEG EQU CYREG_PRT2_LCD_COM_SEG
PIN_IR__LCD_EN EQU CYREG_PRT2_LCD_EN
PIN_IR__MASK EQU 0x01
PIN_IR__PORT EQU 2
PIN_IR__PRT EQU CYREG_PRT2_PRT
PIN_IR__PRTDSI__CAPS_SEL EQU CYREG_PRT2_CAPS_SEL
PIN_IR__PRTDSI__DBL_SYNC_IN EQU CYREG_PRT2_DBL_SYNC_IN
PIN_IR__PRTDSI__OE_SEL0 EQU CYREG_PRT2_OE_SEL0
PIN_IR__PRTDSI__OE_SEL1 EQU CYREG_PRT2_OE_SEL1
PIN_IR__PRTDSI__OUT_SEL0 EQU CYREG_PRT2_OUT_SEL0
PIN_IR__PRTDSI__OUT_SEL1 EQU CYREG_PRT2_OUT_SEL1
PIN_IR__PRTDSI__SYNC_OUT EQU CYREG_PRT2_SYNC_OUT
PIN_IR__PS EQU CYREG_PRT2_PS
PIN_IR__SHIFT EQU 0
PIN_IR__SLW EQU CYREG_PRT2_SLW
PIN_IR__SNAP EQU CYREG_PICU2_SNAP

/* ADC_POT */
ADC_POT_ADC_SAR__CLK EQU CYREG_SAR0_CLK
ADC_POT_ADC_SAR__CSR0 EQU CYREG_SAR0_CSR0
ADC_POT_ADC_SAR__CSR1 EQU CYREG_SAR0_CSR1
ADC_POT_ADC_SAR__CSR2 EQU CYREG_SAR0_CSR2
ADC_POT_ADC_SAR__CSR3 EQU CYREG_SAR0_CSR3
ADC_POT_ADC_SAR__CSR4 EQU CYREG_SAR0_CSR4
ADC_POT_ADC_SAR__CSR5 EQU CYREG_SAR0_CSR5
ADC_POT_ADC_SAR__CSR6 EQU CYREG_SAR0_CSR6
ADC_POT_ADC_SAR__PM_ACT_CFG EQU CYREG_PM_ACT_CFG11
ADC_POT_ADC_SAR__PM_ACT_MSK EQU 0x01
ADC_POT_ADC_SAR__PM_STBY_CFG EQU CYREG_PM_STBY_CFG11
ADC_POT_ADC_SAR__PM_STBY_MSK EQU 0x01
ADC_POT_ADC_SAR__SW0 EQU CYREG_SAR0_SW0
ADC_POT_ADC_SAR__SW2 EQU CYREG_SAR0_SW2
ADC_POT_ADC_SAR__SW3 EQU CYREG_SAR0_SW3
ADC_POT_ADC_SAR__SW4 EQU CYREG_SAR0_SW4
ADC_POT_ADC_SAR__SW6 EQU CYREG_SAR0_SW6
ADC_POT_ADC_SAR__TR0 EQU CYREG_SAR0_TR0
ADC_POT_ADC_SAR__WRK0 EQU CYREG_SAR0_WRK0
ADC_POT_ADC_SAR__WRK1 EQU CYREG_SAR0_WRK1
ADC_POT_IRQ__INTC_CLR_EN_REG EQU CYREG_NVIC_CLRENA0
ADC_POT_IRQ__INTC_CLR_PD_REG EQU CYREG_NVIC_CLRPEND0
ADC_POT_IRQ__INTC_MASK EQU 0x01
ADC_POT_IRQ__INTC_NUMBER EQU 0
ADC_POT_IRQ__INTC_PRIOR_NUM EQU 7
ADC_POT_IRQ__INTC_PRIOR_REG EQU CYREG_NVIC_PRI_0
ADC_POT_IRQ__INTC_SET_EN_REG EQU CYREG_NVIC_SETENA0
ADC_POT_IRQ__INTC_SET_PD_REG EQU CYREG_NVIC_SETPEND0
ADC_POT_theACLK__CFG0 EQU CYREG_CLKDIST_ACFG0_CFG0
ADC_POT_theACLK__CFG1 EQU CYREG_CLKDIST_ACFG0_CFG1
ADC_POT_theACLK__CFG2 EQU CYREG_CLKDIST_ACFG0_CFG2
ADC_POT_theACLK__CFG2_SRC_SEL_MASK EQU 0x07
ADC_POT_theACLK__CFG3 EQU CYREG_CLKDIST_ACFG0_CFG3
ADC_POT_theACLK__CFG3_PHASE_DLY_MASK EQU 0x0F
ADC_POT_theACLK__INDEX EQU 0x00
ADC_POT_theACLK__PM_ACT_CFG EQU CYREG_PM_ACT_CFG1
ADC_POT_theACLK__PM_ACT_MSK EQU 0x01
ADC_POT_theACLK__PM_STBY_CFG EQU CYREG_PM_STBY_CFG1
ADC_POT_theACLK__PM_STBY_MSK EQU 0x01

/* PIN_POT */
PIN_POT__0__INTTYPE EQU CYREG_PICU2_INTTYPE4
PIN_POT__0__MASK EQU 0x10
PIN_POT__0__PC EQU CYREG_PRT2_PC4
PIN_POT__0__PORT EQU 2
PIN_POT__0__SHIFT EQU 4
PIN_POT__AG EQU CYREG_PRT2_AG
PIN_POT__AMUX EQU CYREG_PRT2_AMUX
PIN_POT__BIE EQU CYREG_PRT2_BIE
PIN_POT__BIT_MASK EQU CYREG_PRT2_BIT_MASK
PIN_POT__BYP EQU CYREG_PRT2_BYP
PIN_POT__CTL EQU CYREG_PRT2_CTL
PIN_POT__DM0 EQU CYREG_PRT2_DM0
PIN_POT__DM1 EQU CYREG_PRT2_DM1
PIN_POT__DM2 EQU CYREG_PRT2_DM2
PIN_POT__DR EQU CYREG_PRT2_DR
PIN_POT__INP_DIS EQU CYREG_PRT2_INP_DIS
PIN_POT__INTTYPE_BASE EQU CYDEV_PICU_INTTYPE_PICU2_BASE
PIN_POT__LCD_COM_SEG EQU CYREG_PRT2_LCD_COM_SEG
PIN_POT__LCD_EN EQU CYREG_PRT2_LCD_EN
PIN_POT__MASK EQU 0x10
PIN_POT__PORT EQU 2
PIN_POT__PRT EQU CYREG_PRT2_PRT
PIN_POT__PRTDSI__CAPS_SEL EQU CYREG_PRT2_CAPS_SEL
PIN_POT__PRTDSI__DBL_SYNC_IN EQU CYREG_PRT2_DBL_SYNC_IN
PIN_POT__PRTDSI__OE_SEL0 EQU CYREG_PRT2_OE_SEL0
PIN_POT__PRTDSI__OE_SEL1 EQU CYREG_PRT2_OE_SEL1
PIN_POT__PRTDSI__OUT_SEL0 EQU CYREG_PRT2_OUT_SEL0
PIN_POT__PRTDSI__OUT_SEL1 EQU CYREG_PRT2_OUT_SEL1
PIN_POT__PRTDSI__SYNC_OUT EQU CYREG_PRT2_SYNC_OUT
PIN_POT__PS EQU CYREG_PRT2_PS
PIN_POT__SHIFT EQU 4
PIN_POT__SLW EQU CYREG_PRT2_SLW

/* CLK_ALARM */
CLK_ALARM__CFG0 EQU CYREG_CLKDIST_DCFG0_CFG0
CLK_ALARM__CFG1 EQU CYREG_CLKDIST_DCFG0_CFG1
CLK_ALARM__CFG2 EQU CYREG_CLKDIST_DCFG0_CFG2
CLK_ALARM__CFG2_SRC_SEL_MASK EQU 0x07
CLK_ALARM__INDEX EQU 0x00
CLK_ALARM__PM_ACT_CFG EQU CYREG_PM_ACT_CFG2
CLK_ALARM__PM_ACT_MSK EQU 0x01
CLK_ALARM__PM_STBY_CFG EQU CYREG_PM_STBY_CFG2
CLK_ALARM__PM_STBY_MSK EQU 0x01

/* PIN_ALARM */
PIN_ALARM__0__INTTYPE EQU CYREG_PICU2_INTTYPE5
PIN_ALARM__0__MASK EQU 0x20
PIN_ALARM__0__PC EQU CYREG_PRT2_PC5
PIN_ALARM__0__PORT EQU 2
PIN_ALARM__0__SHIFT EQU 5
PIN_ALARM__AG EQU CYREG_PRT2_AG
PIN_ALARM__AMUX EQU CYREG_PRT2_AMUX
PIN_ALARM__BIE EQU CYREG_PRT2_BIE
PIN_ALARM__BIT_MASK EQU CYREG_PRT2_BIT_MASK
PIN_ALARM__BYP EQU CYREG_PRT2_BYP
PIN_ALARM__CTL EQU CYREG_PRT2_CTL
PIN_ALARM__DM0 EQU CYREG_PRT2_DM0
PIN_ALARM__DM1 EQU CYREG_PRT2_DM1
PIN_ALARM__DM2 EQU CYREG_PRT2_DM2
PIN_ALARM__DR EQU CYREG_PRT2_DR
PIN_ALARM__INP_DIS EQU CYREG_PRT2_INP_DIS
PIN_ALARM__INTTYPE_BASE EQU CYDEV_PICU_INTTYPE_PICU2_BASE
PIN_ALARM__LCD_COM_SEG EQU CYREG_PRT2_LCD_COM_SEG
PIN_ALARM__LCD_EN EQU CYREG_PRT2_LCD_EN
PIN_ALARM__MASK EQU 0x20
PIN_ALARM__PORT EQU 2
PIN_ALARM__PRT EQU CYREG_PRT2_PRT
PIN_ALARM__PRTDSI__CAPS_SEL EQU CYREG_PRT2_CAPS_SEL
PIN_ALARM__PRTDSI__DBL_SYNC_IN EQU CYREG_PRT2_DBL_SYNC_IN
PIN_ALARM__PRTDSI__OE_SEL0 EQU CYREG_PRT2_OE_SEL0
PIN_ALARM__PRTDSI__OE_SEL1 EQU CYREG_PRT2_OE_SEL1
PIN_ALARM__PRTDSI__OUT_SEL0 EQU CYREG_PRT2_OUT_SEL0
PIN_ALARM__PRTDSI__OUT_SEL1 EQU CYREG_PRT2_OUT_SEL1
PIN_ALARM__PRTDSI__SYNC_OUT EQU CYREG_PRT2_SYNC_OUT
PIN_ALARM__PS EQU CYREG_PRT2_PS
PIN_ALARM__SHIFT EQU 5
PIN_ALARM__SLW EQU CYREG_PRT2_SLW

/* PIN_O_LED */
PIN_O_LED__0__INTTYPE EQU CYREG_PICU2_INTTYPE1
PIN_O_LED__0__MASK EQU 0x02
PIN_O_LED__0__PC EQU CYREG_PRT2_PC1
PIN_O_LED__0__PORT EQU 2
PIN_O_LED__0__SHIFT EQU 1
PIN_O_LED__AG EQU CYREG_PRT2_AG
PIN_O_LED__AMUX EQU CYREG_PRT2_AMUX
PIN_O_LED__BIE EQU CYREG_PRT2_BIE
PIN_O_LED__BIT_MASK EQU CYREG_PRT2_BIT_MASK
PIN_O_LED__BYP EQU CYREG_PRT2_BYP
PIN_O_LED__CTL EQU CYREG_PRT2_CTL
PIN_O_LED__DM0 EQU CYREG_PRT2_DM0
PIN_O_LED__DM1 EQU CYREG_PRT2_DM1
PIN_O_LED__DM2 EQU CYREG_PRT2_DM2
PIN_O_LED__DR EQU CYREG_PRT2_DR
PIN_O_LED__INP_DIS EQU CYREG_PRT2_INP_DIS
PIN_O_LED__INTTYPE_BASE EQU CYDEV_PICU_INTTYPE_PICU2_BASE
PIN_O_LED__LCD_COM_SEG EQU CYREG_PRT2_LCD_COM_SEG
PIN_O_LED__LCD_EN EQU CYREG_PRT2_LCD_EN
PIN_O_LED__MASK EQU 0x02
PIN_O_LED__PORT EQU 2
PIN_O_LED__PRT EQU CYREG_PRT2_PRT
PIN_O_LED__PRTDSI__CAPS_SEL EQU CYREG_PRT2_CAPS_SEL
PIN_O_LED__PRTDSI__DBL_SYNC_IN EQU CYREG_PRT2_DBL_SYNC_IN
PIN_O_LED__PRTDSI__OE_SEL0 EQU CYREG_PRT2_OE_SEL0
PIN_O_LED__PRTDSI__OE_SEL1 EQU CYREG_PRT2_OE_SEL1
PIN_O_LED__PRTDSI__OUT_SEL0 EQU CYREG_PRT2_OUT_SEL0
PIN_O_LED__PRTDSI__OUT_SEL1 EQU CYREG_PRT2_OUT_SEL1
PIN_O_LED__PRTDSI__SYNC_OUT EQU CYREG_PRT2_SYNC_OUT
PIN_O_LED__PS EQU CYREG_PRT2_PS
PIN_O_LED__SHIFT EQU 1
PIN_O_LED__SLW EQU CYREG_PRT2_SLW

/* PWM_ALARM */
PWM_ALARM_PWMUDB_genblk1_ctrlreg__7__MASK EQU 0x80
PWM_ALARM_PWMUDB_genblk1_ctrlreg__7__POS EQU 7
PWM_ALARM_PWMUDB_genblk1_ctrlreg__CONTROL_AUX_CTL_REG EQU CYREG_B0_UDB15_ACTL
PWM_ALARM_PWMUDB_genblk1_ctrlreg__CONTROL_REG EQU CYREG_B0_UDB15_CTL
PWM_ALARM_PWMUDB_genblk1_ctrlreg__CONTROL_ST_REG EQU CYREG_B0_UDB15_ST_CTL
PWM_ALARM_PWMUDB_genblk1_ctrlreg__COUNT_REG EQU CYREG_B0_UDB15_CTL
PWM_ALARM_PWMUDB_genblk1_ctrlreg__COUNT_ST_REG EQU CYREG_B0_UDB15_ST_CTL
PWM_ALARM_PWMUDB_genblk1_ctrlreg__MASK EQU 0x80
PWM_ALARM_PWMUDB_genblk1_ctrlreg__MASK_CTL_AUX_CTL_REG EQU CYREG_B0_UDB15_MSK_ACTL
PWM_ALARM_PWMUDB_genblk1_ctrlreg__PER_CTL_AUX_CTL_REG EQU CYREG_B0_UDB15_MSK_ACTL
PWM_ALARM_PWMUDB_genblk1_ctrlreg__PERIOD_REG EQU CYREG_B0_UDB15_MSK
PWM_ALARM_PWMUDB_genblk8_stsreg__0__MASK EQU 0x01
PWM_ALARM_PWMUDB_genblk8_stsreg__0__POS EQU 0
PWM_ALARM_PWMUDB_genblk8_stsreg__2__MASK EQU 0x04
PWM_ALARM_PWMUDB_genblk8_stsreg__2__POS EQU 2
PWM_ALARM_PWMUDB_genblk8_stsreg__3__MASK EQU 0x08
PWM_ALARM_PWMUDB_genblk8_stsreg__3__POS EQU 3
PWM_ALARM_PWMUDB_genblk8_stsreg__MASK EQU 0x0D
PWM_ALARM_PWMUDB_genblk8_stsreg__MASK_REG EQU CYREG_B0_UDB15_MSK
PWM_ALARM_PWMUDB_genblk8_stsreg__MASK_ST_AUX_CTL_REG EQU CYREG_B0_UDB15_MSK_ACTL
PWM_ALARM_PWMUDB_genblk8_stsreg__PER_ST_AUX_CTL_REG EQU CYREG_B0_UDB15_MSK_ACTL
PWM_ALARM_PWMUDB_genblk8_stsreg__STATUS_AUX_CTL_REG EQU CYREG_B0_UDB15_ACTL
PWM_ALARM_PWMUDB_genblk8_stsreg__STATUS_CNT_REG EQU CYREG_B0_UDB15_ST_CTL
PWM_ALARM_PWMUDB_genblk8_stsreg__STATUS_CONTROL_REG EQU CYREG_B0_UDB15_ST_CTL
PWM_ALARM_PWMUDB_genblk8_stsreg__STATUS_REG EQU CYREG_B0_UDB15_ST
PWM_ALARM_PWMUDB_sP16_pwmdp_u0__16BIT_A0_REG EQU CYREG_B0_UDB14_15_A0
PWM_ALARM_PWMUDB_sP16_pwmdp_u0__16BIT_A1_REG EQU CYREG_B0_UDB14_15_A1
PWM_ALARM_PWMUDB_sP16_pwmdp_u0__16BIT_D0_REG EQU CYREG_B0_UDB14_15_D0
PWM_ALARM_PWMUDB_sP16_pwmdp_u0__16BIT_D1_REG EQU CYREG_B0_UDB14_15_D1
PWM_ALARM_PWMUDB_sP16_pwmdp_u0__16BIT_DP_AUX_CTL_REG EQU CYREG_B0_UDB14_15_ACTL
PWM_ALARM_PWMUDB_sP16_pwmdp_u0__16BIT_F0_REG EQU CYREG_B0_UDB14_15_F0
PWM_ALARM_PWMUDB_sP16_pwmdp_u0__16BIT_F1_REG EQU CYREG_B0_UDB14_15_F1
PWM_ALARM_PWMUDB_sP16_pwmdp_u0__A0_A1_REG EQU CYREG_B0_UDB14_A0_A1
PWM_ALARM_PWMUDB_sP16_pwmdp_u0__A0_REG EQU CYREG_B0_UDB14_A0
PWM_ALARM_PWMUDB_sP16_pwmdp_u0__A1_REG EQU CYREG_B0_UDB14_A1
PWM_ALARM_PWMUDB_sP16_pwmdp_u0__D0_D1_REG EQU CYREG_B0_UDB14_D0_D1
PWM_ALARM_PWMUDB_sP16_pwmdp_u0__D0_REG EQU CYREG_B0_UDB14_D0
PWM_ALARM_PWMUDB_sP16_pwmdp_u0__D1_REG EQU CYREG_B0_UDB14_D1
PWM_ALARM_PWMUDB_sP16_pwmdp_u0__DP_AUX_CTL_REG EQU CYREG_B0_UDB14_ACTL
PWM_ALARM_PWMUDB_sP16_pwmdp_u0__F0_F1_REG EQU CYREG_B0_UDB14_F0_F1
PWM_ALARM_PWMUDB_sP16_pwmdp_u0__F0_REG EQU CYREG_B0_UDB14_F0
PWM_ALARM_PWMUDB_sP16_pwmdp_u0__F1_REG EQU CYREG_B0_UDB14_F1
PWM_ALARM_PWMUDB_sP16_pwmdp_u1__A0_A1_REG EQU CYREG_B0_UDB15_A0_A1
PWM_ALARM_PWMUDB_sP16_pwmdp_u1__A0_REG EQU CYREG_B0_UDB15_A0
PWM_ALARM_PWMUDB_sP16_pwmdp_u1__A1_REG EQU CYREG_B0_UDB15_A1
PWM_ALARM_PWMUDB_sP16_pwmdp_u1__D0_D1_REG EQU CYREG_B0_UDB15_D0_D1
PWM_ALARM_PWMUDB_sP16_pwmdp_u1__D0_REG EQU CYREG_B0_UDB15_D0
PWM_ALARM_PWMUDB_sP16_pwmdp_u1__D1_REG EQU CYREG_B0_UDB15_D1
PWM_ALARM_PWMUDB_sP16_pwmdp_u1__DP_AUX_CTL_REG EQU CYREG_B0_UDB15_ACTL
PWM_ALARM_PWMUDB_sP16_pwmdp_u1__F0_F1_REG EQU CYREG_B0_UDB15_F0_F1
PWM_ALARM_PWMUDB_sP16_pwmdp_u1__F0_REG EQU CYREG_B0_UDB15_F0
PWM_ALARM_PWMUDB_sP16_pwmdp_u1__F1_REG EQU CYREG_B0_UDB15_F1
PWM_ALARM_PWMUDB_sP16_pwmdp_u1__MSK_DP_AUX_CTL_REG EQU CYREG_B0_UDB15_MSK_ACTL
PWM_ALARM_PWMUDB_sP16_pwmdp_u1__PER_DP_AUX_CTL_REG EQU CYREG_B0_UDB15_MSK_ACTL

/* PWM_O_LED */
PWM_O_LED_PWMUDB_genblk1_ctrlreg__16BIT_CONTROL_AUX_CTL_REG EQU CYREG_B0_UDB11_12_ACTL
PWM_O_LED_PWMUDB_genblk1_ctrlreg__16BIT_CONTROL_CONTROL_REG EQU CYREG_B0_UDB11_12_CTL
PWM_O_LED_PWMUDB_genblk1_ctrlreg__16BIT_CONTROL_COUNT_REG EQU CYREG_B0_UDB11_12_CTL
PWM_O_LED_PWMUDB_genblk1_ctrlreg__16BIT_COUNT_CONTROL_REG EQU CYREG_B0_UDB11_12_CTL
PWM_O_LED_PWMUDB_genblk1_ctrlreg__16BIT_COUNT_COUNT_REG EQU CYREG_B0_UDB11_12_CTL
PWM_O_LED_PWMUDB_genblk1_ctrlreg__16BIT_MASK_MASK_REG EQU CYREG_B0_UDB11_12_MSK
PWM_O_LED_PWMUDB_genblk1_ctrlreg__16BIT_MASK_PERIOD_REG EQU CYREG_B0_UDB11_12_MSK
PWM_O_LED_PWMUDB_genblk1_ctrlreg__16BIT_PERIOD_MASK_REG EQU CYREG_B0_UDB11_12_MSK
PWM_O_LED_PWMUDB_genblk1_ctrlreg__16BIT_PERIOD_PERIOD_REG EQU CYREG_B0_UDB11_12_MSK
PWM_O_LED_PWMUDB_genblk1_ctrlreg__7__MASK EQU 0x80
PWM_O_LED_PWMUDB_genblk1_ctrlreg__7__POS EQU 7
PWM_O_LED_PWMUDB_genblk1_ctrlreg__CONTROL_AUX_CTL_REG EQU CYREG_B0_UDB11_ACTL
PWM_O_LED_PWMUDB_genblk1_ctrlreg__CONTROL_REG EQU CYREG_B0_UDB11_CTL
PWM_O_LED_PWMUDB_genblk1_ctrlreg__CONTROL_ST_REG EQU CYREG_B0_UDB11_ST_CTL
PWM_O_LED_PWMUDB_genblk1_ctrlreg__COUNT_REG EQU CYREG_B0_UDB11_CTL
PWM_O_LED_PWMUDB_genblk1_ctrlreg__COUNT_ST_REG EQU CYREG_B0_UDB11_ST_CTL
PWM_O_LED_PWMUDB_genblk1_ctrlreg__MASK EQU 0x80
PWM_O_LED_PWMUDB_genblk1_ctrlreg__MASK_CTL_AUX_CTL_REG EQU CYREG_B0_UDB11_MSK_ACTL
PWM_O_LED_PWMUDB_genblk1_ctrlreg__PER_CTL_AUX_CTL_REG EQU CYREG_B0_UDB11_MSK_ACTL
PWM_O_LED_PWMUDB_genblk1_ctrlreg__PERIOD_REG EQU CYREG_B0_UDB11_MSK
PWM_O_LED_PWMUDB_genblk8_stsreg__0__MASK EQU 0x01
PWM_O_LED_PWMUDB_genblk8_stsreg__0__POS EQU 0
PWM_O_LED_PWMUDB_genblk8_stsreg__16BIT_STATUS_AUX_CTL_REG EQU CYREG_B0_UDB11_12_ACTL
PWM_O_LED_PWMUDB_genblk8_stsreg__16BIT_STATUS_REG EQU CYREG_B0_UDB11_12_ST
PWM_O_LED_PWMUDB_genblk8_stsreg__2__MASK EQU 0x04
PWM_O_LED_PWMUDB_genblk8_stsreg__2__POS EQU 2
PWM_O_LED_PWMUDB_genblk8_stsreg__3__MASK EQU 0x08
PWM_O_LED_PWMUDB_genblk8_stsreg__3__POS EQU 3
PWM_O_LED_PWMUDB_genblk8_stsreg__MASK EQU 0x0D
PWM_O_LED_PWMUDB_genblk8_stsreg__MASK_REG EQU CYREG_B0_UDB11_MSK
PWM_O_LED_PWMUDB_genblk8_stsreg__MASK_ST_AUX_CTL_REG EQU CYREG_B0_UDB11_MSK_ACTL
PWM_O_LED_PWMUDB_genblk8_stsreg__PER_ST_AUX_CTL_REG EQU CYREG_B0_UDB11_MSK_ACTL
PWM_O_LED_PWMUDB_genblk8_stsreg__STATUS_AUX_CTL_REG EQU CYREG_B0_UDB11_ACTL
PWM_O_LED_PWMUDB_genblk8_stsreg__STATUS_CNT_REG EQU CYREG_B0_UDB11_ST_CTL
PWM_O_LED_PWMUDB_genblk8_stsreg__STATUS_CONTROL_REG EQU CYREG_B0_UDB11_ST_CTL
PWM_O_LED_PWMUDB_genblk8_stsreg__STATUS_REG EQU CYREG_B0_UDB11_ST
PWM_O_LED_PWMUDB_sP16_pwmdp_u0__16BIT_A0_REG EQU CYREG_B0_UDB10_11_A0
PWM_O_LED_PWMUDB_sP16_pwmdp_u0__16BIT_A1_REG EQU CYREG_B0_UDB10_11_A1
PWM_O_LED_PWMUDB_sP16_pwmdp_u0__16BIT_D0_REG EQU CYREG_B0_UDB10_11_D0
PWM_O_LED_PWMUDB_sP16_pwmdp_u0__16BIT_D1_REG EQU CYREG_B0_UDB10_11_D1
PWM_O_LED_PWMUDB_sP16_pwmdp_u0__16BIT_DP_AUX_CTL_REG EQU CYREG_B0_UDB10_11_ACTL
PWM_O_LED_PWMUDB_sP16_pwmdp_u0__16BIT_F0_REG EQU CYREG_B0_UDB10_11_F0
PWM_O_LED_PWMUDB_sP16_pwmdp_u0__16BIT_F1_REG EQU CYREG_B0_UDB10_11_F1
PWM_O_LED_PWMUDB_sP16_pwmdp_u0__A0_A1_REG EQU CYREG_B0_UDB10_A0_A1
PWM_O_LED_PWMUDB_sP16_pwmdp_u0__A0_REG EQU CYREG_B0_UDB10_A0
PWM_O_LED_PWMUDB_sP16_pwmdp_u0__A1_REG EQU CYREG_B0_UDB10_A1
PWM_O_LED_PWMUDB_sP16_pwmdp_u0__D0_D1_REG EQU CYREG_B0_UDB10_D0_D1
PWM_O_LED_PWMUDB_sP16_pwmdp_u0__D0_REG EQU CYREG_B0_UDB10_D0
PWM_O_LED_PWMUDB_sP16_pwmdp_u0__D1_REG EQU CYREG_B0_UDB10_D1
PWM_O_LED_PWMUDB_sP16_pwmdp_u0__DP_AUX_CTL_REG EQU CYREG_B0_UDB10_ACTL
PWM_O_LED_PWMUDB_sP16_pwmdp_u0__F0_F1_REG EQU CYREG_B0_UDB10_F0_F1
PWM_O_LED_PWMUDB_sP16_pwmdp_u0__F0_REG EQU CYREG_B0_UDB10_F0
PWM_O_LED_PWMUDB_sP16_pwmdp_u0__F1_REG EQU CYREG_B0_UDB10_F1
PWM_O_LED_PWMUDB_sP16_pwmdp_u1__16BIT_A0_REG EQU CYREG_B0_UDB11_12_A0
PWM_O_LED_PWMUDB_sP16_pwmdp_u1__16BIT_A1_REG EQU CYREG_B0_UDB11_12_A1
PWM_O_LED_PWMUDB_sP16_pwmdp_u1__16BIT_D0_REG EQU CYREG_B0_UDB11_12_D0
PWM_O_LED_PWMUDB_sP16_pwmdp_u1__16BIT_D1_REG EQU CYREG_B0_UDB11_12_D1
PWM_O_LED_PWMUDB_sP16_pwmdp_u1__16BIT_DP_AUX_CTL_REG EQU CYREG_B0_UDB11_12_ACTL
PWM_O_LED_PWMUDB_sP16_pwmdp_u1__16BIT_F0_REG EQU CYREG_B0_UDB11_12_F0
PWM_O_LED_PWMUDB_sP16_pwmdp_u1__16BIT_F1_REG EQU CYREG_B0_UDB11_12_F1
PWM_O_LED_PWMUDB_sP16_pwmdp_u1__A0_A1_REG EQU CYREG_B0_UDB11_A0_A1
PWM_O_LED_PWMUDB_sP16_pwmdp_u1__A0_REG EQU CYREG_B0_UDB11_A0
PWM_O_LED_PWMUDB_sP16_pwmdp_u1__A1_REG EQU CYREG_B0_UDB11_A1
PWM_O_LED_PWMUDB_sP16_pwmdp_u1__D0_D1_REG EQU CYREG_B0_UDB11_D0_D1
PWM_O_LED_PWMUDB_sP16_pwmdp_u1__D0_REG EQU CYREG_B0_UDB11_D0
PWM_O_LED_PWMUDB_sP16_pwmdp_u1__D1_REG EQU CYREG_B0_UDB11_D1
PWM_O_LED_PWMUDB_sP16_pwmdp_u1__DP_AUX_CTL_REG EQU CYREG_B0_UDB11_ACTL
PWM_O_LED_PWMUDB_sP16_pwmdp_u1__F0_F1_REG EQU CYREG_B0_UDB11_F0_F1
PWM_O_LED_PWMUDB_sP16_pwmdp_u1__F0_REG EQU CYREG_B0_UDB11_F0
PWM_O_LED_PWMUDB_sP16_pwmdp_u1__F1_REG EQU CYREG_B0_UDB11_F1
PWM_O_LED_PWMUDB_sP16_pwmdp_u1__MSK_DP_AUX_CTL_REG EQU CYREG_B0_UDB11_MSK_ACTL
PWM_O_LED_PWMUDB_sP16_pwmdp_u1__PER_DP_AUX_CTL_REG EQU CYREG_B0_UDB11_MSK_ACTL

/* CLK_BUZZER */
CLK_BUZZER__CFG0 EQU CYREG_CLKDIST_DCFG2_CFG0
CLK_BUZZER__CFG1 EQU CYREG_CLKDIST_DCFG2_CFG1
CLK_BUZZER__CFG2 EQU CYREG_CLKDIST_DCFG2_CFG2
CLK_BUZZER__CFG2_SRC_SEL_MASK EQU 0x07
CLK_BUZZER__INDEX EQU 0x02
CLK_BUZZER__PM_ACT_CFG EQU CYREG_PM_ACT_CFG2
CLK_BUZZER__PM_ACT_MSK EQU 0x04
CLK_BUZZER__PM_STBY_CFG EQU CYREG_PM_STBY_CFG2
CLK_BUZZER__PM_STBY_MSK EQU 0x04

/* PIN_BUZZER */
PIN_BUZZER__0__INTTYPE EQU CYREG_PICU2_INTTYPE3
PIN_BUZZER__0__MASK EQU 0x08
PIN_BUZZER__0__PC EQU CYREG_PRT2_PC3
PIN_BUZZER__0__PORT EQU 2
PIN_BUZZER__0__SHIFT EQU 3
PIN_BUZZER__AG EQU CYREG_PRT2_AG
PIN_BUZZER__AMUX EQU CYREG_PRT2_AMUX
PIN_BUZZER__BIE EQU CYREG_PRT2_BIE
PIN_BUZZER__BIT_MASK EQU CYREG_PRT2_BIT_MASK
PIN_BUZZER__BYP EQU CYREG_PRT2_BYP
PIN_BUZZER__CTL EQU CYREG_PRT2_CTL
PIN_BUZZER__DM0 EQU CYREG_PRT2_DM0
PIN_BUZZER__DM1 EQU CYREG_PRT2_DM1
PIN_BUZZER__DM2 EQU CYREG_PRT2_DM2
PIN_BUZZER__DR EQU CYREG_PRT2_DR
PIN_BUZZER__INP_DIS EQU CYREG_PRT2_INP_DIS
PIN_BUZZER__INTTYPE_BASE EQU CYDEV_PICU_INTTYPE_PICU2_BASE
PIN_BUZZER__LCD_COM_SEG EQU CYREG_PRT2_LCD_COM_SEG
PIN_BUZZER__LCD_EN EQU CYREG_PRT2_LCD_EN
PIN_BUZZER__MASK EQU 0x08
PIN_BUZZER__PORT EQU 2
PIN_BUZZER__PRT EQU CYREG_PRT2_PRT
PIN_BUZZER__PRTDSI__CAPS_SEL EQU CYREG_PRT2_CAPS_SEL
PIN_BUZZER__PRTDSI__DBL_SYNC_IN EQU CYREG_PRT2_DBL_SYNC_IN
PIN_BUZZER__PRTDSI__OE_SEL0 EQU CYREG_PRT2_OE_SEL0
PIN_BUZZER__PRTDSI__OE_SEL1 EQU CYREG_PRT2_OE_SEL1
PIN_BUZZER__PRTDSI__OUT_SEL0 EQU CYREG_PRT2_OUT_SEL0
PIN_BUZZER__PRTDSI__OUT_SEL1 EQU CYREG_PRT2_OUT_SEL1
PIN_BUZZER__PRTDSI__SYNC_OUT EQU CYREG_PRT2_SYNC_OUT
PIN_BUZZER__PS EQU CYREG_PRT2_PS
PIN_BUZZER__SHIFT EQU 3
PIN_BUZZER__SLW EQU CYREG_PRT2_SLW

/* PWM_BUZZER */
PWM_BUZZER_PWMUDB_genblk1_ctrlreg__16BIT_CONTROL_AUX_CTL_REG EQU CYREG_B0_UDB13_14_ACTL
PWM_BUZZER_PWMUDB_genblk1_ctrlreg__16BIT_CONTROL_CONTROL_REG EQU CYREG_B0_UDB13_14_CTL
PWM_BUZZER_PWMUDB_genblk1_ctrlreg__16BIT_CONTROL_COUNT_REG EQU CYREG_B0_UDB13_14_CTL
PWM_BUZZER_PWMUDB_genblk1_ctrlreg__16BIT_COUNT_CONTROL_REG EQU CYREG_B0_UDB13_14_CTL
PWM_BUZZER_PWMUDB_genblk1_ctrlreg__16BIT_COUNT_COUNT_REG EQU CYREG_B0_UDB13_14_CTL
PWM_BUZZER_PWMUDB_genblk1_ctrlreg__16BIT_MASK_MASK_REG EQU CYREG_B0_UDB13_14_MSK
PWM_BUZZER_PWMUDB_genblk1_ctrlreg__16BIT_MASK_PERIOD_REG EQU CYREG_B0_UDB13_14_MSK
PWM_BUZZER_PWMUDB_genblk1_ctrlreg__16BIT_PERIOD_MASK_REG EQU CYREG_B0_UDB13_14_MSK
PWM_BUZZER_PWMUDB_genblk1_ctrlreg__16BIT_PERIOD_PERIOD_REG EQU CYREG_B0_UDB13_14_MSK
PWM_BUZZER_PWMUDB_genblk1_ctrlreg__7__MASK EQU 0x80
PWM_BUZZER_PWMUDB_genblk1_ctrlreg__7__POS EQU 7
PWM_BUZZER_PWMUDB_genblk1_ctrlreg__CONTROL_AUX_CTL_REG EQU CYREG_B0_UDB13_ACTL
PWM_BUZZER_PWMUDB_genblk1_ctrlreg__CONTROL_REG EQU CYREG_B0_UDB13_CTL
PWM_BUZZER_PWMUDB_genblk1_ctrlreg__CONTROL_ST_REG EQU CYREG_B0_UDB13_ST_CTL
PWM_BUZZER_PWMUDB_genblk1_ctrlreg__COUNT_REG EQU CYREG_B0_UDB13_CTL
PWM_BUZZER_PWMUDB_genblk1_ctrlreg__COUNT_ST_REG EQU CYREG_B0_UDB13_ST_CTL
PWM_BUZZER_PWMUDB_genblk1_ctrlreg__MASK EQU 0x80
PWM_BUZZER_PWMUDB_genblk1_ctrlreg__MASK_CTL_AUX_CTL_REG EQU CYREG_B0_UDB13_MSK_ACTL
PWM_BUZZER_PWMUDB_genblk1_ctrlreg__PER_CTL_AUX_CTL_REG EQU CYREG_B0_UDB13_MSK_ACTL
PWM_BUZZER_PWMUDB_genblk1_ctrlreg__PERIOD_REG EQU CYREG_B0_UDB13_MSK
PWM_BUZZER_PWMUDB_genblk8_stsreg__0__MASK EQU 0x01
PWM_BUZZER_PWMUDB_genblk8_stsreg__0__POS EQU 0
PWM_BUZZER_PWMUDB_genblk8_stsreg__16BIT_STATUS_AUX_CTL_REG EQU CYREG_B0_UDB13_14_ACTL
PWM_BUZZER_PWMUDB_genblk8_stsreg__16BIT_STATUS_REG EQU CYREG_B0_UDB13_14_ST
PWM_BUZZER_PWMUDB_genblk8_stsreg__2__MASK EQU 0x04
PWM_BUZZER_PWMUDB_genblk8_stsreg__2__POS EQU 2
PWM_BUZZER_PWMUDB_genblk8_stsreg__3__MASK EQU 0x08
PWM_BUZZER_PWMUDB_genblk8_stsreg__3__POS EQU 3
PWM_BUZZER_PWMUDB_genblk8_stsreg__MASK EQU 0x0D
PWM_BUZZER_PWMUDB_genblk8_stsreg__MASK_REG EQU CYREG_B0_UDB13_MSK
PWM_BUZZER_PWMUDB_genblk8_stsreg__MASK_ST_AUX_CTL_REG EQU CYREG_B0_UDB13_MSK_ACTL
PWM_BUZZER_PWMUDB_genblk8_stsreg__PER_ST_AUX_CTL_REG EQU CYREG_B0_UDB13_MSK_ACTL
PWM_BUZZER_PWMUDB_genblk8_stsreg__STATUS_AUX_CTL_REG EQU CYREG_B0_UDB13_ACTL
PWM_BUZZER_PWMUDB_genblk8_stsreg__STATUS_CNT_REG EQU CYREG_B0_UDB13_ST_CTL
PWM_BUZZER_PWMUDB_genblk8_stsreg__STATUS_CONTROL_REG EQU CYREG_B0_UDB13_ST_CTL
PWM_BUZZER_PWMUDB_genblk8_stsreg__STATUS_REG EQU CYREG_B0_UDB13_ST
PWM_BUZZER_PWMUDB_sP16_pwmdp_u0__16BIT_A0_REG EQU CYREG_B0_UDB12_13_A0
PWM_BUZZER_PWMUDB_sP16_pwmdp_u0__16BIT_A1_REG EQU CYREG_B0_UDB12_13_A1
PWM_BUZZER_PWMUDB_sP16_pwmdp_u0__16BIT_D0_REG EQU CYREG_B0_UDB12_13_D0
PWM_BUZZER_PWMUDB_sP16_pwmdp_u0__16BIT_D1_REG EQU CYREG_B0_UDB12_13_D1
PWM_BUZZER_PWMUDB_sP16_pwmdp_u0__16BIT_DP_AUX_CTL_REG EQU CYREG_B0_UDB12_13_ACTL
PWM_BUZZER_PWMUDB_sP16_pwmdp_u0__16BIT_F0_REG EQU CYREG_B0_UDB12_13_F0
PWM_BUZZER_PWMUDB_sP16_pwmdp_u0__16BIT_F1_REG EQU CYREG_B0_UDB12_13_F1
PWM_BUZZER_PWMUDB_sP16_pwmdp_u0__A0_A1_REG EQU CYREG_B0_UDB12_A0_A1
PWM_BUZZER_PWMUDB_sP16_pwmdp_u0__A0_REG EQU CYREG_B0_UDB12_A0
PWM_BUZZER_PWMUDB_sP16_pwmdp_u0__A1_REG EQU CYREG_B0_UDB12_A1
PWM_BUZZER_PWMUDB_sP16_pwmdp_u0__D0_D1_REG EQU CYREG_B0_UDB12_D0_D1
PWM_BUZZER_PWMUDB_sP16_pwmdp_u0__D0_REG EQU CYREG_B0_UDB12_D0
PWM_BUZZER_PWMUDB_sP16_pwmdp_u0__D1_REG EQU CYREG_B0_UDB12_D1
PWM_BUZZER_PWMUDB_sP16_pwmdp_u0__DP_AUX_CTL_REG EQU CYREG_B0_UDB12_ACTL
PWM_BUZZER_PWMUDB_sP16_pwmdp_u0__F0_F1_REG EQU CYREG_B0_UDB12_F0_F1
PWM_BUZZER_PWMUDB_sP16_pwmdp_u0__F0_REG EQU CYREG_B0_UDB12_F0
PWM_BUZZER_PWMUDB_sP16_pwmdp_u0__F1_REG EQU CYREG_B0_UDB12_F1
PWM_BUZZER_PWMUDB_sP16_pwmdp_u1__16BIT_A0_REG EQU CYREG_B0_UDB13_14_A0
PWM_BUZZER_PWMUDB_sP16_pwmdp_u1__16BIT_A1_REG EQU CYREG_B0_UDB13_14_A1
PWM_BUZZER_PWMUDB_sP16_pwmdp_u1__16BIT_D0_REG EQU CYREG_B0_UDB13_14_D0
PWM_BUZZER_PWMUDB_sP16_pwmdp_u1__16BIT_D1_REG EQU CYREG_B0_UDB13_14_D1
PWM_BUZZER_PWMUDB_sP16_pwmdp_u1__16BIT_DP_AUX_CTL_REG EQU CYREG_B0_UDB13_14_ACTL
PWM_BUZZER_PWMUDB_sP16_pwmdp_u1__16BIT_F0_REG EQU CYREG_B0_UDB13_14_F0
PWM_BUZZER_PWMUDB_sP16_pwmdp_u1__16BIT_F1_REG EQU CYREG_B0_UDB13_14_F1
PWM_BUZZER_PWMUDB_sP16_pwmdp_u1__A0_A1_REG EQU CYREG_B0_UDB13_A0_A1
PWM_BUZZER_PWMUDB_sP16_pwmdp_u1__A0_REG EQU CYREG_B0_UDB13_A0
PWM_BUZZER_PWMUDB_sP16_pwmdp_u1__A1_REG EQU CYREG_B0_UDB13_A1
PWM_BUZZER_PWMUDB_sP16_pwmdp_u1__D0_D1_REG EQU CYREG_B0_UDB13_D0_D1
PWM_BUZZER_PWMUDB_sP16_pwmdp_u1__D0_REG EQU CYREG_B0_UDB13_D0
PWM_BUZZER_PWMUDB_sP16_pwmdp_u1__D1_REG EQU CYREG_B0_UDB13_D1
PWM_BUZZER_PWMUDB_sP16_pwmdp_u1__DP_AUX_CTL_REG EQU CYREG_B0_UDB13_ACTL
PWM_BUZZER_PWMUDB_sP16_pwmdp_u1__F0_F1_REG EQU CYREG_B0_UDB13_F0_F1
PWM_BUZZER_PWMUDB_sP16_pwmdp_u1__F0_REG EQU CYREG_B0_UDB13_F0
PWM_BUZZER_PWMUDB_sP16_pwmdp_u1__F1_REG EQU CYREG_B0_UDB13_F1
PWM_BUZZER_PWMUDB_sP16_pwmdp_u1__MSK_DP_AUX_CTL_REG EQU CYREG_B0_UDB13_MSK_ACTL
PWM_BUZZER_PWMUDB_sP16_pwmdp_u1__PER_DP_AUX_CTL_REG EQU CYREG_B0_UDB13_MSK_ACTL

/* CLOCK_O_LED */
CLOCK_O_LED__CFG0 EQU CYREG_CLKDIST_DCFG1_CFG0
CLOCK_O_LED__CFG1 EQU CYREG_CLKDIST_DCFG1_CFG1
CLOCK_O_LED__CFG2 EQU CYREG_CLKDIST_DCFG1_CFG2
CLOCK_O_LED__CFG2_SRC_SEL_MASK EQU 0x07
CLOCK_O_LED__INDEX EQU 0x01
CLOCK_O_LED__PM_ACT_CFG EQU CYREG_PM_ACT_CFG2
CLOCK_O_LED__PM_ACT_MSK EQU 0x02
CLOCK_O_LED__PM_STBY_CFG EQU CYREG_PM_STBY_CFG2
CLOCK_O_LED__PM_STBY_MSK EQU 0x02

/* I2C_DISPLAY */
I2C_DISPLAY_I2C_FF__ADR EQU CYREG_I2C_ADR
I2C_DISPLAY_I2C_FF__CFG EQU CYREG_I2C_CFG
I2C_DISPLAY_I2C_FF__CLK_DIV1 EQU CYREG_I2C_CLK_DIV1
I2C_DISPLAY_I2C_FF__CLK_DIV2 EQU CYREG_I2C_CLK_DIV2
I2C_DISPLAY_I2C_FF__CSR EQU CYREG_I2C_CSR
I2C_DISPLAY_I2C_FF__D EQU CYREG_I2C_D
I2C_DISPLAY_I2C_FF__MCSR EQU CYREG_I2C_MCSR
I2C_DISPLAY_I2C_FF__PM_ACT_CFG EQU CYREG_PM_ACT_CFG5
I2C_DISPLAY_I2C_FF__PM_ACT_MSK EQU 0x04
I2C_DISPLAY_I2C_FF__PM_STBY_CFG EQU CYREG_PM_STBY_CFG5
I2C_DISPLAY_I2C_FF__PM_STBY_MSK EQU 0x04
I2C_DISPLAY_I2C_FF__TMOUT_CFG0 EQU CYREG_I2C_TMOUT_CFG0
I2C_DISPLAY_I2C_FF__TMOUT_CFG1 EQU CYREG_I2C_TMOUT_CFG1
I2C_DISPLAY_I2C_FF__TMOUT_CSR EQU CYREG_I2C_TMOUT_CSR
I2C_DISPLAY_I2C_FF__TMOUT_SR EQU CYREG_I2C_TMOUT_SR
I2C_DISPLAY_I2C_FF__XCFG EQU CYREG_I2C_XCFG
I2C_DISPLAY_I2C_IRQ__INTC_CLR_EN_REG EQU CYREG_NVIC_CLRENA0
I2C_DISPLAY_I2C_IRQ__INTC_CLR_PD_REG EQU CYREG_NVIC_CLRPEND0
I2C_DISPLAY_I2C_IRQ__INTC_MASK EQU 0x8000
I2C_DISPLAY_I2C_IRQ__INTC_NUMBER EQU 15
I2C_DISPLAY_I2C_IRQ__INTC_PRIOR_NUM EQU 7
I2C_DISPLAY_I2C_IRQ__INTC_PRIOR_REG EQU CYREG_NVIC_PRI_15
I2C_DISPLAY_I2C_IRQ__INTC_SET_EN_REG EQU CYREG_NVIC_SETENA0
I2C_DISPLAY_I2C_IRQ__INTC_SET_PD_REG EQU CYREG_NVIC_SETPEND0

/* SCL_DISPLAY */
SCL_DISPLAY__0__INTTYPE EQU CYREG_PICU12_INTTYPE4
SCL_DISPLAY__0__MASK EQU 0x10
SCL_DISPLAY__0__PC EQU CYREG_PRT12_PC4
SCL_DISPLAY__0__PORT EQU 12
SCL_DISPLAY__0__SHIFT EQU 4
SCL_DISPLAY__AG EQU CYREG_PRT12_AG
SCL_DISPLAY__BIE EQU CYREG_PRT12_BIE
SCL_DISPLAY__BIT_MASK EQU CYREG_PRT12_BIT_MASK
SCL_DISPLAY__BYP EQU CYREG_PRT12_BYP
SCL_DISPLAY__DM0 EQU CYREG_PRT12_DM0
SCL_DISPLAY__DM1 EQU CYREG_PRT12_DM1
SCL_DISPLAY__DM2 EQU CYREG_PRT12_DM2
SCL_DISPLAY__DR EQU CYREG_PRT12_DR
SCL_DISPLAY__INP_DIS EQU CYREG_PRT12_INP_DIS
SCL_DISPLAY__INTTYPE_BASE EQU CYDEV_PICU_INTTYPE_PICU12_BASE
SCL_DISPLAY__MASK EQU 0x10
SCL_DISPLAY__PORT EQU 12
SCL_DISPLAY__PRT EQU CYREG_PRT12_PRT
SCL_DISPLAY__PRTDSI__DBL_SYNC_IN EQU CYREG_PRT12_DBL_SYNC_IN
SCL_DISPLAY__PRTDSI__OE_SEL0 EQU CYREG_PRT12_OE_SEL0
SCL_DISPLAY__PRTDSI__OE_SEL1 EQU CYREG_PRT12_OE_SEL1
SCL_DISPLAY__PRTDSI__OUT_SEL0 EQU CYREG_PRT12_OUT_SEL0
SCL_DISPLAY__PRTDSI__OUT_SEL1 EQU CYREG_PRT12_OUT_SEL1
SCL_DISPLAY__PRTDSI__SYNC_OUT EQU CYREG_PRT12_SYNC_OUT
SCL_DISPLAY__PS EQU CYREG_PRT12_PS
SCL_DISPLAY__SHIFT EQU 4
SCL_DISPLAY__SIO_CFG EQU CYREG_PRT12_SIO_CFG
SCL_DISPLAY__SIO_DIFF EQU CYREG_PRT12_SIO_DIFF
SCL_DISPLAY__SIO_HYST_EN EQU CYREG_PRT12_SIO_HYST_EN
SCL_DISPLAY__SIO_REG_HIFREQ EQU CYREG_PRT12_SIO_REG_HIFREQ
SCL_DISPLAY__SLW EQU CYREG_PRT12_SLW

/* SDA_DISPLAY */
SDA_DISPLAY__0__INTTYPE EQU CYREG_PICU12_INTTYPE5
SDA_DISPLAY__0__MASK EQU 0x20
SDA_DISPLAY__0__PC EQU CYREG_PRT12_PC5
SDA_DISPLAY__0__PORT EQU 12
SDA_DISPLAY__0__SHIFT EQU 5
SDA_DISPLAY__AG EQU CYREG_PRT12_AG
SDA_DISPLAY__BIE EQU CYREG_PRT12_BIE
SDA_DISPLAY__BIT_MASK EQU CYREG_PRT12_BIT_MASK
SDA_DISPLAY__BYP EQU CYREG_PRT12_BYP
SDA_DISPLAY__DM0 EQU CYREG_PRT12_DM0
SDA_DISPLAY__DM1 EQU CYREG_PRT12_DM1
SDA_DISPLAY__DM2 EQU CYREG_PRT12_DM2
SDA_DISPLAY__DR EQU CYREG_PRT12_DR
SDA_DISPLAY__INP_DIS EQU CYREG_PRT12_INP_DIS
SDA_DISPLAY__INTTYPE_BASE EQU CYDEV_PICU_INTTYPE_PICU12_BASE
SDA_DISPLAY__MASK EQU 0x20
SDA_DISPLAY__PORT EQU 12
SDA_DISPLAY__PRT EQU CYREG_PRT12_PRT
SDA_DISPLAY__PRTDSI__DBL_SYNC_IN EQU CYREG_PRT12_DBL_SYNC_IN
SDA_DISPLAY__PRTDSI__OE_SEL0 EQU CYREG_PRT12_OE_SEL0
SDA_DISPLAY__PRTDSI__OE_SEL1 EQU CYREG_PRT12_OE_SEL1
SDA_DISPLAY__PRTDSI__OUT_SEL0 EQU CYREG_PRT12_OUT_SEL0
SDA_DISPLAY__PRTDSI__OUT_SEL1 EQU CYREG_PRT12_OUT_SEL1
SDA_DISPLAY__PRTDSI__SYNC_OUT EQU CYREG_PRT12_SYNC_OUT
SDA_DISPLAY__PS EQU CYREG_PRT12_PS
SDA_DISPLAY__SHIFT EQU 5
SDA_DISPLAY__SIO_CFG EQU CYREG_PRT12_SIO_CFG
SDA_DISPLAY__SIO_DIFF EQU CYREG_PRT12_SIO_DIFF
SDA_DISPLAY__SIO_HYST_EN EQU CYREG_PRT12_SIO_HYST_EN
SDA_DISPLAY__SIO_REG_HIFREQ EQU CYREG_PRT12_SIO_REG_HIFREQ
SDA_DISPLAY__SLW EQU CYREG_PRT12_SLW

/* Miscellaneous */
BCLK__BUS_CLK__HZ EQU 24000000
BCLK__BUS_CLK__KHZ EQU 24000
BCLK__BUS_CLK__MHZ EQU 24
CYDEV_CHIP_DIE_LEOPARD EQU 1
CYDEV_CHIP_DIE_PSOC4A EQU 26
CYDEV_CHIP_DIE_PSOC5LP EQU 2
CYDEV_CHIP_DIE_PSOC5TM EQU 3
CYDEV_CHIP_DIE_TMA4 EQU 4
CYDEV_CHIP_DIE_UNKNOWN EQU 0
CYDEV_CHIP_FAMILY_FM0P EQU 5
CYDEV_CHIP_FAMILY_FM3 EQU 6
CYDEV_CHIP_FAMILY_FM4 EQU 7
CYDEV_CHIP_FAMILY_PSOC3 EQU 1
CYDEV_CHIP_FAMILY_PSOC4 EQU 2
CYDEV_CHIP_FAMILY_PSOC5 EQU 3
CYDEV_CHIP_FAMILY_PSOC6 EQU 4
CYDEV_CHIP_FAMILY_UNKNOWN EQU 0
CYDEV_CHIP_FAMILY_USED EQU CYDEV_CHIP_FAMILY_PSOC5
CYDEV_CHIP_JTAG_ID EQU 0x2E161069
CYDEV_CHIP_MEMBER_3A EQU 1
CYDEV_CHIP_MEMBER_4A EQU 26
CYDEV_CHIP_MEMBER_4AA EQU 25
CYDEV_CHIP_MEMBER_4AB EQU 30
CYDEV_CHIP_MEMBER_4AC EQU 14
CYDEV_CHIP_MEMBER_4AD EQU 15
CYDEV_CHIP_MEMBER_4AE EQU 16
CYDEV_CHIP_MEMBER_4D EQU 20
CYDEV_CHIP_MEMBER_4E EQU 6
CYDEV_CHIP_MEMBER_4F EQU 27
CYDEV_CHIP_MEMBER_4G EQU 4
CYDEV_CHIP_MEMBER_4H EQU 24
CYDEV_CHIP_MEMBER_4I EQU 32
CYDEV_CHIP_MEMBER_4J EQU 21
CYDEV_CHIP_MEMBER_4K EQU 22
CYDEV_CHIP_MEMBER_4L EQU 31
CYDEV_CHIP_MEMBER_4M EQU 29
CYDEV_CHIP_MEMBER_4N EQU 11
CYDEV_CHIP_MEMBER_4O EQU 8
CYDEV_CHIP_MEMBER_4P EQU 28
CYDEV_CHIP_MEMBER_4Q EQU 17
CYDEV_CHIP_MEMBER_4R EQU 9
CYDEV_CHIP_MEMBER_4S EQU 12
CYDEV_CHIP_MEMBER_4T EQU 10
CYDEV_CHIP_MEMBER_4U EQU 5
CYDEV_CHIP_MEMBER_4V EQU 23
CYDEV_CHIP_MEMBER_4W EQU 13
CYDEV_CHIP_MEMBER_4X EQU 7
CYDEV_CHIP_MEMBER_4Y EQU 18
CYDEV_CHIP_MEMBER_4Z EQU 19
CYDEV_CHIP_MEMBER_5A EQU 3
CYDEV_CHIP_MEMBER_5B EQU 2
CYDEV_CHIP_MEMBER_6A EQU 33
CYDEV_CHIP_MEMBER_FM3 EQU 37
CYDEV_CHIP_MEMBER_FM4 EQU 38
CYDEV_CHIP_MEMBER_PDL_FM0P_TYPE1 EQU 34
CYDEV_CHIP_MEMBER_PDL_FM0P_TYPE2 EQU 35
CYDEV_CHIP_MEMBER_PDL_FM0P_TYPE3 EQU 36
CYDEV_CHIP_MEMBER_UNKNOWN EQU 0
CYDEV_CHIP_MEMBER_USED EQU CYDEV_CHIP_MEMBER_5B
CYDEV_CHIP_DIE_EXPECT EQU CYDEV_CHIP_MEMBER_USED
CYDEV_CHIP_DIE_ACTUAL EQU CYDEV_CHIP_DIE_EXPECT
CYDEV_CHIP_REV_LEOPARD_ES1 EQU 0
CYDEV_CHIP_REV_LEOPARD_ES2 EQU 1
CYDEV_CHIP_REV_LEOPARD_ES3 EQU 3
CYDEV_CHIP_REV_LEOPARD_PRODUCTION EQU 3
CYDEV_CHIP_REV_PSOC4A_ES0 EQU 17
CYDEV_CHIP_REV_PSOC4A_PRODUCTION EQU 17
CYDEV_CHIP_REV_PSOC5LP_ES0 EQU 0
CYDEV_CHIP_REV_PSOC5LP_PRODUCTION EQU 0
CYDEV_CHIP_REV_PSOC5TM_ES0 EQU 0
CYDEV_CHIP_REV_PSOC5TM_ES1 EQU 1
CYDEV_CHIP_REV_PSOC5TM_PRODUCTION EQU 1
CYDEV_CHIP_REV_TMA4_ES EQU 17
CYDEV_CHIP_REV_TMA4_ES2 EQU 33
CYDEV_CHIP_REV_TMA4_PRODUCTION EQU 17
CYDEV_CHIP_REVISION_3A_ES1 EQU 0
CYDEV_CHIP_REVISION_3A_ES2 EQU 1
CYDEV_CHIP_REVISION_3A_ES3 EQU 3
CYDEV_CHIP_REVISION_3A_PRODUCTION EQU 3
CYDEV_CHIP_REVISION_4A_ES0 EQU 17
CYDEV_CHIP_REVISION_4A_PRODUCTION EQU 17
CYDEV_CHIP_REVISION_4AA_PRODUCTION EQU 0
CYDEV_CHIP_REVISION_4AB_PRODUCTION EQU 0
CYDEV_CHIP_REVISION_4AC_PRODUCTION EQU 0
CYDEV_CHIP_REVISION_4AD_PRODUCTION EQU 0
CYDEV_CHIP_REVISION_4AE_PRODUCTION EQU 0
CYDEV_CHIP_REVISION_4D_PRODUCTION EQU 0
CYDEV_CHIP_REVISION_4E_CCG2_NO_USBPD EQU 0
CYDEV_CHIP_REVISION_4E_PRODUCTION EQU 0
CYDEV_CHIP_REVISION_4F_PRODUCTION EQU 0
CYDEV_CHIP_REVISION_4F_PRODUCTION_256DMA EQU 0
CYDEV_CHIP_REVISION_4F_PRODUCTION_256K EQU 0
CYDEV_CHIP_REVISION_4G_ES EQU 17
CYDEV_CHIP_REVISION_4G_ES2 EQU 33
CYDEV_CHIP_REVISION_4G_PRODUCTION EQU 17
CYDEV_CHIP_REVISION_4H_PRODUCTION EQU 0
CYDEV_CHIP_REVISION_4I_PRODUCTION EQU 0
CYDEV_CHIP_REVISION_4J_PRODUCTION EQU 0
CYDEV_CHIP_REVISION_4K_PRODUCTION EQU 0
CYDEV_CHIP_REVISION_4L_PRODUCTION EQU 0
CYDEV_CHIP_REVISION_4M_PRODUCTION EQU 0
CYDEV_CHIP_REVISION_4N_PRODUCTION EQU 0
CYDEV_CHIP_REVISION_4O_PRODUCTION EQU 0
CYDEV_CHIP_REVISION_4P_PRODUCTION EQU 0
CYDEV_CHIP_REVISION_4Q_PRODUCTION EQU 0
CYDEV_CHIP_REVISION_4R_PRODUCTION EQU 0
CYDEV_CHIP_REVISION_4S_PRODUCTION EQU 0
CYDEV_CHIP_REVISION_4T_PRODUCTION EQU 0
CYDEV_CHIP_REVISION_4U_PRODUCTION EQU 0
CYDEV_CHIP_REVISION_4V_PRODUCTION EQU 0
CYDEV_CHIP_REVISION_4W_PRODUCTION EQU 0
CYDEV_CHIP_REVISION_4X_PRODUCTION EQU 0
CYDEV_CHIP_REVISION_4Y_PRODUCTION EQU 0
CYDEV_CHIP_REVISION_4Z_PRODUCTION EQU 0
CYDEV_CHIP_REVISION_5A_ES0 EQU 0
CYDEV_CHIP_REVISION_5A_ES1 EQU 1
CYDEV_CHIP_REVISION_5A_PRODUCTION EQU 1
CYDEV_CHIP_REVISION_5B_ES0 EQU 0
CYDEV_CHIP_REVISION_5B_PRODUCTION EQU 0
CYDEV_CHIP_REVISION_6A_ES EQU 17
CYDEV_CHIP_REVISION_6A_NO_UDB EQU 33
CYDEV_CHIP_REVISION_6A_PRODUCTION EQU 33
CYDEV_CHIP_REVISION_FM3_PRODUCTION EQU 0
CYDEV_CHIP_REVISION_FM4_PRODUCTION EQU 0
CYDEV_CHIP_REVISION_PDL_FM0P_TYPE1_PRODUCTION EQU 0
CYDEV_CHIP_REVISION_PDL_FM0P_TYPE2_PRODUCTION EQU 0
CYDEV_CHIP_REVISION_PDL_FM0P_TYPE3_PRODUCTION EQU 0
CYDEV_CHIP_REVISION_USED EQU CYDEV_CHIP_REVISION_5B_PRODUCTION
CYDEV_CHIP_REV_EXPECT EQU CYDEV_CHIP_REVISION_USED
CYDEV_CONFIG_FASTBOOT_ENABLED EQU 1
CYDEV_CONFIG_UNUSED_IO_AllowButWarn EQU 0
CYDEV_CONFIG_UNUSED_IO EQU CYDEV_CONFIG_UNUSED_IO_AllowButWarn
CYDEV_CONFIG_UNUSED_IO_AllowWithInfo EQU 1
CYDEV_CONFIG_UNUSED_IO_Disallowed EQU 2
CYDEV_CONFIGURATION_COMPRESSED EQU 1
CYDEV_CONFIGURATION_DMA EQU 0
CYDEV_CONFIGURATION_ECC EQU 1
CYDEV_CONFIGURATION_IMOENABLED EQU CYDEV_CONFIG_FASTBOOT_ENABLED
CYDEV_CONFIGURATION_MODE_COMPRESSED EQU 0
CYDEV_CONFIGURATION_MODE EQU CYDEV_CONFIGURATION_MODE_COMPRESSED
CYDEV_CONFIGURATION_MODE_DMA EQU 2
CYDEV_CONFIGURATION_MODE_UNCOMPRESSED EQU 1
CYDEV_DEBUG_ENABLE_MASK EQU 0x20
CYDEV_DEBUG_ENABLE_REGISTER EQU CYREG_MLOGIC_DEBUG
CYDEV_DEBUGGING_DPS_Disable EQU 3
CYDEV_DEBUGGING_DPS_JTAG_4 EQU 1
CYDEV_DEBUGGING_DPS_JTAG_5 EQU 0
CYDEV_DEBUGGING_DPS_SWD EQU 2
CYDEV_DEBUGGING_DPS_SWD_SWV EQU 6
CYDEV_DEBUGGING_DPS EQU CYDEV_DEBUGGING_DPS_SWD_SWV
CYDEV_DEBUGGING_ENABLE EQU 1
CYDEV_DEBUGGING_XRES EQU 0
CYDEV_DMA_CHANNELS_AVAILABLE EQU 24
CYDEV_ECC_ENABLE EQU 0
CYDEV_HEAP_SIZE EQU 0x80
CYDEV_INSTRUCT_CACHE_ENABLED EQU 1
CYDEV_INTR_RISING EQU 0x00008001
CYDEV_IS_EXPORTING_CODE EQU 0
CYDEV_IS_IMPORTING_CODE EQU 0
CYDEV_PROJ_TYPE EQU 0
CYDEV_PROJ_TYPE_BOOTLOADER EQU 1
CYDEV_PROJ_TYPE_LAUNCHER EQU 5
CYDEV_PROJ_TYPE_LOADABLE EQU 2
CYDEV_PROJ_TYPE_LOADABLEANDBOOTLOADER EQU 4
CYDEV_PROJ_TYPE_MULTIAPPBOOTLOADER EQU 3
CYDEV_PROJ_TYPE_STANDARD EQU 0
CYDEV_PROTECTION_ENABLE EQU 0
CYDEV_STACK_SIZE EQU 0x0800
CYDEV_USE_BUNDLED_CMSIS EQU 1
CYDEV_VARIABLE_VDDA EQU 0
CYDEV_VDDA_MV EQU 5000
CYDEV_VDDD_MV EQU 5000
CYDEV_VDDIO0_MV EQU 5000
CYDEV_VDDIO1_MV EQU 5000
CYDEV_VDDIO2_MV EQU 5000
CYDEV_VDDIO3_MV EQU 5000
CYDEV_VIO0_MV EQU 5000
CYDEV_VIO1_MV EQU 5000
CYDEV_VIO2_MV EQU 5000
CYDEV_VIO3_MV EQU 5000
CYIPBLOCK_ARM_CM3_VERSION EQU 0
CYIPBLOCK_P3_ANAIF_VERSION EQU 0
CYIPBLOCK_P3_CAN_VERSION EQU 0
CYIPBLOCK_P3_CAPSENSE_VERSION EQU 0
CYIPBLOCK_P3_COMP_VERSION EQU 0
CYIPBLOCK_P3_DECIMATOR_VERSION EQU 0
CYIPBLOCK_P3_DFB_VERSION EQU 0
CYIPBLOCK_P3_DMA_VERSION EQU 0
CYIPBLOCK_P3_DRQ_VERSION EQU 0
CYIPBLOCK_P3_DSM_VERSION EQU 0
CYIPBLOCK_P3_EMIF_VERSION EQU 0
CYIPBLOCK_P3_I2C_VERSION EQU 0
CYIPBLOCK_P3_LCD_VERSION EQU 0
CYIPBLOCK_P3_LPF_VERSION EQU 0
CYIPBLOCK_P3_OPAMP_VERSION EQU 0
CYIPBLOCK_P3_PM_VERSION EQU 0
CYIPBLOCK_P3_SCCT_VERSION EQU 0
CYIPBLOCK_P3_TIMER_VERSION EQU 0
CYIPBLOCK_P3_USB_VERSION EQU 0
CYIPBLOCK_P3_VIDAC_VERSION EQU 0
CYIPBLOCK_P3_VREF_VERSION EQU 0
CYIPBLOCK_S8_GPIO_VERSION EQU 0
CYIPBLOCK_S8_IRQ_VERSION EQU 0
CYIPBLOCK_S8_SAR_VERSION EQU 0
CYIPBLOCK_S8_SIO_VERSION EQU 0
CYIPBLOCK_S8_UDB_VERSION EQU 0
DMA_CHANNELS_USED__MASK0 EQU 0x00000000
CYDEV_BOOTLOADER_ENABLE EQU 0

#endif /* INCLUDED_CYFITTERIAR_INC */