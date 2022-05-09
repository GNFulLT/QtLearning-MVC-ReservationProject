#ifndef ILOGGABLE_H
#define ILOGGABLE_H

#include <QString>

#include <bits/unique_ptr.h>

#include "ILoggerFactory.h"

namespace Logger{
class ILoggable{
public:
    virtual void Log(QString s) = 0;
    virtual void Log(QString key,QString value) = 0;
protected:
    ILoggable(Factory::ILoggerFactory* logger = 0,const QString& fileName = 0){ _logger.reset(logger);_fileName = std::make_unique<QString>(fileName);}
    void SetFileName(){
        _logger.get()->SetFileName(*(_fileName.get()));
    }
    std::unique_ptr<Factory::ILoggerFactory> _logger;
    std::unique_ptr<QString> _fileName;
};
}

#endif // ILOGGABLE_H
