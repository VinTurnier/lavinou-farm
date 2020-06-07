#ifndef __SAPP_HPP
#define __SAPP_HPP

#include "CLogging.hpp"
#include "CRTCClock.hpp"
#include "SAppContext.hpp"

extern SAppContext *gpAppCtx;

#define GET_APP_CTX() gpAppCtx

struct CApp
{
    public:
        CApp();
        void init(SAppContext& ctx);
        bool run();
        uint32_t getTimeMS();

    private:
        CLogging logger;
        CRTCClock timer;
        SAppContext *_ctx;
    
};


#endif