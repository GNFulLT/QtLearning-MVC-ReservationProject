#include "jsonlogger.h"
#include <QJsonDocument>
#include <QFile>
#include <QDir>
#include <QDataStream>
#include <QJsonArray>
namespace Logger{
JsonLogger::JsonLogger(const QString& path)
{
    _path = std::make_unique<QString>(path);
   _jsonArray.reset(new QJsonArray());
}
void JsonLogger::Log(QString s){
    throw std::invalid_argument("Cannot create log direction folder");
}

inline void JsonLogger::Log(QString key,QString value){
    QJsonObject object;
    object[key] = value;
   (*(_jsonArray.get())).append(object);
    QJsonDocument doc = QJsonDocument(*(_jsonArray.get()));
    QByteArray array = doc.toJson();
    QDir dir = QDir(*(_path.get()));
     bool isCreated = true;
    if(!dir.exists()){
         isCreated = dir.mkpath(*(_path.get()));
    }
    if(!isCreated){
        throw std::invalid_argument("Cannot create log direction folder");
    }
    QString dirPath = *(_path.get());
    if(dirPath[dirPath.length()-1] != '\\'){
        dirPath.append('\\');
    }
    QString filePath = dirPath +*(_fileName.get()) + "log.json";
    QFile file = QFile(filePath);

    file.open(QIODevice::Truncate | QIODevice::WriteOnly);
    file.write(array);
    file.close();
}
}
