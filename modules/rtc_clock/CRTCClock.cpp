/********************************************************************
 * CRTCClock.cpp
 * Project: Lavinou Hive Monitoring (LHM)
 * All rights reserved to OTR Labs copyright (c) 2020 
 * -----------------------------------------------------------------
 * Description:
 * 
 * -----------------------------------------------------------------
 * Author(s) & Notes:
 *******************************************************************/
#include "CRTCClock.hpp"
#include "CApp.hpp"
#include "nrf_drv_timer.h"
#include "nrf_drv_rtc.h"
#include "nrf_drv_clock.h"


/*************************** prototypes ****************************/
static void rtc_handler(nrf_drv_rtc_int_type_t type);
/*************************** Instances *****************************/
const nrf_drv_rtc_t m_rtc = NRF_DRV_RTC_INSTANCE(0);


/********************** CRTCClock class ****************************/

CRTCClock::CRTCClock()
{


}

void CRTCClock::init(SAppContext &ctx)
{
    _ctx = &ctx;
    memset(&_ctx->rtcClock,0,sizeof(_ctx->rtcClock));
    NRF_CLOCK->LFCLKSRC            = (CLOCK_LFCLKSRC_SRC_Xtal << CLOCK_LFCLKSRC_SRC_Pos);
    NRF_CLOCK->EVENTS_LFCLKSTARTED = 0;
    NRF_CLOCK->TASKS_LFCLKSTART    = 1;

    while (NRF_CLOCK->EVENTS_LFCLKSTARTED == 0)
    {
        // Do nothing.
    }
    _ctx->rtcClock.isRunning = true;
    rtcConfig();
    return;
}

void CRTCClock::rtcConfig()
{
    nrf_drv_rtc_config_t config = NRF_DRV_RTC_DEFAULT_CONFIG;
    config.prescaler = 31;
    ret_code_t err_code = nrf_drv_rtc_init(&m_rtc, &config, rtc_handler);
    APP_ERROR_CHECK(err_code);
    nrf_drv_rtc_tick_enable(&m_rtc, true);
    nrf_drv_rtc_enable(&m_rtc);
    return;
}

/*********************** Prototype Declaration *********************/

static void rtc_handler(nrf_drv_rtc_int_type_t type)
{
    GET_APP_CTX()->rtcClock.counter++;
    return;
}