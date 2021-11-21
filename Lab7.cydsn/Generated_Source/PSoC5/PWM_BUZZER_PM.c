/*******************************************************************************
* File Name: PWM_BUZZER_PM.c
* Version 3.30
*
* Description:
*  This file provides the power management source code to API for the
*  PWM.
*
* Note:
*
********************************************************************************
* Copyright 2008-2014, Cypress Semiconductor Corporation.  All rights reserved.
* You may use this file only in accordance with the license, terms, conditions,
* disclaimers, and limitations in the end user license agreement accompanying
* the software package with which this file was provided.
*******************************************************************************/

#include "PWM_BUZZER.h"

static PWM_BUZZER_backupStruct PWM_BUZZER_backup;


/*******************************************************************************
* Function Name: PWM_BUZZER_SaveConfig
********************************************************************************
*
* Summary:
*  Saves the current user configuration of the component.
*
* Parameters:
*  None
*
* Return:
*  None
*
* Global variables:
*  PWM_BUZZER_backup:  Variables of this global structure are modified to
*  store the values of non retention configuration registers when Sleep() API is
*  called.
*
*******************************************************************************/
void PWM_BUZZER_SaveConfig(void) 
{

    #if(!PWM_BUZZER_UsingFixedFunction)
        #if(!PWM_BUZZER_PWMModeIsCenterAligned)
            PWM_BUZZER_backup.PWMPeriod = PWM_BUZZER_ReadPeriod();
        #endif /* (!PWM_BUZZER_PWMModeIsCenterAligned) */
        PWM_BUZZER_backup.PWMUdb = PWM_BUZZER_ReadCounter();
        #if (PWM_BUZZER_UseStatus)
            PWM_BUZZER_backup.InterruptMaskValue = PWM_BUZZER_STATUS_MASK;
        #endif /* (PWM_BUZZER_UseStatus) */

        #if(PWM_BUZZER_DeadBandMode == PWM_BUZZER__B_PWM__DBM_256_CLOCKS || \
            PWM_BUZZER_DeadBandMode == PWM_BUZZER__B_PWM__DBM_2_4_CLOCKS)
            PWM_BUZZER_backup.PWMdeadBandValue = PWM_BUZZER_ReadDeadTime();
        #endif /*  deadband count is either 2-4 clocks or 256 clocks */

        #if(PWM_BUZZER_KillModeMinTime)
             PWM_BUZZER_backup.PWMKillCounterPeriod = PWM_BUZZER_ReadKillTime();
        #endif /* (PWM_BUZZER_KillModeMinTime) */

        #if(PWM_BUZZER_UseControl)
            PWM_BUZZER_backup.PWMControlRegister = PWM_BUZZER_ReadControlRegister();
        #endif /* (PWM_BUZZER_UseControl) */
    #endif  /* (!PWM_BUZZER_UsingFixedFunction) */
}


/*******************************************************************************
* Function Name: PWM_BUZZER_RestoreConfig
********************************************************************************
*
* Summary:
*  Restores the current user configuration of the component.
*
* Parameters:
*  None
*
* Return:
*  None
*
* Global variables:
*  PWM_BUZZER_backup:  Variables of this global structure are used to
*  restore the values of non retention registers on wakeup from sleep mode.
*
*******************************************************************************/
void PWM_BUZZER_RestoreConfig(void) 
{
        #if(!PWM_BUZZER_UsingFixedFunction)
            #if(!PWM_BUZZER_PWMModeIsCenterAligned)
                PWM_BUZZER_WritePeriod(PWM_BUZZER_backup.PWMPeriod);
            #endif /* (!PWM_BUZZER_PWMModeIsCenterAligned) */

            PWM_BUZZER_WriteCounter(PWM_BUZZER_backup.PWMUdb);

            #if (PWM_BUZZER_UseStatus)
                PWM_BUZZER_STATUS_MASK = PWM_BUZZER_backup.InterruptMaskValue;
            #endif /* (PWM_BUZZER_UseStatus) */

            #if(PWM_BUZZER_DeadBandMode == PWM_BUZZER__B_PWM__DBM_256_CLOCKS || \
                PWM_BUZZER_DeadBandMode == PWM_BUZZER__B_PWM__DBM_2_4_CLOCKS)
                PWM_BUZZER_WriteDeadTime(PWM_BUZZER_backup.PWMdeadBandValue);
            #endif /* deadband count is either 2-4 clocks or 256 clocks */

            #if(PWM_BUZZER_KillModeMinTime)
                PWM_BUZZER_WriteKillTime(PWM_BUZZER_backup.PWMKillCounterPeriod);
            #endif /* (PWM_BUZZER_KillModeMinTime) */

            #if(PWM_BUZZER_UseControl)
                PWM_BUZZER_WriteControlRegister(PWM_BUZZER_backup.PWMControlRegister);
            #endif /* (PWM_BUZZER_UseControl) */
        #endif  /* (!PWM_BUZZER_UsingFixedFunction) */
    }


/*******************************************************************************
* Function Name: PWM_BUZZER_Sleep
********************************************************************************
*
* Summary:
*  Disables block's operation and saves the user configuration. Should be called
*  just prior to entering sleep.
*
* Parameters:
*  None
*
* Return:
*  None
*
* Global variables:
*  PWM_BUZZER_backup.PWMEnableState:  Is modified depending on the enable
*  state of the block before entering sleep mode.
*
*******************************************************************************/
void PWM_BUZZER_Sleep(void) 
{
    #if(PWM_BUZZER_UseControl)
        if(PWM_BUZZER_CTRL_ENABLE == (PWM_BUZZER_CONTROL & PWM_BUZZER_CTRL_ENABLE))
        {
            /*Component is enabled */
            PWM_BUZZER_backup.PWMEnableState = 1u;
        }
        else
        {
            /* Component is disabled */
            PWM_BUZZER_backup.PWMEnableState = 0u;
        }
    #endif /* (PWM_BUZZER_UseControl) */

    /* Stop component */
    PWM_BUZZER_Stop();

    /* Save registers configuration */
    PWM_BUZZER_SaveConfig();
}


/*******************************************************************************
* Function Name: PWM_BUZZER_Wakeup
********************************************************************************
*
* Summary:
*  Restores and enables the user configuration. Should be called just after
*  awaking from sleep.
*
* Parameters:
*  None
*
* Return:
*  None
*
* Global variables:
*  PWM_BUZZER_backup.pwmEnable:  Is used to restore the enable state of
*  block on wakeup from sleep mode.
*
*******************************************************************************/
void PWM_BUZZER_Wakeup(void) 
{
     /* Restore registers values */
    PWM_BUZZER_RestoreConfig();

    if(PWM_BUZZER_backup.PWMEnableState != 0u)
    {
        /* Enable component's operation */
        PWM_BUZZER_Enable();
    } /* Do nothing if component's block was disabled before */

}


/* [] END OF FILE */
