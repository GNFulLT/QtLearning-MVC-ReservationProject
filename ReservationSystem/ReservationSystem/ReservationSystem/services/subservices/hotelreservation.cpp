#include "hotelreservation.h"

namespace Hotel {

HotelReservation::HotelReservation(IHotelReservationInfo* info)
{
    _info.reset(info);
}

void HotelReservation::MakeReservation(){
    QJsonDocument* jsonDoc = _info.get()->GetJsonDocument();
    _info.get()->LogMembers();
    delete jsonDoc;
}



} // namespace Hotel
