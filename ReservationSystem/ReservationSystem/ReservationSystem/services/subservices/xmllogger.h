#ifndef LOGGER_XMLLOGGER_H
#define LOGGER_XMLLOGGER_H

#include "../../interfaces/logging/file/xml/IXmlLogger.h"

#include <bits/unique_ptr.h>
#include <QtXml/QDomDocument>

namespace Logger {

class XmlLogger : public IXmlLogger
{
public:
    XmlLogger(const QString& path);
    void Log(QString s) override;
    void Log(QString key,QString value) override;

private:
    std::unique_ptr<QString> _path;
    std::unique_ptr<QDomDocument> _document;

};

} // namespace Logger

#endif // LOGGER_XMLLOGGER_H
