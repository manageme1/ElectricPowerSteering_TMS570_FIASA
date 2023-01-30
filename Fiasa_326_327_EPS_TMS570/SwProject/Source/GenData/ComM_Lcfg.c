/* -----------------------------------------------------------------------------
  Filename:    ComM_Lcfg.c
  Description: Toolversion: 18.00.01.01.30.06.49.00.00.00
               
               Serial Number: CBD1300649
               Customer Info: Nexteer Automotive Corporation
                              Package: MSR Fiat SLP4 - MSR Fiat SLP4
                              Micro: 0812BPGEQQ1
                              Compiler: TexasInstruments 4.9.5
               
               
               Generator Fwk   : GENy 
               Generator Module: ComM
               
               Configuration   : C:\Synergy\EA3\Working\Fiasa_326_327\Fiasa_326_327_02.02.00\Fiasa_326_327_EPS_TMS570\Tools\AsrProject\Config\ECUC\EPS.ecuc.vdsxml
               
               ECU: 
                       TargetSystem: Hw_Tms470/570Cpu (Dcan)
                       Compiler:     TexasInstruments
                       Derivates:    TMS570LS30316U
               
               Channel "CCAN":
                       Databasefile: 
                       Bussystem:    CAN
                       Manufacturer: Vector
                       Node:         CanStateManagerConfiguration

  Generated by , 2015-10-08  13:13:03
 ----------------------------------------------------------------------------- */
/* -----------------------------------------------------------------------------
  C O P Y R I G H T
 -------------------------------------------------------------------------------
  Copyright (c) 2001-2011 by Vector Informatik GmbH. All rights reserved.
 
  This software is copyright protected and proprietary to Vector Informatik 
  GmbH.
  
  Vector Informatik GmbH grants to you only those rights as set out in the 
  license conditions.
  
  All other rights remain with Vector Informatik GmbH.
 -------------------------------------------------------------------------------
 ----------------------------------------------------------------------------- */

#define CCL_ASR_COMM_LCFG_MODULE

/* -----------------------------------------------------------------------------
    &&&~ INCLUDES
 ----------------------------------------------------------------------------- */

#include "ComM.h"
#include "CanSM_ComM.h"
#include "CanSM.h"
#include "Nm.h"
#include "Dem.h"
#include "Dcm_Cbk.h"
#include "BswM_ComM.h"


/* -----------------------------------------------------------------------------
    &&&~ GLOBAL DATA ROM
 ----------------------------------------------------------------------------- */

#define COMM_START_SEC_CONST_8BIT
 /* PRQA S 5087 1 */ /* MD_MSR_19.1 */ 
#include "MemMap.h"
CONST(ComM_UserHandleType, COMM_CONST) ComM_MaxNumberOfUsers = (ComM_UserHandleType) COMM_MAX_NUMBER_OF_USERS;
/* ComM_ChannelStopIndex stores the stop index inside the user bit field per channel */
CONST(NetworkHandleType, COMM_CONST) ComM_ChannelStopIndex[COMM_ACTIVE_CHANNEL] =
{
    0
};

/* the variable stores the ComM channel count */
CONST(NetworkHandleType, COMM_CONST) ComM_Active_Channel = (NetworkHandleType)0x1;

CONST(uint8, COMM_CONST) ComM_User_ByteCount = COMM_USER_BYTE;
CONST(uint8, COMM_CONST) ComM_Nm_Type[1] = 
{
    NM_VARIANT_FULL
};

CONST(uint8, COMM_CONST) ComM_InhibitionStatusInitValue[1] = 
{
    0x0
};

CONST(boolean, COMM_CONST) ComM_SyncWakeUp = FALSE;

/* user user byte mask index */
CONST(uint8, COMM_CONST) ComM_UserByteMaskIndex[COMM_MAX_NUMBER_OF_USERS + 1] =
{
   0
,  1
};


