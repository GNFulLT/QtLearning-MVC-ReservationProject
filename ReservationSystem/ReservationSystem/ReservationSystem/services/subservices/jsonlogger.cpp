#include "jsonlogger.h"
namespace Logger{
JsonLogger::JsonLogger(QString path)
{
    _path = std::make_unique<QString>(path);
}
}
