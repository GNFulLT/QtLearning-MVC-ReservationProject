#ifndef ILOGGABLE_H
#define ILOGGABLE_H

#include <QString>

#include <bits/unique_ptr.h>

#include "ILoggerFactory.h"

namespace Logger{
class ILoggable{
public:
    virtual void Log(QString s) = 0;
    virtual void Log(QString key,QString vaue) = 0;
protected:
    ILoggable(Factory::ILoggerFactory* logger = 0){ _logger.reset(logger);}
    std::unique_ptr<Factory::ILoggerFactory> _logger;
};
}

#endif // ILOGGABLE_H
