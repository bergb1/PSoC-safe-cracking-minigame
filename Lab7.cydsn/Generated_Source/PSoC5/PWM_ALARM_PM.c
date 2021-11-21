/*******************************************************************************
* File Name: PWM_ALARM_PM.c
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

#include "PWM_ALARM.h"

static PWM_ALARM_backupStruct PWM_ALARM_backup;


/*******************************************************************************
* Function Name: PWM_ALARM_SaveConfig
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
*  PWM_ALARM_backup:  Variables of this global structure are modified to
*  store the values of non retention configuration registers when Sleep() API is
*  called.
*
*******************************************************************************/
void PWM_ALARM_SaveConfig(void) 
{

    #if(!PWM_ALARM_UsingFixedFunction)
        #if(!PWM_ALARM_PWMModeIsCenterAligned)
            PWM_ALARM_backup.PWMPeriod = PWM_ALARM_ReadPeriod();
        #endif /* (!PWM_ALARM_PWMModeIsCenterAligned) */
        PWM_ALARM_backup.PWMUdb = PWM_ALARM_ReadCounter();
        #if (PWM_ALARM_UseStatus)
            PWM_ALARM_backup.InterruptMaskValue = PWM_ALARM_STATUS_MASK;
        #endif /* (PWM_ALARM_UseStatus) */

        #if(PWM_ALARM_DeadBandMode == PWM_ALARM__B_PWM__DBM_256_CLOCKS || \
            PWM_ALARM_DeadBandMode == PWM_ALARM__B_PWM__DBM_2_4_CLOCKS)
            PWM_ALARM_backup.PWMdeadBandValue = PWM_ALARM_ReadDeadTime();
        #endif /*  deadband count is either 2-4 clocks or 256 clocks */

        #if(PWM_ALARM_KillModeMinTime)
             PWM_ALARM_backup.PWMKillCounterPeriod = PWM_ALARM_ReadKillTime();
        #endif /* (PWM_ALARM_KillModeMinTime) */

        #if(PWM_ALARM_UseControl)
            PWM_ALARM_backup.PWMControlRegister = PWM_ALARM_ReadControlRegister();
        #endif /* (PWM_ALARM_UseControl) */
    #endif  /* (!PWM_ALARM_UsingFixedFunction) */
}


/*******************************************************************************
* Function Name: PWM_ALARM_RestoreConfig
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
*  PWM_ALARM_backup:  Variables of this global structure are used to
*  restore the values of non retention registers on wakeup from sleep mode.
*
*******************************************************************************/
void PWM_ALARM_RestoreConfig(void) 
{
        #if(!PWM_ALARM_UsingFixedFunction)
            #if(!PWM_ALARM_PWMModeIsCenterAligned)
                PWM_ALARM_WritePeriod(PWM_ALARM_backup.PWMPeriod);
            #endif /* (!PWM_ALARM_PWMModeIsCenterAligned) */

            PWM_ALARM_WriteCounter(PWM_ALARM_backup.PWMUdb);

            #if (PWM_ALARM_UseStatus)
                PWM_ALARM_STATUS_MASK = PWM_ALARM_backup.InterruptMaskValue;
            #endif /* (PWM_ALARM_UseStatus) */

            #if(PWM_ALARM_DeadBandMode == PWM_ALARM__B_PWM__DBM_256_CLOCKS || \
                PWM_ALARM_DeadBandMode == PWM_ALARM__B_PWM__DBM_2_4_CLOCKS)
                PWM_ALARM_WriteDeadTime(PWM_ALARM_backup.PWMdeadBandValue);
            #endif /* deadband count is either 2-4 clocks or 256 clocks */

            #if(PWM_ALARM_KillModeMinTime)
                PWM_ALARM_WriteKillTime(PWM_ALARM_backup.PWMKillCounterPeriod);
            #endif /* (PWM_ALARM_KillModeMinTime) */

            #if(PWM_ALARM_UseControl)
                PWM_ALARM_WriteControlRegister(PWM_ALARM_backup.PWMControlRegister);
            #endif /* (PWM_ALARM_UseControl) */
        #endif  /* (!PWM_ALARM_UsingFixedFunction) */
    }


/*******************************************************************************
* Function Name: PWM_ALARM_Sleep
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
*  PWM_ALARM_backup.PWMEnableState:  Is modified depending on the enable
*  state of the block before entering sleep mode.
*
*******************************************************************************/
void PWM_ALARM_Sleep(void) 
{
    #if(PWM_ALARM_UseControl)
        if(PWM_ALARM_CTRL_ENABLE == (PWM_ALARM_CONTROL & PWM_ALARM_CTRL_ENABLE))
        {
            /*Component is enabled */
            PWM_ALARM_backup.PWMEnableState = 1u;
        }
        else
        {
            /* Component is disabled */
            PWM_ALARM_backup.PWMEnableState = 0u;
        }
    #endif /* (PWM_ALARM_UseControl) */

    /* Stop component */
    PWM_ALARM_Stop();

    /* Save registers configuration */
    PWM_ALARM_SaveConfig();
}


/*******************************************************************************
* Function Name: PWM_ALARM_Wakeup
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
*  PWM_ALARM_backup.pwmEnable:  Is used to restore the enable state of
*  block on wakeup from sleep mode.
*
*******************************************************************************/
void PWM_ALARM_Wakeup(void) 
{
     /* Restore registers values */
    PWM_ALARM_RestoreConfig();

    if(PWM_ALARM_backup.PWMEnableState != 0u)
    {
        /* Enable component's operation */
        PWM_ALARM_Enable();
    } /* Do nothing if component's block was disabled before */

}


/* [] END OF FILE */
