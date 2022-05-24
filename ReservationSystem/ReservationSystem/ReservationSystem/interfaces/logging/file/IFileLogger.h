#ifndef IFILELOGGER_H
#define IFILELOGGER_H

#include "../ILogger.h"

#include <bits/unique_ptr.h>
namespace Logger{

template<class T> inline T operator~ (T a) { return (T)~(int)a; }
template<class T> inline T operator| (T a, T b) { return (T)((int)a | (int)b); }
template<class T> inline T operator& (T a, T b) { return (T)((int)a & (int)b); }
template<class T> inline T operator^ (T a, T b) { return (T)((int)a ^ (int)b); }
template<class T> inline T& operator|= (T& a, T b) { return (T&)((int&)a |= (int)b); }
template<class T> inline T& operator&= (T& a, T b) { return (T&)((int&)a &= (int)b); }
template<class T> inline T& operator^= (T& a, T b) { return (T&)((int&)a ^= (int)b); }
enum FileLoggerTypes{
     NoLogger = 0,//00
    JsonLoggerr = 1, //01
    XmlLoggerr = 2, //10
    HtmlLoggerr = 4 //100
};


class IFileLogger : public ILogger{
public:
    virtual void SetFileName(const QString& fileName) {
        _fileName.reset();
        _fileName = std::make_unique<QString>(fileName);
    }

protected:
    IFileLogger(){_fileName = std::make_unique<QString>(QString("fileName"));}
    std::unique_ptr<QString> _fileName;

};
}

#endif // IFILELOGGER_H
