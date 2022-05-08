#ifndef IFILELOGGERFACTORY_H
#define IFILELOGGERFACTORY_H

#include "../ILoggerFactory.h"
#include "../ILoggable.h"
#include <QString>
namespace Factory{

class IFileLoggerFactory : ILoggerFactory{
public:
    virtual void ConstructLoggers(QString s) = 0;
    virtual void ConstructLoggers(QString key,QString value) = 0;
};
}


#endif // IFILELOGGERFACTORY_H
