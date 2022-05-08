#include "hotelreservationinfo.h"

namespace Hotel {

HotelReservationInfo::HotelReservationInfo()
{

}

QJsonDocument* HotelReservationInfo::GetJsonDocument(){
    QJsonObject* jsonObject = this->GetJsonObject();

    QJsonDocument* doc = new QJsonDocument(*jsonObject);

    delete jsonObject;

    return doc;
}
} // namespace Hotel
