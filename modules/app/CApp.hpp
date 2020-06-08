/********************************************************************
 * CApp.hpp
 * Project: Lavinou Hive Monitoring (LHM)
 * All rights reserved to OTR Labs copyright (c) 2020 
 * -----------------------------------------------------------------
 * Description:
 * 
 * -----------------------------------------------------------------
 * Author(s) & Notes:
 *******************************************************************/
#ifndef __SAPP_HPP
#define __SAPP_HPP

#include "CLogging.hpp"
#include "CRTCClock.hpp"
#include "SAppContext.hpp"
#include "STimer.hpp"

extern SAppContext *gpAppCtx;

#define GET_APP_CTX() gpAppCtx

class CApp
{
    public:
        CApp(SAppContext& ctx);
        bool run();
        uint32_t getTimeMS();
        STimer holdoffLedTimer;
    private:
        CLogging logger;
        CRTCClock timer;
        SAppContext *_ctx;
        uint32_t counter;
    
};


#endif