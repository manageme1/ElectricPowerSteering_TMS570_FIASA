/* -----------------------------------------------------------------------------
  Filename:    Dem_PBcfg.c
  Description: Toolversion: 18.00.01.01.30.06.49.02.00.00
               
               Serial Number: CBD1300649
               Customer Info: Nexteer Automotive Corporation
                              Package: MSR Fiat SLP4 - MSR Fiat SLP4
                              Micro: 0812BPGEQQ1
                              Compiler: TexasInstruments 4.9.5
               
               
               Generator Fwk   : GENy 
               Generator Module: Dem
               
               Configuration   : C:\Users\mzjphh\Desktop\Fiasa_326_327_05.01.00\Fiasa_326_327_EPS_TMS570\Tools\AsrProject\Config\ECUC\EPS.ecuc.vdsxml
               
               ECU: 
                       TargetSystem: Hw_Tms470/570Cpu (Dcan)
                       Compiler:     TexasInstruments
                       Derivates:    TMS570LS30316U
               
               Channel "CCAN":
                       Databasefile: 
                       Bussystem:    CAN
                       Manufacturer: Vector
                       Node:         CanStateManagerConfiguration

  Generated by , 2017-03-06  13:15:28
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

/* -----------------------------------------------------------------------------
    &&&~ Includes
 ----------------------------------------------------------------------------- */

/* configuration, interrupt handling implementations differ from the 
 * source identification define used here. The naming 
 * schemes for those files can be taken from this list: 
 * 
 * Dem.c:         DEM_SOURCE
 * Dem_Lcfg.c:    DEM_LCFG_SOURCE
 * Dem_PBcfg.c:   DEM_PBCFG_SOURCE */
#define DEM_PBCFG_SOURCE
#include "Dem.h"
#include "Dem_Lcfg.h"
#include "Dem_PBcfg.h"


/* -----------------------------------------------------------------------------
    &&&~ Version Check
 ----------------------------------------------------------------------------- */

#if (DIAG_ASRDEM_GENTOOL_GENY_MAJOR_VERSION != 0x03u)
#error "Dem_PBcfg.c : Incompatible DIAG_ASRDEM_GENTOOL_GENY_MAJOR_VERSION in generated File!"
#endif

#if (DIAG_ASRDEM_GENTOOL_GENY_MINOR_VERSION != 0x13u)
#error "Dem_PBcfg.c : Incompatible DIAG_ASRDEM_GENTOOL_GENY_MINOR_VERSION in generated File!"
#endif

#if (DIAG_ASRDEM_GENTOOL_GENY_PATCH_VERSION != 0x01u)
#error "Dem_PBcfg.c : Incompatible DIAG_ASRDEM_GENTOOL_GENY_PATCH_VERSION in generated File!"
#endif



/* -----------------------------------------------------------------------------
    &&&~ Post-build changeable config data tables
 ----------------------------------------------------------------------------- */

#define DEM_START_SEC_PBCONST
/* PRQA S 5087 1 */ /* MD_MSR_19.1 */
#include "MemMap.h"

