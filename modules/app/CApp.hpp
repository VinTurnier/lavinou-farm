/********************************************************************
 * CApp.hpp
 * Project: Lavinou Hive Monitoring (LHM)
 * All rights reserved to OTR Labs copyright (c) 2020 
 * -----------------------------------------------------------------
 * Description:
 *  The App class header file contains all declaration of CApp.cpp
 * -----------------------------------------------------------------
 * Author(s) & Notes:
 * Vincent Turnier
 * -NOTES: original
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