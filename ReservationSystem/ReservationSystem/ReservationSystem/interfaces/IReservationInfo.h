#ifndef IRESERVATIONINFO_H
#define IRESERVATIONINFO_H

#include <QString>
#include <QDate>
#include <QJsonObject>
#include <QJsonDocument>
 #include "logging/ILoggable.h"
namespace Reservation{

class IReservationInfo: public Logger::ILoggable{
public:

    virtual QJsonDocument* GetJsonDocument() = 0;

    QString* GetName(){return _name.get();}
    QString* GetSurname(){return _surname.get();}
    QString* GetTC(){return _tc.get();}
    QDate* GetLeavingDate(){return _leavingDate.get();}
    QDate* GetComingDate(){return _comingDate.get();}
    QDate* GetReceivingDate(){return _receivingDate.get();}

    void SetName(QString* s){_name.reset(s);}
    void SetSurname(QString* s) {_surname.reset(s);}
    void SetTC(QString* s){_tc.reset(s);}
    void SetLeavingDate(QDate* d){_leavingDate.reset(d);}
    void SetComingDate(QDate* d){ _comingDate.reset(d);}
    void SetReceivingDate(QDate* d){_receivingDate.reset(d);}
protected:
    void Log(QString s) override {_logger.get()->ConstructLoggers(s);};
    void Log(QString key,QString value) override { _logger.get()->ConstructLoggers(key,value);};
    IReservationInfo(Factory::ILoggerFactory* factory = 0,const QString& fileName = 0) : Logger::ILoggable(factory,fileName){}
    virtual QJsonObject* GetJsonObject(){
        QJsonObject* jsonObject = new QJsonObject;
        (*jsonObject)["Name"] = *(_name.get());
        (*jsonObject)["Surname"] = *(_surname.get());
        (*jsonObject)["TC"] = *(_tc.get());
        (*jsonObject)["LeavingDate"] = _leavingDate.get()->toString("dd-MM-yyyy");
        (*jsonObject)["ComingDate"] = _comingDate.get()->toString("dd-MM-yyyy");
        (*jsonObject)["ReceivingDate"] = _receivingDate.get()->toString("dd-MM-yyyy");

    return jsonObject;
    }

    virtual void LogMembers(){
        SetFileName();
        Log("Name",*(_name.get()));
        Log("Surname",*(_surname.get()));
        Log("TC",*(_tc.get()));
        Log("LeavingDate", _leavingDate.get()->toString("dd-MM-yyyy"));
        Log("ComingDate",_comingDate.get()->toString("dd-MM-yyyy"));
        Log("ReceivingDate",_receivingDate.get()->toString("dd-MM-yyyy"));

    }

    std::unique_ptr<QString> _name;
    std::unique_ptr<QString> _surname;
    std::unique_ptr<QString> _tc;
    std::unique_ptr<QDate> _leavingDate;
    std::unique_ptr<QDate> _comingDate;
    std::unique_ptr<QDate> _receivingDate;
};
}
#endif // IRESERVATIONINFO_H
