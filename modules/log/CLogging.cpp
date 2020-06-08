/********************************************************************
 * CLogging.cpp
 * Project: Lavinou Hive Monitoring (LHM)
 * All rights reserved to OTR Labs copyright (c) 2020 
 * -----------------------------------------------------------------
 * Description:
 * 
 * -----------------------------------------------------------------
 * Author(s) & Notes:
 *******************************************************************/
#include "CLogging.hpp"
#include "nrf_log.h"
#include "nrf_log_ctrl.h"
#include "nrf_log_default_backends.h"
#include "app_error.h"

#include <cstring>

CLogging::CLogging(void)
{
    
}


void CLogging::init(SAppContext &ctx)
{
    _ctx = &ctx;
    memset(&_ctx->logger,0,sizeof(_ctx->logger)); 
    ret_code_t ret_code = NRF_LOG_INIT(NULL);
    APP_ERROR_CHECK(ret_code);
    NRF_LOG_DEFAULT_BACKENDS_INIT();
    _ctx->logger.bIsInitialized = true;
    

}