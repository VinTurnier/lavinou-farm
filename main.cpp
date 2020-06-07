#include <stdbool.h>
#include <stdint.h>
#include "nrf_delay.h"
#include "boards.h"
#include "nrf_log.h"
#include "nrf_log_ctrl.h"

#include "CApp.hpp"
#include "SAppContext.hpp"


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
    CApp app;
    app.init(ctx);
    /* Configure board. */

    bsp_board_init(BSP_INIT_LEDS);
    
    /* Toggle LEDs. */
    while (true)
    {

        for (int i = 0; i < LEDS_NUMBER; i++)
        {   
            NRF_LOG_RAW_INFO("TS: %u BLINKING LIGHT: %d\n",app.getTimeMS(), i);
            bsp_board_led_invert(i);
            nrf_delay_ms(50);
            NRF_LOG_FLUSH();
        }

        // on_idle();
    }
}

