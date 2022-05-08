#include "flightreservation.h"


namespace Flight{
FlightReservation::FlightReservation(IFlightReservationInfo* info)
{
    _info.reset(info);

}

void FlightReservation::MakeReservation(){
    QJsonDocument* jsonDoc = _info.get()->GetJsonDocument();
    delete jsonDoc;
}



}
