#include "CLogging.hpp"
#include "nrf_log.h"
#include "nrf_log_ctrl.h"
#include "nrf_log_default_backends.h"
#include "app_error.h"

CLogging::CLogging(void)
{
    
}


void CLogging::init()
{
    ret_code_t ret_code = NRF_LOG_INIT(NULL);
    APP_ERROR_CHECK(ret_code);
    NRF_LOG_DEFAULT_BACKENDS_INIT();
}