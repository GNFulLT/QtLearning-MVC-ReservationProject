#ifndef LOGGER_FILELOGGER_H
#define LOGGER_FILELOGGER_H

#include "../../interfaces/logging/file/IFileLogger.h"

namespace Logger {

class FileLogger : public IFileLogger
{
public:
    FileLogger();
    void Log(QString s) override;
};

} // namespace Logger

#endif // LOGGER_FILELOGGER_H
