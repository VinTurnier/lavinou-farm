/********************************************************************
 * SRTCClockContext.hpp
 * Project: Lavinou Hive Monitoring (LHM)
 * All rights reserved to OTR Labs copyright (c) 2020 
 * -----------------------------------------------------------------
 * Description:
 * 
 * -----------------------------------------------------------------
 * Author(s) & Notes:
 *******************************************************************/
#ifndef _SRTCCLOCKCONTEXT_HPP
#define _SRTCCLOCKCONTEXT_HPP

#include <stdint.h>

struct SRTCClockContext
{
    bool isRunning;
    uint32_t nIsNotRunnigLoop,
             counter;
};

#endif