#include "hotelreservationinfo.h"

namespace Hotel {

HotelReservationInfo::HotelReservationInfo(Factory::ILoggerFactory* factory,const QString& fileName) : IHotelReservationInfo(factory,fileName)
{

}

QJsonDocument* HotelReservationInfo::GetJsonDocument(){
    QJsonObject* jsonObject = this->GetJsonObject();

    QJsonDocument* doc = new QJsonDocument(*jsonObject);

    delete jsonObject;

    return doc;
}
void HotelReservationInfo::LogMembers(){
   IHotelReservationInfo::LogMembers();
}

} // namespace Hotel
