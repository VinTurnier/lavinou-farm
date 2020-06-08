#include <stdbool.h>
#include <stdint.h>

#include "nrf_log.h"
#include "nrf_log_ctrl.h"

/********************************************************************
 * main.cpp
 * Project: Lavinou Hive Monitoring (LHM)
 * All rights reserved to OTR Labs copyright (c) 2020 
 * -----------------------------------------------------------------
 * Description:
 * 
 * -----------------------------------------------------------------
 * Author(s) & Notes:
 *******************************************************************/

#include "CApp.hpp"
#include "SAppContext.hpp"

int main(void)
{
    SAppContext ctx;
    CApp app(ctx); // initialize app with app context
    
    while (app.run()) // run app
    {
        NRF_LOG_FLUSH();

    }
}

