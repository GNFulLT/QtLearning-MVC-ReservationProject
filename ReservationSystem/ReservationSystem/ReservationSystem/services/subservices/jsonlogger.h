#ifndef JSONLOGGER_H
#define JSONLOGGER_H

#include "../../interfaces/logging/file/json/IJsonLogger.h"

#include <bits/unique_ptr.h>
namespace Logger{
class JsonLogger : public IJsonLogger
{
public:
    JsonLogger(QString path);
private:
    std::unique_ptr<QString> _path;
};
}
#endif // JSONLOGGER_H
