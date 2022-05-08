#ifndef HOTEL_HOTELRESERVATION_H
#define HOTEL_HOTELRESERVATION_H

#include "../../interfaces/layout/hotel/IHotelReservation.h"
#include "../../interfaces/layout/hotel/IHotelReservationInfo.h"

namespace Hotel {

class HotelReservation : public IHotelReservation
{
public:
    HotelReservation(IHotelReservationInfo* info);
    void MakeReservation() override;
private:
    std::unique_ptr<IHotelReservationInfo> _info;

};

} // namespace Hotel

#endif // HOTEL_HOTELRESERVATION_H
