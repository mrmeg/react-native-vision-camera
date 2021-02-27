#pragma once

#include "LoggerInterface.h"

namespace vision
{

class AndroidLogger : public LoggerInterface {
  public:
    void log(const char* str) override;
    void log(double d) override;
    void log(int i) override;
    void log(bool b) override;
    virtual ~AndroidLogger() {}
};

}
