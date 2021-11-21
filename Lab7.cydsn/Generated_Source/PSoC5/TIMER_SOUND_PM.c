/*******************************************************************************
* File Name: TIMER_SOUND_PM.c
* Version 2.80
*
*  Description:
*     This file provides the power management source code to API for the
*     Timer.
*
*   Note:
*     None
*
*******************************************************************************
* Copyright 2008-2017, Cypress Semiconductor Corporation.  All rights reserved.
* You may use this file only in accordance with the license, terms, conditions,
* disclaimers, and limitations in the end user license agreement accompanying
* the software package with which this file was provided.
********************************************************************************/

#include "TIMER_SOUND.h"

static TIMER_SOUND_backupStruct TIMER_SOUND_backup;


/*******************************************************************************
* Function Name: TIMER_SOUND_SaveConfig
********************************************************************************
*
* Summary:
*     Save the current user configuration
*
* Parameters:
*  void
*
* Return:
*  void
*
* Global variables:
*  TIMER_SOUND_backup:  Variables of this global structure are modified to
*  store the values of non retention configuration registers when Sleep() API is
*  called.
*
*******************************************************************************/
void TIMER_SOUND_SaveConfig(void) 
{
    #if (!TIMER_SOUND_UsingFixedFunction)
        TIMER_SOUND_backup.TimerUdb = TIMER_SOUND_ReadCounter();
        TIMER_SOUND_backup.InterruptMaskValue = TIMER_SOUND_STATUS_MASK;
        #if (TIMER_SOUND_UsingHWCaptureCounter)
            TIMER_SOUND_backup.TimerCaptureCounter = TIMER_SOUND_ReadCaptureCount();
        #endif /* Back Up capture counter register  */

        #if(!TIMER_SOUND_UDB_CONTROL_REG_REMOVED)
            TIMER_SOUND_backup.TimerControlRegister = TIMER_SOUND_ReadControlRegister();
        #endif /* Backup the enable state of the Timer component */
    #endif /* Backup non retention registers in UDB implementation. All fixed function registers are retention */
}


/*******************************************************************************
* Function Name: TIMER_SOUND_RestoreConfig
********************************************************************************
*
* Summary:
*  Restores the current user configuration.
*
* Parameters:
*  void
*
* Return:
*  void
*
* Global variables:
*  TIMER_SOUND_backup:  Variables of this global structure are used to
*  restore the values of non retention registers on wakeup from sleep mode.
*
*******************************************************************************/
void TIMER_SOUND_RestoreConfig(void) 
{   
    #if (!TIMER_SOUND_UsingFixedFunction)

        TIMER_SOUND_WriteCounter(TIMER_SOUND_backup.TimerUdb);
        TIMER_SOUND_STATUS_MASK =TIMER_SOUND_backup.InterruptMaskValue;
        #if (TIMER_SOUND_UsingHWCaptureCounter)
            TIMER_SOUND_SetCaptureCount(TIMER_SOUND_backup.TimerCaptureCounter);
        #endif /* Restore Capture counter register*/

        #if(!TIMER_SOUND_UDB_CONTROL_REG_REMOVED)
            TIMER_SOUND_WriteControlRegister(TIMER_SOUND_backup.TimerControlRegister);
        #endif /* Restore the enable state of the Timer component */
    #endif /* Restore non retention registers in the UDB implementation only */
}


/*******************************************************************************
* Function Name: TIMER_SOUND_Sleep
********************************************************************************
*
* Summary:
*     Stop and Save the user configuration
*
* Parameters:
*  void
*
* Return:
*  void
*
* Global variables:
*  TIMER_SOUND_backup.TimerEnableState:  Is modified depending on the
*  enable state of the block before entering sleep mode.
*
*******************************************************************************/
void TIMER_SOUND_Sleep(void) 
{
    #if(!TIMER_SOUND_UDB_CONTROL_REG_REMOVED)
        /* Save Counter's enable state */
        if(TIMER_SOUND_CTRL_ENABLE == (TIMER_SOUND_CONTROL & TIMER_SOUND_CTRL_ENABLE))
        {
            /* Timer is enabled */
            TIMER_SOUND_backup.TimerEnableState = 1u;
        }
        else
        {
            /* Timer is disabled */
            TIMER_SOUND_backup.TimerEnableState = 0u;
        }
    #endif /* Back up enable state from the Timer control register */
    TIMER_SOUND_Stop();
    TIMER_SOUND_SaveConfig();
}


/*******************************************************************************
* Function Name: TIMER_SOUND_Wakeup
********************************************************************************
*
* Summary:
*  Restores and enables the user configuration
*
* Parameters:
*  void
*
* Return:
*  void
*
* Global variables:
*  TIMER_SOUND_backup.enableState:  Is used to restore the enable state of
*  block on wakeup from sleep mode.
*
*******************************************************************************/
void TIMER_SOUND_Wakeup(void) 
{
    TIMER_SOUND_RestoreConfig();
    #if(!TIMER_SOUND_UDB_CONTROL_REG_REMOVED)
        if(TIMER_SOUND_backup.TimerEnableState == 1u)
        {     /* Enable Timer's operation */
                TIMER_SOUND_Enable();
        } /* Do nothing if Timer was disabled before */
    #endif /* Remove this code section if Control register is removed */
}


/* [] END OF FILE */
