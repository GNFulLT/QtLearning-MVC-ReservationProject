#include "fileloggerfactory.h"

namespace Factory {

FileLoggerFactory::FileLoggerFactory(Logger::FileLoggerTypes types)
{
    if((types & Logger::JsonLogger) == Logger::JsonLogger){

    }
    if((types & Logger::HtmlLogger) == Logger::HtmlLogger){

    }
    if((types & Logger::XamlLogger) == Logger::XamlLogger){

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
}

} // namespace Factory
