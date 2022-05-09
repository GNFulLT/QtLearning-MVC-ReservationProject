#ifndef ITRANSPORTATIONRESERVATIONINFO_H
#define ITRANSPORTATIONRESERVATIONINFO_H


#include "../IReservationInfo.h"

namespace Transportation{
class ITransportationReservationInfo : public Reservation::IReservationInfo {
public:

protected:
    ITransportationReservationInfo(Factory::ILoggerFactory* factory = 0,const QString& fileName = 0) : Reservation::IReservationInfo(factory,fileName){}
    virtual QJsonObject* GetJsonObject(){
        QJsonObject* jsonObject = Reservation::IReservationInfo::GetJsonObject();
        return jsonObject;
    };

    virtual void LogMembers(){
        Reservation::IReservationInfo::LogMembers();
    }
};
}


#endif // ITRANSPORTATIONRESERVATIONINFO_H
