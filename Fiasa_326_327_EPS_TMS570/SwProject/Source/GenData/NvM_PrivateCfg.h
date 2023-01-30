/**********************************************************************************************************************
 *  COPYRIGHT
 *  -------------------------------------------------------------------------------------------------------------------
 *  \verbatim
 *  Copyright (c) 2010 by Vector Informatik GmbH.                                              All rights reserved.
 *
 *                This software is copyright protected and proprietary to Vector Informatik GmbH.
 *                Vector Informatik GmbH grants to you only those rights as set out in the license conditions.
 *                All other rights remain with Vector Informatik GmbH.
 *  \endverbatim
 *  -------------------------------------------------------------------------------------------------------------------
 *  FILE DESCRIPTION
 *  -------------------------------------------------------------------------------------------------------------------
 *         File:  NvM_PrivateCfg.h
 *    Component:  MemService_AsrNvM
 *       Module:  NvM - Submodule Cfg (configuration)
 *    Generator:  -
 *
 *  Description:  Configuration Header File.
 *                Private configuration elements. Shall only be used by NvM implementation (including NvM_Cfg.c)
 *  -------------------------------------------------------------------------------------------------------------------
 *  GENERATION INFORMATION
 *  -------------------------------------------------------------------------------------------------------------------
 *     Project:    EPS.ecuc
 *   Generated:  2013-07-10 01:54 pm
 *    Licensee:   Nexteer Automotive Corporation (2502600608)
 
    This file is generated by DaVinci Configurator Pro - DAVINCICFG.EXE V4.0.66.0.
    Do not modify this file, otherwise the software may behave in unexpected way.
 *********************************************************************************************************************/

/* Do not modify the following parts. */
/* Modification is only allowed in the described parts */

/* ---- private section of configuration ---------------------------------- */
/* ---- used as interface to all submodules of the NvM -------------------- */
#if (!defined NVM_CFG_H_PRIVATE)
#define NVM_CFG_H_PRIVATE

/**********************************************************************************************************************
 * VERSION IDENTIFICATION
 *********************************************************************************************************************/
#define NVM_PRIV_CFG_MAJOR_VERSION    (3u)
#define NVM_PRIV_CFG_MINOR_VERSION    (7u)
#define NVM_PRIV_CFG_PATCH_VERSION    (0u)

/* production error */
#include /*<NVM_CFG_INCLUDE_DEM/>*/ "Dem.h"

#define NvM_SetError(ErrorCode) \
    (/*<NVM_SETERROR>*/Dem_ReportErrorStatus/*</NVM_SETERROR>*/((ErrorCode), DEM_EVENT_STATUS_FAILED))


#if (!defined NVM_CONFIGURATION)
    /* in NvM_Cfg.c we don't need the following definitions and includes */
/* ---------------------------------------------------------------------------
 *              Configurations for Development mode
 *
 *
 *
 */
