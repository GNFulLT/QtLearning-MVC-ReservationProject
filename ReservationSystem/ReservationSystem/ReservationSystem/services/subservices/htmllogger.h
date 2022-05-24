#ifndef LOGGER_HTMLLOGGER_H
#define LOGGER_HTMLLOGGER_H

#include <interfaces/logging/file/html/IHtmlLogger.h>



namespace Logger {

class HtmlLogger : public IHtmlLogger
{
public:
    HtmlLogger(const QString& path);
    void Log(QString s) override;
    void Log(QString key,QString value) override;

private:
    std::unique_ptr<QString> _path;
    std::unique_ptr<QString> _htmlString;
};

} // namespace Logger

#endif // LOGGER_HTMLLOGGER_H
