#ifndef IFILELOGGERFACTORY_H
#define IFILELOGGERFACTORY_H

#include "../ILoggerFactory.h"
#include "../ILoggable.h"
#include <QString>
namespace Factory{

class IFileLoggerFactory : public ILoggerFactory{
public:
    virtual void ConstructLoggers(QString s) = 0;
    virtual void ConstructLoggers(QString key,QString value) = 0;
    virtual void SetFileName(const QString& value) = 0;

};
}


#endif // IFILELOGGERFACTORY_H
