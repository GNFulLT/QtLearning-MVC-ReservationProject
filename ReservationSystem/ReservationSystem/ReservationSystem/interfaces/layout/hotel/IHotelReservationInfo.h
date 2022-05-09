#ifndef IHOTELRESERVATIONINFO_H
#define IHOTELRESERVATIONINFO_H

#include "../ILayoutReservationInfo.h"
namespace Hotel{
class IHotelReservationInfo : public Layout::ILayoutReservationInfo{
public:
    virtual void LogMembers(){
        Layout::ILayoutReservationInfo::LogMembers();
    }
protected:
    IHotelReservationInfo(Factory::ILoggerFactory* factory = 0,const QString& fileName = 0) : Layout::ILayoutReservationInfo(factory,fileName){}
    IHotelReservationInfo()  = default;
    virtual QJsonObject* GetJsonObject(){
        QJsonObject* jsonObject = Layout::ILayoutReservationInfo::GetJsonObject();
        return jsonObject;
    };

};
}

#endif // IHOTELRESERVATIONINFO_H
