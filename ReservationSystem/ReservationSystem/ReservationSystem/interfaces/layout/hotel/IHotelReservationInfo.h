#ifndef IHOTELRESERVATIONINFO_H
#define IHOTELRESERVATIONINFO_H

#include "../ILayoutReservationInfo.h"
namespace Hotel{
class IHotelReservationInfo : public Layout::ILayoutReservationInfo{
public:

protected:
    IHotelReservationInfo(Factory::ILoggerFactory* factory) : Layout::ILayoutReservationInfo(factory){}
    IHotelReservationInfo()  = default;
    virtual QJsonObject* GetJsonObject(){
        QJsonObject* jsonObject = Layout::ILayoutReservationInfo::GetJsonObject();
        return jsonObject;
    };
    virtual void LogMembers(){
        Layout::ILayoutReservationInfo::LogMembers();
    }
};
}

#endif // IHOTELRESERVATIONINFO_H
