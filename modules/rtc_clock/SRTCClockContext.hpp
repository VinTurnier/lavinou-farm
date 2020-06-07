#ifndef _SRTCCLOCKCONTEXT_HPP
#define _SRTCCLOCKCONTEXT_HPP

#include <stdint.h>

struct SRTCClockContext
{
    bool isRunning;
    uint32_t nIsNotRunnigLoop,
             counter;
};

#endif