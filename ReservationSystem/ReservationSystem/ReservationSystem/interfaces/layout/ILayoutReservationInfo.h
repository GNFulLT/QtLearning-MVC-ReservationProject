#ifndef ILAYOUTRESERVATIONINFO_H
#define ILAYOUTRESERVATIONINFO_H

#include "../IReservationInfo.h"

namespace Layout{
class ILayoutReservationInfo : public Reservation::IReservationInfo{
public:

protected:
    ILayoutReservationInfo(Factory::ILoggerFactory* factory) : Reservation::IReservationInfo(factory){}
    virtual QJsonObject* GetJsonObject(){
        QJsonObject* jsonObject = Reservation::IReservationInfo::GetJsonObject();
        return jsonObject;
    };
    virtual void LogMembers(){
        Reservation::IReservationInfo::LogMembers();
    }
};
}
#endif // ILAYOUTRESERVATIONINFO_H
