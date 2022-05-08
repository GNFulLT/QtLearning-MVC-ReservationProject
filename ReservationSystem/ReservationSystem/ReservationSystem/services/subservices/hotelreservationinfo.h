#ifndef HOTEL_HOTELRESERVATIONINFO_H
#define HOTEL_HOTELRESERVATIONINFO_H

#include "../../interfaces/layout/hotel/IHotelReservationInfo.h"

namespace Hotel {

class HotelReservationInfo : public IHotelReservationInfo
{
public:
    HotelReservationInfo();
    QJsonDocument* GetJsonDocument() override;

};

} // namespace Hotel

#endif // HOTEL_HOTELRESERVATIONINFO_H