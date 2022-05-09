#ifndef HOTEL_HOTELRESERVATIONINFO_H
#define HOTEL_HOTELRESERVATIONINFO_H

#include "../../interfaces/layout/hotel/IHotelReservationInfo.h"

namespace Hotel {

class HotelReservationInfo : public IHotelReservationInfo
{
public:
    HotelReservationInfo(Factory::ILoggerFactory* factory = 0,const QString& fileName = 0);
    QJsonDocument* GetJsonDocument() override;
    virtual void LogMembers() override;

};

} // namespace Hotel

#endif // HOTEL_HOTELRESERVATIONINFO_H
