/********************************************************************
 * SAppContext.hpp
 * Project: Lavinou Hive Monitoring (LHM)
 * All rights reserved to OTR Labs copyright (c) 2020 
 * -----------------------------------------------------------------
 * Description:
 * 
 * -----------------------------------------------------------------
 * Author(s) & Notes:
 *******************************************************************/
#ifndef _SAPPCONTEXT_HPP
#define _SAPPCONTEXT_HPP

#include "SRTCClockContext.hpp"
#include "SLoggingContext.hpp"
#include "EDebug.hpp"

struct SAppContext
{
    EDebug eDebugMask;
    SRTCClockContext rtcClock;
    SLoggingContext logger;
    
};

#endif