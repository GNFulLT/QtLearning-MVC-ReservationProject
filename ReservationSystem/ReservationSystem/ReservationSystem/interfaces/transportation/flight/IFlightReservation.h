#ifndef IFLIGHTRESERVATION_H
#define IFLIGHTRESERVATION_H

#include "../ITransportationReservation.h"

namespace Flight{

class IFlightReservation : public Transportation::ITransportationReservation{
public:
    virtual void MakeReservation() = 0;


};
}

#endif // IFLIGHTRESERVATION_H
