#ifndef FLIGHT_FLIGHTRESERVATIONINFO_H
#define FLIGHT_FLIGHTRESERVATIONINFO_H

#include "../../interfaces/transportation/flight/IFlightReservationInfo.h"
#include "../../interfaces/logging/ILoggable.h"

#include <interfaces/logging/ILoggerFactory.h>

namespace Flight {

class FlightReservationInfo : public IFlightReservationInfo
{
public:
    FlightReservationInfo(Factory::ILoggerFactory* factory);
    QJsonDocument* GetJsonDocument() override;


};

} // namespace Flight

#endif // FLIGHT_FLIGHTRESERVATIONINFO_H
