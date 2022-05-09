#include "hotelreservationinfo.h"

namespace Hotel {

HotelReservationInfo::HotelReservationInfo(Factory::ILoggerFactory* factory) : IHotelReservationInfo(factory)
{

}

QJsonDocument* HotelReservationInfo::GetJsonDocument(){
    QJsonObject* jsonObject = this->GetJsonObject();

    QJsonDocument* doc = new QJsonDocument(*jsonObject);

    delete jsonObject;

    return doc;
}
} // namespace Hotel
