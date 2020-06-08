/********************************************************************
 * STimer.cpp
 * Project: Lavinou Hive Monitoring (LHM)
 * All rights reserved to OTR Labs copyright (c) 2020 
 * -----------------------------------------------------------------
 * Description:
 * 
 * -----------------------------------------------------------------
 * Author(s) & Notes:
 *******************************************************************/
#include "STimer.hpp"
#include "CRTCClock.hpp"
#include "CApp.hpp"
#include "nrf_log.h"

void STimer::setLimit(uint32_t limit)
{
    nLimit = limit;
    return;
}

bool STimer::reset()
{
    bIsTimeout = false;
    bIsRunning = false;
    nStartMS = 0;
    return true;

}

bool STimer::start()
{
    reset();
    bIsRunning = true;
    nStartMS = NOW_MS();
    return true;

}

bool STimer::timeout()
{
    if(!bIsRunning)
        return(false);
    
    
    if(nLimit < (NOW_MS() - nStartMS))
     {
         bIsTimeout = true;
         bIsRunning = false;
         return(true);
     }
    
    return(false);
}