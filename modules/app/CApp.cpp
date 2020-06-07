#include "CApp.hpp"

SAppContext *gpAppCtx;

CApp::CApp()
{

}

void CApp::init(SAppContext& ctx)
{
    gpAppCtx = &ctx;
    _ctx = &ctx;
    logger.init();
    timer.init(ctx);
}

uint32_t CApp::getTimeMS()
{
    return _ctx->rtcClock.counter;
}


bool CApp::run()
{

    return true;
}