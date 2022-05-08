#ifndef FLIGHTRESERVATION_H
#define FLIGHTRESERVATION_H

#include "../../interfaces/transportation/flight/IFlightReservation.h"
#include "../../interfaces/transportation/flight/IFlightReservationInfo.h"

namespace Flight{
class FlightReservation : public IFlightReservation
{
public:
    FlightReservation(IFlightReservationInfo* info);
    void MakeReservation() override;



private:
    std::unique_ptr<IFlightReservationInfo> _info;
};
}
#endif // FLIGHTRESERVATION_H