CONST(uint8, DEM_PBCFG) Dem_PostBuildProperty[] = 
{
  0, 3, 3, 12, 11, 10, 8, 9, 8, 3, 3, 3, 3, 3, 3, 3, 
  3, 3, 7, 6, 6, 4, 4, 5, 5, 5, 4, 4, 4, 4, 4, 4, 
  4, 4, 4, 4, 5, 4, 3, 2, 1, 1, 1, 1, 1, 1, 1, 1, 
  1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1
};
CONST(uint16, DEM_PBCFG) Dem_DTCNumberTable[] = 
{
  0xFFFFu, 0xD952u, 0xD932u, 0xD013u, 0xD011u, 0xD010u, 0xD007u, 0xD006u, 0xD005u, 0xC423u, 0xC422u, 0xC415u, 0xC401u, 0xC100u, 0xC001u, 0xC001u, 
  0xA23Bu, 0xA22Cu, 0xA199u, 0xA199u, 0xA199u, 0x6217u, 0x6217u, 0x6210u, 0x6210u, 0x6205u, 0x5593u, 0x5593u, 0x5593u, 0x5593u, 0x5592u, 0x5592u, 
  0x5592u, 0x5592u, 0x5592u, 0x521Au, 0x5219u, 0x5009u, 0x5005u, 0x5003u, 0xFFFFu, 0xFFFFu, 0xFFFFu, 0xFFFFu, 0xFFFFu, 0xFFFFu, 0xFFFFu, 0xFFFFu, 
  0xFFFFu, 0xFFFFu, 0xFFFFu, 0xFFFFu, 0xFFFFu, 0xFFFFu, 0xFFFFu, 0xFFFFu, 0xFFFFu, 0xFFFFu, 0xFFFFu, 0xFFFFu, 0xFFFFu, 0xFFFFu, 0xFFFFu
};
CONST(uint8, DEM_PBCFG) Dem_DTC_FTB_Table[] = 
{
  0xFFu, 0x83u, 0x86u, 0x87u, 0x87u, 0x87u, 0x87u, 0x87u, 0x87u, 0x2Fu, 0x2Fu, 0x2Fu, 0x2Fu, 0x87u, 0x88u, 0x87u, 
  0x05u, 0x51u, 0x1Cu, 0x17u, 0x16u, 0x49u, 0x48u, 0x98u, 0x68u, 0x25u, 0x49u, 0x13u, 0x12u, 0x11u, 0x19u, 0x13u, 
  0x12u, 0x11u, 0x01u, 0x54u, 0x2Fu, 0x09u, 0x68u, 0x86u, 0xFFu, 0xFFu, 0xFFu, 0xFFu, 0xFFu, 0xFFu, 0xFFu, 0xFFu, 
  0xFFu, 0xFFu, 0xFFu, 0xFFu, 0xFFu, 0xFFu, 0xFFu, 0xFFu, 0xFFu, 0xFFu, 0xFFu, 0xFFu, 0xFFu, 0xFFu, 0xFFu
};
CONST(Dem_DTCSeverityType, DEM_PBCFG) Dem_DTCSeverityTable[] = 
{
  0, 0, 32, 32, 128, 64, 128, 128, 64, 32, 64, 64, 32
};
CONST(uint8, DEM_PBCFG) Dem_FunctionalUnitTable[] = 
{
  48, 0, 48, 48, 48, 48, 48, 48, 48, 48, 48, 48, 48	/* NEXTEER MANUAL EDIT */
};
CONST(uint8, DEM_PBCFG) Dem_EventFlagsTable[] = 
{
  0, 0, 5, 5, 5, 5, 5, 5, 0, 0, 0, 0, 5
};
CONST(uint8, DEM_PBCFG) Dem_DebounceIndexTable[] = 
{
  0, 0, 0, 1, 1, 1, 1, 2, 3, 4, 5, 4, 4
};
CONST(uint8, DEM_PBCFG) Dem_DebounceCountInTable[] = 
{
  1, 127
};
CONST(uint8, DEM_PBCFG) Dem_DebounceCountOutTable[] = 
{
  1, 127
};
CONST(uint8, DEM_PBCFG) Dem_DebounceTypeTable[] = 
{
  0, 0, 1, 0, 0, 0, 1, 1, 1, 1, 1, 1, 1
};
CONST(uint16, DEM_PBCFG) Dem_DebounceFailedTimeTable[] = 
{
  10001, 101, 40001, 30001, 201, 101
};
CONST(uint16, DEM_PBCFG) Dem_DebouncePassedTimeTable[] = 
{
  10001, 101, 101, 1, 1, 1
};
CONST(Dem_EventIdType, DEM_PBCFG) Dem_TimeBasedDebIdxToEventIdTable[] = 
{
  3, 4, 5, 6, 7, 8, 18, 19, 20, 39
};
CONST(uint16, DEM_PBCFG) Dem_EventIdToTimeBasedDebIdxTable[] = 
{
  0xFFFFu, 0xFFFFu, 0xFFFFu, 0, 1, 2, 3, 4, 5, 0xFFFFu, 0xFFFFu, 0xFFFFu, 0xFFFFu, 0xFFFFu, 0xFFFFu, 0xFFFFu, 
  0xFFFFu, 0xFFFFu, 6, 7, 8, 0xFFFFu, 0xFFFFu, 0xFFFFu, 0xFFFFu, 0xFFFFu, 0xFFFFu, 0xFFFFu, 0xFFFFu, 0xFFFFu, 0xFFFFu, 0xFFFFu, 
  0xFFFFu, 0xFFFFu, 0xFFFFu, 0xFFFFu, 0xFFFFu, 0xFFFFu, 0xFFFFu, 9, 0xFFFFu, 0xFFFFu, 0xFFFFu, 0xFFFFu, 0xFFFFu, 0xFFFFu, 0xFFFFu, 0xFFFFu, 
  0xFFFFu, 0xFFFFu, 0xFFFFu, 0xFFFFu, 0xFFFFu, 0xFFFFu, 0xFFFFu, 0xFFFFu, 0xFFFFu, 0xFFFFu, 0xFFFFu, 0xFFFFu, 0xFFFFu, 0xFFFFu, 0xFFFFu
};
CONST(Dem_DTCKindType, DEM_PBCFG) Dem_DtcKindTable[] = 
{
  0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1
};
CONST(uint8, DEM_PBCFG) Dem_EventDestinationTable[] = 
{
  0, 0, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2
};
CONST(uint8, DEM_PBCFG) Dem_EventDidIndexTable[] = 
{
  0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
};
CONST(uint8, DEM_PBCFG) Dem_EventDidCountTable[] = 
{
  0, 0, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8
};
CONST(uint16, DEM_PBCFG) Dem_DidNumberTable[] = 
{
  0x1008u, 0x1009u, 0x200Au, 0x2001u, 0x1004u, 0x1002u, 0x0885u, 0x0AD8u
};
CONST(uint8, DEM_PBCFG) Dem_DidSizeTable[] = 
{
  3, 2, 3, 2, 1, 1, 2, 1
};
CONST(uint8, DEM_PBCFG) Dem_SnapshotIndexTable[] = 
{
  0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
};
CONST(uint8, DEM_PBCFG) Dem_SnapshotCountTable[] = 
{
  0, 0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1
};
CONST(uint8, DEM_PBCFG) Dem_SnapshotNumberTable[] = 
{
  0, 255
};
CONST(uint8, DEM_PBCFG) Dem_SnapshotSizeTable[] = 
{
  15
};
CONST(uint8, DEM_PBCFG) Dem_SnapshotDidIndexTable[] = 
{
  0
};
CONST(uint8, DEM_PBCFG) Dem_SnapshotDidCountTable[] = 
{
  8
};
CONST(uint8, DEM_PBCFG) Dem_EventRecordIndexTable[] = 
{
  0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
};
CONST(uint8, DEM_PBCFG) Dem_EventRecordSizeTable[] = 
{
  0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1
};
CONST(uint8, DEM_PBCFG) Dem_RecordIdTable[] = 
{
  1
};
CONST(uint8, DEM_PBCFG) Dem_RecordSizeTable[] = 
{
  6
};
CONST(uint16, DEM_PBCFG) Dem_RecordFuncTable[] = 
{
  0
};
#define DEM_STOP_SEC_PBCONST
/* PRQA S 5087 1 */ /* MD_MSR_19.1 */
#include "MemMap.h"





