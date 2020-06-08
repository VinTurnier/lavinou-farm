/********************************************************************
 * EDebug.hpp
 * Project: Lavinou Hive Monitoring (LHM)
 * All rights reserved to OTR Labs copyright (c) 2020 
 * -----------------------------------------------------------------
 * Description:
 *  The debug file contains the collection of debug flags available
 * throughout the project. SAppContext contains the debug enum which
 * can be set while using gdb. For example:
 * (gdb) set gpAppCtx->eDebugMask = 0x100
 * This will turn on the debug logs for ...
 * -----------------------------------------------------------------
 * Author(s) & Notes:
 * Vincent Turnier
 * - NOTES: 7-Jun-2020: original
 *******************************************************************/

#ifndef _EDEBUG_HPP
#define _EDEBUG_HPP

/********************************************************************
 * @brief eDebugMask located in app context
 *******************************************************************/

enum EDebug
{
    EDEBUG_MASK_DUMP_LED_STATES     = 0x00000001,
    EDEBUG_MASK_LAST                = 0xFFFFFFFF //enum is 32 bit long
};

#endif