#include "xmllogger.h"

#include <QDir>
#include <QFile>

#include <QtXml/QDomDocument>


namespace Logger {

XmlLogger::XmlLogger(const QString& path)
{
    _path = std::make_unique<QString>(path);
    _document.reset(new QDomDocument());
}

void XmlLogger::Log(QString s){

}
void XmlLogger::Log(QString key, QString value){
    QDomElement element = _document.get()->createElement(key);
    _document.get()->appendChild(element);
    QDomText text = _document.get()->createTextNode(value);
    element.appendChild(text);
    QString s = _document.get()->toString();
    QByteArray array = s.toUtf8();
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
    QString filePath = dirPath + *(_fileName.get())+"log.xml";
    QFile file = QFile(filePath);

    file.open(QIODevice::Truncate | QIODevice::WriteOnly);
    file.write(array);
    file.close();
}
} // namespace Logger
