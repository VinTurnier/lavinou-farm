#ifndef _STIMER_HPP
#define _STIMER_HPP

#include <stdint.h>

struct STimer
{
    bool start();
    bool reset();
    bool timeout();
    bool running();
    void setLimit(uint32_t limit);

    bool bIsTimeout;
    bool bIsRunning;
    uint32_t nLimit,
             nStartMS;
};

#endif