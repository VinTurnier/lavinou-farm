#ifndef __CRTCCLOCK_HPP
#define __CRTCCLOCK_HPP

#include <cstring>

#include "SAppContext.hpp"
#include "nrfx_clock.h"

#define NOW_MS() GET_APP_CTX()->rtcClock.counter

class CRTCClock
{
    public:
        CRTCClock();
        void init(SAppContext &ctx);
        
    
    private:
        void rtcConfig();
        SAppContext *_ctx;

};

#endif