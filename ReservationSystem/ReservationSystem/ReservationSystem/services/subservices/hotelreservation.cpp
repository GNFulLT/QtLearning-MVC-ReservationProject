#include "hotelreservation.h"

namespace Hotel {

HotelReservation::HotelReservation(IHotelReservationInfo* info)
{
    _info.reset(info);
}

void HotelReservation::MakeReservation(){
    QJsonDocument* jsonDoc = _info.get()->GetJsonDocument();

    delete jsonDoc;
}



} // namespace Hotel