/* PRQA S 3218 1 */ /* MD_ComM_3218 */
STATIC CONST(boolean, COMM_CONST) ComM_ModeNotificationToDcm[COMM_ACTIVE_CHANNEL] =
{
    TRUE
};
#define COMM_STOP_SEC_CONST_8BIT
 /* PRQA S 5087 1 */ /* MD_MSR_19.1 */ 
#include "MemMap.h"

#define COMM_START_SEC_CONST_UNSPECIFIED
 /* PRQA S 5087 1 */ /* MD_MSR_19.1 */ 
#include "MemMap.h"

/* user byte mask for the access to the user communication request fields */
CONST(ComM_UserByteMaskType, COMM_CONST) ComM_UserByteMask[COMM_MAX_BYTE_MASK] =
{
    {0x0, 0x1, 0xfe, 0x0} /*ComMUser_CCAN*/
};



/* the variable stores the bus type per channel */
CONST(ComM_BusType, COMM_CONST) ComM_ChannelBusType[COMM_ACTIVE_CHANNEL] = 
{
    COMM_BUS_TYPE_CAN
};

CONST(ComM_InhibitionStatusType, COMM_CONST) ComM_ECUGroupClassInit = 0x3;
#define COMM_STOP_SEC_CONST_UNSPECIFIED
 /* PRQA S 5087 1 */ /* MD_MSR_19.1 */ 
#include "MemMap.h"


/* -----------------------------------------------------------------------------
    &&&~ INTERNAL DATA RAM
 ----------------------------------------------------------------------------- */




/* -----------------------------------------------------------------------------
    &&&~ GLOBAL DATA RAM
 ----------------------------------------------------------------------------- */

#define COMM_START_SEC_VAR_NOINIT_8BIT
 /* PRQA S 5087 1 */ /* MD_MSR_19.1 */ 
#include "MemMap.h"
VAR(uint8, COMM_VAR_NOINIT_8BIT)                            ComM_UserReqFullComArray[COMM_USER_BYTE];             /* user bit field for full communication requests */
VAR(uint8, COMM_VAR_NOINIT_8BIT)                            ComM_BusSmState[COMM_ACTIVE_CHANNEL];                      
VAR(uint8, COMM_VAR_NOINIT_8BIT)                            ComM_LastBusSmState[COMM_ACTIVE_CHANNEL];                      
VAR(uint8, COMM_VAR_NOINIT_8BIT)                            ComM_FrShutdown[COMM_ACTIVE_CHANNEL];                       
VAR(uint8, COMM_VAR_NOINIT_8BIT)                            ComM_StateChange[COMM_ACTIVE_CHANNEL];
VAR(uint8, COMM_VAR_NOINIT_8BIT)                            ComM_LastStateChange[COMM_MAX_NUMBER_OF_USERS];
VAR(uint8, COMM_VAR_NOINIT_8BIT)                            ComM_LastModeIndicatedToDcm;
#define COMM_STOP_SEC_VAR_NOINIT_8BIT
 /* PRQA S 5087 1 */ /* MD_MSR_19.1 */ 
#include "MemMap.h"

#define COMM_START_SEC_VAR_NOINIT_16BIT
 /* PRQA S 5087 1 */ /* MD_MSR_19.1 */ 
#include "MemMap.h"
VAR(uint16, COMM_VAR_NOINIT_16BIT)                          ComM_MinFullComModeTime[COMM_ACTIVE_CHANNEL];         /* minimum full communiation mode duration time */
VAR(uint16, COMM_VAR_NOINIT_16BIT)                          ComM_NmLightTimeout[COMM_ACTIVE_CHANNEL];             /* timer after ready sleep mode is left */
#define COMM_STOP_SEC_VAR_NOINIT_16BIT
 /* PRQA S 5087 1 */ /* MD_MSR_19.1 */ 
#include "MemMap.h"

#define COMM_START_SEC_VAR_NOINIT_UNSPECIFIED
 /* PRQA S 5087 1 */ /* MD_MSR_19.1 */ 
