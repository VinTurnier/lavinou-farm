/********************************************************************
 * CApp.cpp
 * Project: Lavinou Hive Monitoring (LHM)
 * All rights reserved to OTR Labs copyright (c) 2020 
 * -----------------------------------------------------------------
 * Description:
 * 
 * -----------------------------------------------------------------
 * Author(s) & Notes:
 *******************************************************************/
#include "CApp.hpp"
#include "boards.h"
#include "nrf_log.h"

SAppContext *gpAppCtx;

CApp::CApp(SAppContext& ctx)
{
    gpAppCtx = &ctx;
    _ctx = &ctx;
    logger.init(ctx);
    timer.init(ctx);
    bsp_board_init(BSP_INIT_LEDS);
    holdoffLedTimer.setLimit(1000);
    holdoffLedTimer.start();
    counter=0;
}

bool CApp::run()
{
    if(holdoffLedTimer.timeout())
    {
        holdoffLedTimer.start();
        bsp_board_led_invert(counter%4);
        NRF_LOG_RAW_INFO("TS: %u, type: toggleLED, LED: %u\n",NOW_MS(),counter%4);
        counter++;
    }

    return true;
}

uint32_t CApp::getTimeMS()
{
    return (_ctx->rtcClock.counter*(1000.0f/TICKS_PER_SEC)) ;
}