#if (STD_ON == NVM_DEV_ERROR_DETECT)
/* ------------------------------------------------------------------------ */

    /* "Group Switches"
     * Here is a single configuration possible
     * On/Off: Check the module status
     */
    #define NVM_CFG_CHK_STATUS_UNINIT /*<NVM_CFG_CHK_STATUS_UNINIT/>*/ (STD_ON)

    /* Switch to enable/disable Block listed/pending check on API requests */
    #define NVM_CFG_CHK_BLOCK_PENDING /*<NVM_CFG_CHK_BLOCK_PENDING/>*/ (STD_OFF)

    /* On/Off: Check the configuration of Management Type:
     * NvM_RestoreBlockDefaults() -  BlockId shall address a ROM-Block type
     * NvM_SetDataIndex()         -  BlockId shall address a Walking/Dataset
     * NvM_GetDataIndex()            Block type
     */
    #define NVM_CFG_CHK_MNGMT_TYPE  /*<NVM_CFG_CHK_MNGMT_TYPE/>*/ (STD_ON)

    /* On/Off: Check parameter Protection in
     * NvM_WriteBlock(), NvM_EraseNvBlock()
     */
    #define NVM_CFG_CHK_BLOCK_PROTECTION /*<NVM_CFG_CHK_BLOCK_PROTECTION/>*/ (STD_ON)

    /* Main on/off switches for all parameter checks */
    #define NVM_CFG_DO_PARAM_CHK        /*<NVM_CFG_DO_PARAM_CHK/>*/ (STD_ON)

    /* Is the Check of Parameters enabled above? */
    /* Here is a single configuration possible */
    #if (NVM_CFG_DO_PARAM_CHK == STD_ON)

        /* On/Off:Check parameter BlockId
         * Generally: BlockId must be smaller than NVM_NO_OF_BLOCK_IDS
         * All API-Calls (excepting NvM_GetErrorStatus()):
         * BlockId must not be 0 (MULIT_BLOCK_REQUEST status block)
         */
        #define NVM_CFG_CHK_PARAM_BLOCKID    /*<NVM_CFG_CHK_PARAM_BLOCKID/>*/ (STD_ON)

        /* On/Off: check parameter DataIndex in NvM_SetDataIndex() */
        #define NVM_CFG_CHK_PARAM_DATAINDEX  /*<NVM_CFG_CHK_PARAM_DATAINDEX/>*/ (STD_ON)

        /* On/Off: check parameter Pointer in NvM_ReadBlock() */
        #define NVM_CFG_CHK_PARAM_POINTER  /*<NVM_CFG_CHK_PARAM_POINTER/>*/ (STD_ON)

    #else
        /* Do not modify these settings */
        #define NVM_CFG_CHK_PARAM_BLOCKID    (STD_OFF)
        #define NVM_CFG_CHK_PARAM_DATAINDEX  (STD_OFF)
        #define NVM_CFG_CHK_PARAM_POINTER    (STD_OFF)
    #endif

    /* Notify development errors */
    #define NVM_DEBUG_REPORTING         /*<NVM_DEBUG_REPORTING/>*/ (STD_ON)

    /* Is the reporting of Debug-Errors enabled */
    #if (NVM_DEBUG_REPORTING == STD_ON)

        /* Module Identification for the Errorhook Function as defined by AUTOSAR */

        /* Include-File, which contains Errorhook-Function */
        #include /*<NVM_CFG_INCLUDE_DET/>*/ "Det.h"

        /* User defineable Errorhook */
        #define NvM_Errorhook(ServiceId, ErrorCode) \
           (/*<NVM_ERRORHOOK>*/Det_ReportError/*</NVM_ERRORHOOK>*/((NVM_MODULE_ID), (0u), (ServiceId), (ErrorCode)))

    #else /* debug reporting is OFF */

        /* the Errorhook does nothing */
        #define NvM_Errorhook(ServiceId, ErrorCode)

    #endif  /* (NVM_DEBUG_REPORTING == STD_ON) */

/* ------------------------------------------------------------------------ */
/*                     Configurations for Production mode                   */
#else
/* ------------------------------------------------------------------------ */
    /* Development mode is off, all development checks are explicitly disabled */
    /* Do not modify these settings */
    #define NVM_CFG_CHK_BLOCK_PROTECTION (STD_OFF)
    #define NVM_CFG_CHK_BLOCK_PENDING    (STD_OFF)
    #define NVM_CFG_CHK_STATUS_UNINIT    (STD_OFF)
    #define NVM_CFG_CHK_MNGMT_TYPE       (STD_OFF)
    #define NVM_CFG_CHK_PARAM_BLOCKID    (STD_OFF)
    #define NVM_CFG_CHK_PARAM_DATAINDEX  (STD_OFF)
    #define NVM_CFG_CHK_PARAM_POINTER    (STD_OFF)

    #define NVM_CFG_DO_PARAM_CHK         (STD_OFF)
    #define NVM_DEBUG_REPORTING          (STD_OFF)

    /* no errorhook routine available */
    #define NvM_Errorhook(ServiceId, ErrorCode)

/* ------------------------------------------------------------------------ */
#endif   /*  NVM_DEV_ERROR_DETECT   */
/* ------------------------------------------------------------------------ */

/*---- NvM type definitions and defines for the submodules ---------------- */

/* defines for internal flags */
#define NVM_INTFLAG_WAIT_SET           (0x01u)
#define NVM_INTFLAG_WAIT_CL            (0xFEu)
#define NVM_INTFLAG_ERROR_SET          (0x10u)
#define NVM_INTFLAG_ERROR_CL           (0xEFu)
#define NVM_INTFLAG_DYN_MISMATCH_SET   (0x20u)
#define NVM_INTFLAG_DYN_MISMATCH_CL    (0xDFu)

