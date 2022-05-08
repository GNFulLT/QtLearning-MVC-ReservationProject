#ifndef IFLIGHTRESERVATIONINFO_H
#define IFLIGHTRESERVATIONINFO_H

#include "../ITransportationReservationInfo.h"


namespace Flight{
class IFlightReservationInfo : public Transportation::ITransportationReservationInfo{
public:

protected:
    IFlightReservationInfo(Factory::ILoggerFactory* factory = 0) : Transportation::ITransportationReservationInfo(factory){}
    virtual QJsonObject* GetJsonObject(){
        QJsonObject* jsonObject = Transportation::ITransportationReservationInfo::GetJsonObject();
        return jsonObject;
    };
    virtual void LogMembers(){
        Transportation::ITransportationReservationInfo::LogMembers();
    }
};
}

#endif // IFLIGHTRESERVATIONINFO_H