#include "MemMap.h"
VAR(ComM_SubModeType, COMM_VAR_NOINIT_UNSPECIFIED)          ComM_ActiveComMode[COMM_ACTIVE_CHANNEL];              /* ComM current communication mode */
VAR(ComM_SubModeType, COMM_VAR_NOINIT_UNSPECIFIED)          ComM_BusComModeReq[COMM_ACTIVE_CHANNEL];              /* ComM current communication mode */
VAR(ComM_SubModeType, COMM_VAR_NOINIT_UNSPECIFIED)          ComM_BusComModeReqTmp[COMM_ACTIVE_CHANNEL];           /* ComM current communication mode */
#define COMM_STOP_SEC_VAR_NOINIT_UNSPECIFIED
 /* PRQA S 5087 1 */ /* MD_MSR_19.1 */ 
#include "MemMap.h"

#define COMM_START_SEC_VAR_SAVED_ZONE0_UNSPECIFIED
 /* PRQA S 5087 1 */ /* MD_MSR_19.1 */ 
#include "MemMap.h"
VAR(ComM_InhibitionType, COMM_APPL_VAR_NVRAM)               ComM_Inhibition;
#define COMM_STOP_SEC_VAR_SAVED_ZONE0_UNSPECIFIED
 /* PRQA S 5087 1 */ /* MD_MSR_19.1 */ 
#include "MemMap.h"


#define COMM_START_SEC_CODE
/* PRQA S 5087 1 */ /* MD_MSR_19.1 */
#include "MemMap.h"

/* -----------------------------------------------------------------------------
    &&&~ GLOBAL FUNCTION PROTOTYPES
 ----------------------------------------------------------------------------- */

