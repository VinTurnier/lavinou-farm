/********************************************************************
 * CRTCClock.hpp
 * Project: Lavinou Hive Monitoring (LHM)
 * All rights reserved to OTR Labs copyright (c) 2020 
 * -----------------------------------------------------------------
 * Description:
 * 
 * -----------------------------------------------------------------
 * Author(s) & Notes:
 *******************************************************************/
#ifndef __CRTCCLOCK_HPP
#define __CRTCCLOCK_HPP

#include <cstring>
#include <string>

#include "SAppContext.hpp"
#include "nrfx_clock.h"

#define NOW_MS() GET_APP_CTX()->rtcClock.counter
#define TICKS_PER_SEC 1024
#define RTC_FREQ 32768

enum ENowType
{
    ENOW_TYPE_MS        = 0x0001,
    ENOW_TYPE_SEC       = 0x0002,
    ENOW_TYPE_US        = 0x0004,
};

class CRTCClock
{
    public:
        CRTCClock();
        void init(SAppContext &ctx);
        uint32_t now(ENowType type);
        
    
    private:
        void rtcConfig();
        SAppContext *_ctx;

};



#endif