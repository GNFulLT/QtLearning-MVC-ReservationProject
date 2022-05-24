#include "fileloggerfactory.h"
#include "../services/subservices/jsonlogger.h"
#include "../services/subservices/xmllogger.h"

#include <services/subservices/htmllogger.h>

namespace Factory {

FileLoggerFactory::FileLoggerFactory(Logger::FileLoggerTypes types)
{
    if(types != Logger::NoLogger){
    if((types & Logger::JsonLoggerr) == Logger::JsonLoggerr){
     _jsonLogger.reset(new Logger::JsonLogger(QString(".\\logs\\")));
    }
    if((types & Logger::HtmlLoggerr) == Logger::HtmlLoggerr){
    _htmlLogger.reset(new Logger::HtmlLogger(QString(".\\logs\\")));
    }
    if((types & Logger::XmlLoggerr) == Logger::XmlLoggerr){
    _xmlLogger.reset(new Logger::XmlLogger(QString(".\\logs\\")));
    }
    }
}

void FileLoggerFactory::SetFileName(const QString& value){
    if(_jsonLogger.get() != nullptr){
        _jsonLogger.get()->SetFileName(value);
    }
    if(_xmlLogger.get() != nullptr){
        _xmlLogger.get()->SetFileName(value);
    }
    if(_htmlLogger.get() != nullptr){
        _htmlLogger.get()->SetFileName(value);
    }
}
void FileLoggerFactory::ConstructLoggers(QString s){
    if(_jsonLogger.get() != nullptr){
        _jsonLogger.get()->Log(s);
    }
}
void FileLoggerFactory::ConstructLoggers(QString key,QString value){
    if(_jsonLogger.get() != nullptr){
        _jsonLogger.get()->Log(key,value);
    }
    if(_xmlLogger.get() != nullptr){
        _xmlLogger.get()->Log(key,value);
    }
    if(_htmlLogger.get() != nullptr){
       _htmlLogger.get()->Log(key,value);
    }
}

} // namespace Factory
