#include "htmllogger.h"

#include <QDir>

namespace Logger {

HtmlLogger::HtmlLogger(const QString& path)
{
    _path = std::make_unique<QString>(path);
    _htmlString.reset(new QString());
}
void HtmlLogger::Log(QString s){
    throw std::invalid_argument("Cannot create log direction folder");
}

void HtmlLogger::Log(QString key,QString value){
    (*_htmlString) += "<h2>"+key+"</h2>\n" + "<p>"+value+"</p>\n";

    //Opens file
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
    QString filePath = dirPath +*(_fileName.get()) + "log.html";
    QFile file = QFile(filePath);

    file.open(QIODevice::Truncate | QIODevice::WriteOnly);
    file.write(&(*_htmlString->toStdString().c_str()));
    file.close();
}

} // namespace Logger
