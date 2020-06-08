/********************************************************************
 * CLogging.hpp
 * Project: Lavinou Hive Monitoring (LHM)
 * All rights reserved to OTR Labs copyright (c) 2020 
 * -----------------------------------------------------------------
 * Description:
 * 
 * -----------------------------------------------------------------
 * Author(s) & Notes:
 *******************************************************************/
#ifndef __LOGGING_HPP
#define __LOGGING_HPP

#include "SAppContext.hpp"

class CLogging
{
    public:
        CLogging(void);
        void init(SAppContext &ctx);
    private:
        SAppContext *_ctx;

};

#endif