/* defines for internal flags, controlled via API) */
#define NVM_APIFLAG_WRITE_ALL_SET      (0x02u)
#define NVM_APIFLAG_WRITE_ALL_CL       (0xFDu)
#define NVM_APIFLAG_READ_ALL_SET       (0x04u)
#define NVM_APIFLAG_READ_ALL_CL        (0xFBu)
#define NVM_APIFLAG_CANCEL_WR_ALL_SET  (0x40u)
#define NVM_APIFLAG_CANCEL_WR_ALL_CL   (0xBFu)
#define NVM_APIFLAG_KILL_WR_ALL_SET    (0x80u)
#define NVM_APIFLAG_KILL_WR_ALL_CL     (0x7Fu)

/* defines for setting and clearing the internal flags */
#define NvM_SetIntFlag(FlagParam)   (NvM_IntFlags_u8 |= (FlagParam))

#define NvM_ClearIntFlag(FlagParam) (NvM_IntFlags_u8 &= (FlagParam))

#define NvM_PollIntFlag(FlagParam)  ((FlagParam) == (NvM_IntFlags_u8 & (FlagParam)))

#endif /* NVM_CONFIGURATION */

/* includes, we only need internally */
/* ---- Include of the interface of the MemIf module ---------------------- */
#include "MemIf.h"


#define NVM_BLOCK_TYPE_ROM          (NVM_BLOCK_NATIVE_ROM)

typedef unsigned int NvM_BitFieldType;

/* Block Management Types */
#define NVM_BLOCK_NATIVE          0u
#define NVM_BLOCK_REDUNDANT     0x01u
#define NVM_BLOCK_DATASET       0x02u

/* The blocks' RAM management area type */
typedef struct
{
    uint8                   NvDataIndex_t;
    NvM_RequestResultType   NvRamErrorStatus_u8;
    uint8                   NvRamAttributes_u8;
} NvM_RamMngmtAreaType;

typedef P2VAR(NvM_RamMngmtAreaType, AUTOMATIC, NVM_CONFIG_DATA) NvM_RamMngmtPtrType;

/* type of a multi block callback function for the ReadAll/WriteAll job end callbacks */
typedef P2FUNC(void, NVM_APPL_CODE, NvM_MultiCbkPtrType)
    (NvM_ServiceIdType ServiceId, NvM_RequestResultType JobResult);

/* type of a callback function for the asynchron job end callbacks */
typedef P2FUNC(Std_ReturnType, NVM_APPL_CODE, NvM_AsyncCbkPtrType)
    (NvM_ServiceIdType ServiceId, NvM_RequestResultType JobResult);

/* type of a block init callback function pointer
 * type changed thanks to Bugzilla 11982; we use return type void,
 * because the original return value is useless to us           */
typedef P2FUNC(void, NVM_APPL_CODE, NvM_InitCbkPtrType)(void);

/* pointer type referencing a block of Application's RAM/ROM/CRC data,
 * the pointer itself doesn't have any memmclass assigned, at this point
 */
typedef P2VAR(uint8, AUTOMATIC, NVM_APPL_DATA) NvM_RamAddressType;
typedef P2CONST(uint8, AUTOMATIC, NVM_APPL_DATA) NvM_ConstRamAddressType;

typedef P2CONST(uint8, AUTOMATIC, NVM_APPL_CONST)NvM_RomAddressType;

#if(STD_ON == NVM_CRC_INT_BUFFER)
typedef P2VAR(uint8, AUTOMATIC, NVM_PRIVATE_DATA) NvM_RamCrcAddressType;
#endif

/* block's Flag bit mask, used in the block descriptor element "Flags_u8" */
#define NVM_BLOCK_USE_CRC_OFF                (0u)
#define NVM_BLOCK_CRC_8_ON                   (1u)
#define NVM_BLOCK_CRC_16_ON                  (2u)
#define NVM_BLOCK_CRC_32_ON                  (3u)

#define NVM_BLOCK_CRC_MASK                   (0x03)

