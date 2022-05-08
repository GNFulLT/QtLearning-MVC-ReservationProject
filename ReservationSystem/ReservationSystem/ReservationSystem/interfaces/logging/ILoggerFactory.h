#ifndef ILOGGERFACTORY_H
#define ILOGGERFACTORY_H

#include <QString>

namespace Factory{
class ILoggerFactory{
public:
    virtual void ConstructLoggers(QString s) = 0;
    virtual void ConstructLoggers(QString key,QString value) = 0;

};
}

#endif // ILOGGERFACTORY_H
