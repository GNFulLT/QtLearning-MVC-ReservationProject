#include "fileloggerfactory.h"
#include "../services/subservices/jsonlogger.h"
namespace Factory {

FileLoggerFactory::FileLoggerFactory(Logger::FileLoggerTypes types)
{
    if((types & Logger::JsonLoggerr) == Logger::JsonLoggerr){
     _jsonLogger.reset(new Logger::JsonLogger(QString(".\\logs\\")));
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