#define NVM_CALC_RAM_BLOCK_CRC_ON            (1u)
#define NVM_CALC_RAM_BLOCK_CRC_OFF           (0u)
#define NVM_BLOCK_WRITE_PROT_ON              (2u)
#define NVM_BLOCK_WRITE_PROT_OFF             (0u)
#define NVM_BLOCK_WRITE_BLOCK_ONCE_ON        (4u)
#define NVM_BLOCK_WRITE_BLOCK_ONCE_OFF       (0u)
#define NVM_RESISTANT_TO_CHANGED_SW_ON       (8u)
#define NVM_RESISTANT_TO_CHANGED_SW_OFF      (0u)
#define NVM_SELECT_BLOCK_FOR_READALL_ON      (16u)
#define NVM_SELECT_BLOCK_FOR_READALL_OFF     (0u)

typedef P2CONST(void, AUTOMATIC, NVM_APPL_CONST) NvM_GenericRomDefaultsPtrType;

/* NvRam block descriptor type */
typedef struct
{
    NvM_RamAddressType      RamBlockDataAddr_t;
    NvM_GenericRomDefaultsPtrType defaults_pt;
    NvM_AsyncCbkPtrType     CallbackFunc_pt;

#if(STD_ON == NVM_CRC_INT_BUFFER)
    NvM_RamCrcAddressType   RamBlockCrcAddr_t;
#endif
    uint16                  NvIdentifier_u16;
    uint16                  NvBlockLength_u16;
    NvM_BitFieldType        NvBlockCount_u8 :8;
    NvM_BitFieldType        BlockPrio_u8    :8;
    NvM_BitFieldType        DeviceId_u8     :4;
    NvM_BitFieldType        MngmtType_t     :2;
    NvM_BitFieldType        CrcSettings     :2;
    NvM_BitFieldType        Flags_u8        :5;
    NvM_BitFieldType        RomDefaultBlock :1;
} NvM_BlockDescriptorType;


/* pointer type to the BlockDescriptor Table or one of its entries, with the correct distance */
typedef P2CONST(NvM_BlockDescriptorType, AUTOMATIC, NVM_CONFIG_CONST) NvM_BlockDescrPtrType;

/* Internal Service Ids of the different services of the NVM */
typedef enum
{
    NVM_INT_FID_WRITE_BLOCK = 0u,
    NVM_INT_FID_READ_BLOCK,
    NVM_INT_FID_RESTORE_DEFAULTS,
    NVM_INT_FID_INVALIDATE_NV_BLOCK,
    NVM_INT_FID_ERASE_BLOCK,
    NVM_INT_FID_WRITE_ALL,
    NVM_INT_FID_READ_ALL,
    NVM_INT_FID_NO_JOB_PENDING /* additionally denotes idle state oif NVM */
} NvM_InternalServiceIdEnumType;

/* Force implizit cast for enum NvM_InternalServiceIdEnumType into uint8 when using
 * NvM_InternalServiceIdType as data type. But only for production mode in order to
 * see not only numbers when debugging in debug mode
 */
#if (STD_ON == NVM_DEV_ERROR_DETECT)
    typedef NvM_InternalServiceIdEnumType NvM_InternalServiceIdType;
#else
    typedef uint8 NvM_InternalServiceIdType;
#endif

/* reference (pointer) to a queue element, actually it is just an index */
typedef uint8 NvM_QueueEntryRefType;

/* type of a queue element */
typedef struct
{
    NvM_RamAddressType          RamAddr_t;
    NvM_BlockIdType             BlockId;
    NvM_InternalServiceIdType   ServiceId;
    NvM_QueueEntryRefType       NextEntry;
    NvM_QueueEntryRefType       PrevEntry;
#if(NVM_JOB_PRIORISATION == STD_ON)
    uint8                       JobPrio;
#endif
} NvM_QueueEntryType;

typedef struct
{
    uint8 MaxIndex; /* size of immediate and normal queues - 1 */
    uint8 NpSize;   /* size of Normal Prio Queue */
} NvM_QueueSizesType;

