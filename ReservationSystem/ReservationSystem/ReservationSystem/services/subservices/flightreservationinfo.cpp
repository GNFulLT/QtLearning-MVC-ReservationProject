#include "flightreservationinfo.h"

namespace Flight {

FlightReservationInfo::FlightReservationInfo(Factory::ILoggerFactory* factory) : IFlightReservationInfo(factory)
{

}

QJsonDocument* FlightReservationInfo::GetJsonDocument(){
    QJsonObject* jsonObject = this->GetJsonObject();


    QJsonDocument* doc = new QJsonDocument(*jsonObject);

    delete jsonObject;

    return doc;
}



} // namespace Flight
