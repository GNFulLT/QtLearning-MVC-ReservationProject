#ifndef IFLIGHTRESERVATIONINFO_H
#define IFLIGHTRESERVATIONINFO_H

#include "../ITransportationReservationInfo.h"


namespace Flight{
class IFlightReservationInfo : public Transportation::ITransportationReservationInfo{
public:
    virtual void LogMembers(){
        Transportation::ITransportationReservationInfo::LogMembers();
    }
protected:
    IFlightReservationInfo(Factory::ILoggerFactory* factory = 0,const QString& fileName = 0) : Transportation::ITransportationReservationInfo(factory,fileName){}
    virtual QJsonObject* GetJsonObject(){
        QJsonObject* jsonObject = Transportation::ITransportationReservationInfo::GetJsonObject();
        return jsonObject;
    };

};
}

#endif // IFLIGHTRESERVATIONINFO_H
