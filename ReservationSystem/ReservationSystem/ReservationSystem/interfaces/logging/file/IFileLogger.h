#ifndef IFILELOGGER_H
#define IFILELOGGER_H

#include "../ILogger.h"
namespace Logger{
enum FileLoggerTypes{
    JsonLogger = 1, //01
    XamlLogger = 2, //10
    HtmlLogger = 4 //100
};

class IFileLogger : public ILogger{
public:
};
}

#endif // IFILELOGGER_H
