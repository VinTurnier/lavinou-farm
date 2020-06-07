#include <stdbool.h>
#include <stdint.h>

#include "nrf_log.h"
#include "nrf_log_ctrl.h"

#include "CApp.hpp"
#include "SAppContext.hpp"
#include "STimer.hpp"

// static void on_idle()
// {
//         // Wait for an event.
//     __WFE();
//     // Clear the internal event register.
//     __SEV();
//     __WFE();
// }

int main(void)
{
    SAppContext ctx;
    CApp app(ctx); // initialize app with app context
    
    while (app.run()) // run app
    {
        NRF_LOG_FLUSH();

    }
}

