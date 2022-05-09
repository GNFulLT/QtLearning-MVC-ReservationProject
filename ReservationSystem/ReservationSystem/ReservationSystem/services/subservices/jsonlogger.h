#ifndef JSONLOGGER_H
#define JSONLOGGER_H

#include "../../interfaces/logging/file/json/IJsonLogger.h"

#include <bits/unique_ptr.h>
#include <QJsonObject>

namespace Logger{
class JsonLogger : public IJsonLogger
{
public:
    JsonLogger(const QString& path);
    void Log(QString s) override;
    void Log(QString key,QString value) override;

private:
    std::unique_ptr<QString> _path;
    std::unique_ptr<QJsonArray> _jsonArray;


};
}
#endif // JSONLOGGER_H
