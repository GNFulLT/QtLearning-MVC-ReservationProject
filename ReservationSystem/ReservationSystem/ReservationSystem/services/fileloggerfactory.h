#ifndef FACTORY_FILELOGGERFACTORY_H
#define FACTORY_FILELOGGERFACTORY_H

#include "../interfaces/logging/file/IFileLoggerFactory.h"
#include "../interfaces/logging/file/IFileLogger.h"
#include "../interfaces/logging/file/json/IJsonLogger.h"
#include "../interfaces/logging/file/xml/IXmlLogger.h"

#include <bits/unique_ptr.h>

namespace Factory {

class FileLoggerFactory : public IFileLoggerFactory
{
public:
    FileLoggerFactory(Logger::FileLoggerTypes types);
     void ConstructLoggers(QString s) override;
     void ConstructLoggers(QString key,QString value) override;
     void SetFileName(const QString& value) override;

private:
    std::unique_ptr<Logger::IJsonLogger> _jsonLogger;
    std::unique_ptr<Logger::IXmlLogger> _xmlLogger;
};

} // namespace Factory

#endif // FACTORY_FILELOGGERFACTORY_H