/* defines for the block ram attribute states */
#define NVM_STATE_VALID_SET   (0x01u)
#define NVM_STATE_VALID_CL    (0xFEu)
#define NVM_STATE_CHANGED_SET (0x02u)
#define NVM_STATE_CHANGED_CL  (0xFDu)
#define NVM_WR_PROT_SET       (0x80u)
#define NVM_WR_PROT_CL        (0x7Fu)
#define NVM_LOCK_STAT_SET     (0x40u)
#define NVM_LOCK_STAT_CL      (0xBFu)
#define NVM_PRI_DEFECT_SET	  (0x20u)
#define NVM_PRI_DEFECT_CL	  (0xDFu)

/* defines the possible states of an NV Block, which can be determined.
 *  They are necessary for write processing of redundant NVRAM Blocks.          */
#define NVM_NVBLOCK_STATE_UPTODATE (0x00u)
#define NVM_NVBLOCK_STATE_OUTDATED (0x01u)
#define NVM_NVBLOCK_STATE_DEFECT   (0x02u)
#define NVM_NVBLOCK_STATE_UNKNOWN  (0x03u)

#define NVM_NVBLOCK_STATE_SEC_ACTIVE   (0x80u)
#define NVM_NVBLOCK_STATE_PRI_ACTIVE   (0x7Fu)

/* our state information shall contain primary, secondary block, and current block's state,
 * this current state is at the least significant position, i.e. shift = 0 */
#define NVM_PRI_NVBLOCK_STATE_SHIFT (0x5u)
#define NVM_SEC_NVBLOCK_STATE_SHIFT (0x3u)

#define NVM_NVBLOCK_STATE_BIT_MASK (0x3u)

/* Crc union Type */
typedef union
{
    uint8 CrcArray_au8[4u];
    uint16 Crc16_u16;
    uint32 Crc32_u32;
} NvM_CrcType;

/* define the base type for the CRC queue bitstring. This type depends only on CPU type
 * as defined in Platform_Types.h.
 * On 32bit platforms use uint32, else (16bit) use uint16 */
#if (CPU_TYPE == CPU_TYPE_32)
    #define NVM_CRC_QUEUE_ENTRY_BITS     32u
    #define NVM_CRC_QUEUE_BITINDEX_MASK  0x1Fu
    #define NVM_CRC_QUEUE_ENTRY_SHIFT    5u
    #define NVM_CRC_QUEUE_ENTRY_MASK     0xFFFFFFFFu

    typedef uint32 NvM_CrcQueueEntryType;
#else
    #define NVM_CRC_QUEUE_ENTRY_BITS     16u
    #define NVM_CRC_QUEUE_BITINDEX_MASK  0x0Fu
    #define NVM_CRC_QUEUE_ENTRY_SHIFT    4u
    #define NVM_CRC_QUEUE_ENTRY_MASK     0xFFFFu

typedef uint16 NvM_CrcQueueEntryType;
#endif

#define NVM_START_SEC_CODE
#include "MemMap.h"

    /* definition of the lock/unlock abstraction funcitons */
    extern FUNC(void, NVM_PRIVATE_CODE) NvM_EnterCriticalSection(void);

    extern FUNC(void, NVM_PRIVATE_CODE) NvM_ExitCriticalSection(void);

    extern FUNC(uint8_least, NVM_PRIVATE_CODE) NvM_CfgCheckRamBlockLengths(void);
    extern FUNC(uint8_least, NVM_PRIVATE_CODE) NvM_CfgCheckRomBlockLengths(void);

#define NVM_STOP_SEC_CODE
#include "MemMap.h"

#define NVM_START_SEC_VAR_NOINIT_8BIT
#include "MemMap.h"
#if(STD_ON == NVM_CRC_INT_BUFFER)
    /* create the internal buffer of size NVM_INTERNAL_BUFFER_SIZE */
    extern VAR(uint8, NVM_PRIVATE_DATA) NvM_InternalBuffer_au8[];
#endif
	/* create a test buffer of size 1 byte for testing readability of a block */
	extern VAR(uint8, NVM_PRIVATE_DATA) NvM_TestBuffer_u8;
#define NVM_STOP_SEC_VAR_NOINIT_8BIT
#include "MemMap.h"