/*********************************************************************************************************************
FUNCTION: ComM_MainFunction_0
----------------------------------------------------------------------------------------------------------------------
API     Type                     Name                    Description
----------------------------------------------------------------------------------------------------------------------
  Input: -
  Output: -
  Return: -
----------------------------------------------------------------------------------------------------------------------
  FUNCTION DESCRIPTION
----------------------------------------------------------------------------------------------------------------------
     Called by: upper layer
  Precondition: Communication manager has to be initialized.

  Main function of the communication manager.
*********************************************************************************************************************/
FUNC(void, COMM_CODE) ComM_MainFunction_0(void)
{
#if ( COMM_DEV_ERROR_DETECT == STD_ON )
  Std_ReturnType retValue;
  ComM_InitStatusType State;

  retValue = E_OK;

  (void)ComM_GetStatus(&State);
  if(State == COMM_UNINIT)
  {
    Det_ReportError( 12, 0, (uint8)COMM_MAINFUNCTION_ID, (uint8)COMM_E_NOT_INITED);
    retValue = E_NOT_OK;
  }

  if(retValue == E_OK)
#endif
  {
    ComM_MainFunction((NetworkHandleType)0u );
  }
}
/**********************************************************************************************************************
FUNCTION: ComM_DcmIndication
-----------------------------------------------------------------------------------------------------------------------
 API     Type                    Name                    Description
-----------------------------------------------------------------------------------------------------------------------
   Input: -                       -                       -
  Output: -                       -                       -
  Return: -                       -                       -

-----------------------------------------------------------------------------------------------------------------------
  FUNCTION DESCRIPTION
-----------------------------------------------------------------------------------------------------------------------
     Called by: ComM
  Precondition: -

  Container function for the ComM state transition indication to the DCM
**********************************************************************************************************************/
FUNC(void, COMM_CODE) ComM_DcmIndication(void)
{

  uint8 channelIndex;
  boolean indicationIsEnabled = FALSE;
  ComM_ModeType lowestBusSmMode = COMM_FULL_COMMUNICATION;

  for(channelIndex = 0; channelIndex < COMM_ACTIVE_CHANNEL; channelIndex++)
  {
#if (COMM_IDENTITY_MANAGER_CONFIG == STD_ON)
    if((ComM_IdentityMapping[channelIndex] & ComM_ActiveIdentityMask) != 0u)
    {
#endif
      /* Only consider channels which have 'Mode Notification To Dcm' enabled */
      if( ComM_ModeNotificationToDcm[channelIndex] == TRUE )
      {
        indicationIsEnabled = TRUE;
        if( ComM_BusSmState[channelIndex] < lowestBusSmMode )
        {
          lowestBusSmMode = ComM_BusSmState[channelIndex];
        }
      }
#if (COMM_IDENTITY_MANAGER_CONFIG == STD_ON)
    }
#endif
  }

  /* Notify the lowest BusSm mode if it has changed since the last Dcm notification */
  if( (lowestBusSmMode != ComM_LastModeIndicatedToDcm) && (indicationIsEnabled == TRUE) )
  {
    ComM_LastModeIndicatedToDcm  = lowestBusSmMode;

    switch(lowestBusSmMode)
    {
      case COMM_FULL_COMMUNICATION:
        Dcm_ComM_FullComModeEntered();
        break;
      case COMM_SILENT_COMMUNICATION:
        Dcm_ComM_SilentComModeEntered();
        break;
      case COMM_NO_COMMUNICATION:
        Dcm_ComM_NoComModeEntered();
        break;
      /* PRQA S 2018 1 */ /* MD_ComM_2018 */
      default: /* nothing to do */
        break;
    }
  }
}
/**********************************************************************************************************************
FUNCTION: ComM_NOCOM_NETREQ
-----------------------------------------------------------------------------------------------------------------------
 API     Type                    Name                    Description
-----------------------------------------------------------------------------------------------------------------------
   Input: -                       -                       -
  Output: -                       -                       -
  Return: -                       -                       -

-----------------------------------------------------------------------------------------------------------------------
  FUNCTION DESCRIPTION
-----------------------------------------------------------------------------------------------------------------------
     Called by: ComM
  Precondition: -

  Container function for the ComM state transition from No Communication to Network Requested
**********************************************************************************************************************/
FUNC(void, COMM_CODE) ComM_NOCOM_NETREQ(NetworkHandleType Channel)
{

  BswM_ComM_CurrentMode(Channel, COMM_FULL_COMMUNICATION);
  (void)CanSM_RequestComMode(  Channel, COMM_FULL_COMMUNICATION);
  (void)Nm_NetworkRequest(Channel);

}
/**********************************************************************************************************************
FUNCTION: ComM_NOCOM_READYS
-----------------------------------------------------------------------------------------------------------------------
 API     Type                    Name                    Description
-----------------------------------------------------------------------------------------------------------------------
   Input: -                       -                       -
  Output: -                       -                       -
  Return: -                       -                       -

-----------------------------------------------------------------------------------------------------------------------
  FUNCTION DESCRIPTION
-----------------------------------------------------------------------------------------------------------------------
     Called by: ComM
  Precondition: -

  Container function for the ComM state transition from No Communication to Ready Sleep
**********************************************************************************************************************/
FUNC(void, COMM_CODE) ComM_NOCOM_READYS(NetworkHandleType Channel)
{

  BswM_ComM_CurrentMode(Channel, COMM_FULL_COMMUNICATION);
  (void)CanSM_RequestComMode(  Channel, COMM_FULL_COMMUNICATION);

  (void)Nm_PassiveStartUp(Channel);

}
/**********************************************************************************************************************
FUNCTION: ComM_SICOM
-----------------------------------------------------------------------------------------------------------------------
 API     Type                    Name                    Description
-----------------------------------------------------------------------------------------------------------------------
   Input: -                       -                       -
  Output: -                       -                       -
  Return: -                       -                       -

-----------------------------------------------------------------------------------------------------------------------
  FUNCTION DESCRIPTION
-----------------------------------------------------------------------------------------------------------------------
     Called by: ComM
  Precondition: -

  Container function for the ComM state transition from full to silent communication
**********************************************************************************************************************/
FUNC(void, COMM_CODE) ComM_SICOM(NetworkHandleType Channel)
{

  BswM_ComM_CurrentMode(Channel, COMM_SILENT_COMMUNICATION);
  (void)CanSM_RequestComMode(Channel, COMM_SILENT_COMMUNICATION);
}
/**********************************************************************************************************************
FUNCTION: ComM_READYS_NETREQ
-----------------------------------------------------------------------------------------------------------------------
 API     Type                    Name                    Description
-----------------------------------------------------------------------------------------------------------------------
   Input: -                       -                       -
  Output: -                       -                       -
  Return: -                       -                       -

-----------------------------------------------------------------------------------------------------------------------
  FUNCTION DESCRIPTION
-----------------------------------------------------------------------------------------------------------------------
     Called by: ComM
  Precondition: -

  Container function for the ComM state transition from Ready Sleep to Network Requested
**********************************************************************************************************************/
FUNC(void, COMM_CODE) ComM_READYS_NETREQ(NetworkHandleType Channel)
{

  (void)Nm_NetworkRequest(Channel);

}
/**********************************************************************************************************************
FUNCTION: ComM_SICOM_NOCOM
-----------------------------------------------------------------------------------------------------------------------
 API     Type                    Name                    Description
-----------------------------------------------------------------------------------------------------------------------
   Input: -                       -                       -
  Output: -                       -                       -
  Return: -                       -                       -

-----------------------------------------------------------------------------------------------------------------------
  FUNCTION DESCRIPTION
-----------------------------------------------------------------------------------------------------------------------
     Called by: ComM
  Precondition: -

  Container function for the ComM state transition from Silent Communication to No Communication
**********************************************************************************************************************/
FUNC(void, COMM_CODE) ComM_SICOM_NOCOM(NetworkHandleType Channel)
{

  BswM_ComM_CurrentMode(Channel, COMM_NO_COMMUNICATION);
  (void)CanSM_RequestComMode(Channel, COMM_NO_COMMUNICATION);


}
/**********************************************************************************************************************
FUNCTION: ComM_SICOM_NETREQ
-----------------------------------------------------------------------------------------------------------------------
 API     Type                    Name                    Description
-----------------------------------------------------------------------------------------------------------------------
   Input: -                       -                       -
  Output: -                       -                       -
  Return: -                       -                       -

-----------------------------------------------------------------------------------------------------------------------
  FUNCTION DESCRIPTION
-----------------------------------------------------------------------------------------------------------------------
     Called by: ComM
  Precondition: -

  Container function for the ComM state transition from Silent Communication to Network Requested
**********************************************************************************************************************/
FUNC(void, COMM_CODE) ComM_SICOM_NETREQ(NetworkHandleType Channel)
{


  BswM_ComM_CurrentMode(Channel, COMM_FULL_COMMUNICATION);
  (void)CanSM_RequestComMode(Channel, COMM_FULL_COMMUNICATION);
  (void)Nm_NetworkRequest(Channel);

}
/**********************************************************************************************************************
FUNCTION: ComM_SICOM_READYS
-----------------------------------------------------------------------------------------------------------------------
 API     Type                    Name                    Description
-----------------------------------------------------------------------------------------------------------------------
   Input: -                       -                       -
  Output: -                       -                       -
  Return: -                       -                       -

-----------------------------------------------------------------------------------------------------------------------
  FUNCTION DESCRIPTION
-----------------------------------------------------------------------------------------------------------------------
     Called by: ComM
  Precondition: -

  Container function for the ComM state transition from Silent Communication to Network Requested
**********************************************************************************************************************/
FUNC(void, COMM_CODE) ComM_SICOM_READYS(NetworkHandleType Channel)
{

  BswM_ComM_CurrentMode(Channel, COMM_FULL_COMMUNICATION);
  (void)CanSM_RequestComMode(Channel, COMM_FULL_COMMUNICATION);
  (void)Nm_PassiveStartUp(Channel);

}
/**********************************************************************************************************************
FUNCTION: ComM_NETREQ_READYS
-----------------------------------------------------------------------------------------------------------------------
 API     Type                    Name                    Description
-----------------------------------------------------------------------------------------------------------------------
   Input: -                       -                       -
  Output: -                       -                       -
  Return: -                       -                       -

-----------------------------------------------------------------------------------------------------------------------
  FUNCTION DESCRIPTION
-----------------------------------------------------------------------------------------------------------------------
     Called by: ComM
  Precondition: -

  Container function for the ComM state transition from Network Requested to Ready Sleep
**********************************************************************************************************************/
FUNC(void, COMM_CODE) ComM_NETREQ_READYS(NetworkHandleType Channel)
{

  ComM_ActiveComMode[Channel] = COMM_READY_TO_SLEEP;
  (void)Nm_NetworkRelease(Channel);
}
/**********************************************************************************************************************
FUNCTION: ComM_NO_TRANS
-----------------------------------------------------------------------------------------------------------------------
 API     Type                    Name                    Description
-----------------------------------------------------------------------------------------------------------------------
   Input: -                       -                       -
  Output: -                       -                       -
  Return: -                       -                       -

-----------------------------------------------------------------------------------------------------------------------
  FUNCTION DESCRIPTION
-----------------------------------------------------------------------------------------------------------------------
     Called by: ComM
  Precondition: -

  Container function for an no state transition
**********************************************************************************************************************/
FUNC(void, COMM_CODE) ComM_NO_TRANS(NetworkHandleType Channel)
{


  Channel = Channel;

  ComM_Assert(COMM_E_NOSUPPORTED_MODECHANGE, 0x60);

}
/**********************************************************************************************************************
FUNCTION: ComM_EnterModeNoCommunication
-----------------------------------------------------------------------------------------------------------------------
 API     Type                    Name                    Description
-----------------------------------------------------------------------------------------------------------------------
   Input: -                       -                       -
  Output: -                       -                       -
  Return: -                       -                       -

-----------------------------------------------------------------------------------------------------------------------
  FUNCTION DESCRIPTION
-----------------------------------------------------------------------------------------------------------------------
     Called by: ComM
  Precondition: -

  Container function for the ComM state transition from Network Requested to Ready Sleep
**********************************************************************************************************************/
FUNC(void, COMM_CODE) ComM_EnterModeNoCommunication(NetworkHandleType Channel)
{


  Channel = Channel;

} /* PRQA S 6080 */ /* MD_MSR_STMIF */

