#ifndef IBUSRESERVATION_H
#define IBUSRESERVATION_H

#include <interfaces/transportation/ITransportationReservation.h>



namespace Bus{
class IBusReservation : public Transportation::ITransportationReservation{
public:
    virtual void MakeReservation() = 0;


};
}
#endif // IBUSRESERVATION_H