#if(NVM_API_CONFIG_CLASS != NVM_API_CONFIG_CLASS_1)
    #define NVM_START_SEC_VAR_NOINIT_UNSPECIFIED
    #include "MemMap.h"

        /* Job Queue used for normal and high prio jobs */
        extern VAR(NvM_QueueEntryType, NVM_PRIVATE_DATA) NvM_JobQueue_at[];

    #define NVM_STOP_SEC_VAR_NOINIT_UNSPECIFIED
    #include "MemMap.h"
#endif

#define NVM_START_SEC_CONST_8BIT
#include "MemMap.h"
    /* Variable that holds the number of write attempts (1 + retries) */
    extern CONST(uint8, NVM_PRIVATE_CONST) NvM_NoOfWrAttempts_u8;

#define NVM_STOP_SEC_CONST_8BIT
#include "MemMap.h"


#define NVM_START_SEC_CONST_16BIT
#include "MemMap.h"
    /* number of crc bytes per call of NvM_MainFunction() */
    extern CONST(uint16, NVM_CONFIG_CONST) NvM_NoOfCrcBytes_u16;

	/* constant holding Crc quueue size value */
	extern CONST(uint16, NVM_PRIVATE_CONST) NvM_CrcQueueSize_u16;
#define NVM_STOP_SEC_CONST_16BIT
#include "MemMap.h"


typedef P2CONST(struct NvM_CrcHandlerClass, AUTOMATIC, NVM_PRIVATE_CONST) NvM_CrcHandlerClassConstPtr;

#define NVM_START_SEC_CONST_UNSPECIFIED
#include "MemMap.h"
    /* constants holding the compiled queue size values */
    extern CONST(NvM_QueueSizesType, NVM_PRIVATE_CONST) NvM_QueueSizes_t;

    extern CONST(NvM_CrcHandlerClassConstPtr, NVM_PRIVATE_CONST) NvM_CrcHandlerTable_at[4];


    /* Constants, holding the two DEM error codes */
    extern CONST(Dem_EventIdType, NVM_PRIVATE_CONST) NvM_DemErrReqFailed;
    extern CONST(Dem_EventIdType, NVM_PRIVATE_CONST) NvM_DemErrIntegrityFailed;

#define NVM_STOP_SEC_CONST_UNSPECIFIED
#include "MemMap.h"


/**********************************************************************************************************************
 * ALL BLOCK RELATED SETTINGS
 *********************************************************************************************************************/

#define NVM_START_SEC_CONST_DESCRIPTOR_TABLE
#include "MemMap.h"

    /* define the multi block callback */
    extern CONST(NvM_MultiCbkPtrType, NVM_CONFIG_CONST) NvM_MultiBlockCbk;

    /* NvM_MultiBlockCbk(ServiceId, RequestResult) */

    /* block descriptor table that holds the static configuration parameters
     * of the RAM, ROM and NVBlocks. This table has to be adjusted according
     * to the configuration of the NVManager
     */

    extern CONST(NvM_BlockDescriptorType, NVM_CONFIG_CONST) NvM_BlockDescriptorTable_at[];

#define NVM_STOP_SEC_CONST_DESCRIPTOR_TABLE
#include "MemMap.h"


#define NVM_START_SEC_VAR_NOINIT_UNSPECIFIED
#include "MemMap.h"

    /* Crc job queue. It's just a bit string, for performance reasons we use uint32 */
    extern VAR(NvM_CrcQueueEntryType, NVM_CONFIG_DATA) NvM_CrcQueue_at[];

#define NVM_STOP_SEC_VAR_NOINIT_UNSPECIFIED
#include "MemMap.h"


#define NVM_START_SEC_VAR_POWER_ON_INIT_UNSPECIFIED
#include "MemMap.h"

    /* array of RAM Block Management areas, defined to be usable in block descriptor table */
    extern VAR(NvM_RamMngmtAreaType, NVM_CONFIG_DATA) NvM_BlockMngmtArea_at[];

	 /* management area for DCM blocks */
    extern VAR(NvM_RamMngmtAreaType, NVM_CONFIG_DATA) NvM_DcmBlockMngmt_t;

#define NVM_STOP_SEC_VAR_POWER_ON_INIT_UNSPECIFIED
#include "MemMap.h"

/* ---- end private configuration section --------------------------------- */
#endif /* NVM_CFG_PRIVATE */

/*---- End of File ---------------------------------------------------------*/
