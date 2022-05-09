#ifndef ILAYOUTRESERVATIONINFO_H
#define ILAYOUTRESERVATIONINFO_H

#include "../IReservationInfo.h"

namespace Layout{
class ILayoutReservationInfo : public Reservation::IReservationInfo{
public:

protected:
    ILayoutReservationInfo(Factory::ILoggerFactory* factory = 0,const QString& fileName = 0) : Reservation::IReservationInfo(factory,fileName){}
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
