#ifndef ITRANSPORTATIONRESERVATION_H
#define ITRANSPORTATIONRESERVATION_H

#include "../IReservation.h"
#include "ITransportationReservationInfo.h"

namespace Transportation{
class ITransportationReservation :  Reservation::IReservation{
public:
    virtual void MakeReservation() = 0;

protected:


};
}


#endif // ITRANSPORTATIONRESERVATION_H
