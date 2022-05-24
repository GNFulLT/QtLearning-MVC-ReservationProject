#ifndef IBUSRESERVATIONINFO_H
#define IBUSRESERVATIONINFO_H

#include <interfaces/transportation/ITransportationReservationInfo.h>



namespace Bus{
class IBusReservationInfo: public Transportation::ITransportationReservationInfo{
public:
    virtual void LogMembers(){
        Transportation::ITransportationReservationInfo::LogMembers();
    }
protected:
    IBusReservationInfo(Factory::ILoggerFactory* factory = 0,const QString& fileName = 0) : Transportation::ITransportationReservationInfo(factory,fileName){}
    virtual QJsonObject* GetJsonObject(){
        QJsonObject* jsonObject = Transportation::ITransportationReservationInfo::GetJsonObject();
        return jsonObject;
    };

};
}

#endif // IBUSRESERVATIONINFO_H