/**********************************************************************************************************************
FUNCTION: ComM_GetCurrentBusSMMode)
-----------------------------------------------------------------------------------------------------------------------
 API     Type                    Name                    Description
-----------------------------------------------------------------------------------------------------------------------
   Input: -                       -                       -
  Output: -                       -                       -
  Return: -                       -                       -

-----------------------------------------------------------------------------------------------------------------------
  FUNCTION DESCRIPTION
-----------------------------------------------------------------------------------------------------------------------
     Called by: ComM
  Precondition: -

  Container function of the ComM get the current communication mode
**********************************************************************************************************************/
FUNC(void, COMM_CODE) ComM_GetCurrentBusSMMode(NetworkHandleType Channel, P2VAR(ComM_ModeType, AUTOMATIC, COMM_APPL_VAR) ComMode)
{

  (void)CanSM_GetCurrentComMode(Channel, ComMode);
} /* PRQA S 6030 */ /* MD_MSR_STCYC */
/**********************************************************************************************************************
FUNCTION: ComM_LoadNonVolatileValues
-----------------------------------------------------------------------------------------------------------------------
 API     Type                    Name                    Description
-----------------------------------------------------------------------------------------------------------------------
   Input: -                       -                       -
  Output: -                       -                       -
  Return: -                       -                       -

-----------------------------------------------------------------------------------------------------------------------
  FUNCTION DESCRIPTION
-----------------------------------------------------------------------------------------------------------------------
     Called by: ComM
  Precondition: -

  Container function for the ComM to read the ComM specific non-volatile data
**********************************************************************************************************************/
FUNC(Std_ReturnType, COMM_CODE) ComM_LoadNonVolatileValues(void)
{

  return E_NOT_OK;
}
/**********************************************************************************************************************
FUNCTION: ComM_StoreNonVolatileValues
-----------------------------------------------------------------------------------------------------------------------
 API     Type                    Name                    Description
-----------------------------------------------------------------------------------------------------------------------
   Input: -                       -                       -
  Output: -                       -                       -
  Return: -                       -                       -

-----------------------------------------------------------------------------------------------------------------------
  FUNCTION DESCRIPTION
-----------------------------------------------------------------------------------------------------------------------
     Called by: ComM
  Precondition: -

  Container function for the ComM to store the ComM specific non-volatile data
**********************************************************************************************************************/
FUNC(void, COMM_CODE) ComM_StoreNonVolatileValues(void)
{

}
/**********************************************************************************************************************
FUNCTION: ComM_DemReportError
-----------------------------------------------------------------------------------------------------------------------
 API     Type                    Name                    Description
-----------------------------------------------------------------------------------------------------------------------
   Input: -                       -                       -
  Output: -                       -                       -
  Return: -                       -                       -

-----------------------------------------------------------------------------------------------------------------------
  FUNCTION DESCRIPTION
-----------------------------------------------------------------------------------------------------------------------
     Called by: ComM
  Precondition: -

  The function reports the ComM DEM errors.
**********************************************************************************************************************/
FUNC(void, COMM_CODE) ComM_DemReportError(NetworkHandleType  Channel)
{

  Channel = Channel;

  Dem_ReportErrorStatus( COMM_E_NET_START_IND_CHANNEL_0, DEM_EVENT_STATUS_FAILED);
}
/**********************************************************************************************************************
FUNCTION: ComM_ServiceLimitChannelToNoComMode)
-----------------------------------------------------------------------------------------------------------------------
 API     Type                    Name                    Description
-----------------------------------------------------------------------------------------------------------------------
   Input: -                       -                       -
  Output: -                       -                       -
  Return: -                       -                       -

-----------------------------------------------------------------------------------------------------------------------
  FUNCTION DESCRIPTION
-----------------------------------------------------------------------------------------------------------------------
     Called by: ComM
  Precondition: -

  limit the given network channel to the given mode 
**********************************************************************************************************************/
FUNC(Std_ReturnType, COMM_CODE) ComM_ServiceLimitChannelToNoComMode(ComM_NetworkHandleType Channel, boolean Status)
{

   return ComM_LimitChannelToNoComMode((NetworkHandleType)Channel, Status);
}
/**********************************************************************************************************************
FUNCTION: ComM_ServicePreventWakeUp)
-----------------------------------------------------------------------------------------------------------------------
 API     Type                    Name                    Description
-----------------------------------------------------------------------------------------------------------------------
   Input: -                       -                       -
  Output: -                       -                       -
  Return: -                       -                       -

-----------------------------------------------------------------------------------------------------------------------
  FUNCTION DESCRIPTION
-----------------------------------------------------------------------------------------------------------------------
     Called by: ComM
  Precondition: -

  Function to set the inhibition status for to COMM_NO_WAKEUP via the C/S Ports 
**********************************************************************************************************************/
FUNC(Std_ReturnType, COMM_CODE) ComM_ServicePreventWakeUp(ComM_NetworkHandleType Channel, boolean Status)
{

   return ComM_PreventWakeUp((NetworkHandleType)Channel, Status);
}
/*********************************************************************************************************************
FUNCTION: ComM_StateChangeNotification
----------------------------------------------------------------------------------------------------------------------
API     Type                     Name                    Description
----------------------------------------------------------------------------------------------------------------------
  Input: -
  Output: -
  Return: -
----------------------------------------------------------------------------------------------------------------------
  FUNCTION DESCRIPTION
----------------------------------------------------------------------------------------------------------------------
     Called by: upper layer
  Precondition: Communication manager has to be initialized.

  Function to provide user the state change fan out to the higher layers.
*********************************************************************************************************************/
FUNC(void, COMM_CODE) ComM_StateChangeNotification(NetworkHandleType Channel)
{

  Channel = Channel;
} /* PRQA S 6010, 6030, 6080 */ /* MD_MSR_STPTH, MD_MSR_STCYC, MD_MSR_STMIF */





#define COMM_STOP_SEC_CODE
/* PRQA S 5087 1 */ /* MD_MSR_19.1 */
#include "MemMap.h"


