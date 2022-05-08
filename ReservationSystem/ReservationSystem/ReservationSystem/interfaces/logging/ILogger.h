#ifndef ILOGGER_H
#define ILOGGER_H

class ILoggable;

#include <QString>
namespace Logger{
class ILogger{
public:
    virtual void Log(QString s) = 0;
    virtual void Log(QString key,QString value) = 0;

};
}

#endif // ILOGGER_H
