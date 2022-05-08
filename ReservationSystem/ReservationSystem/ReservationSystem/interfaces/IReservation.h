#ifndef IRESERVATION_H
#define IRESERVATION_H

#include <QDir>
#include "IReservationInfo.h"

namespace Reservation{
class IReservation{

public:
    virtual void MakeReservation() = 0;
protected:

};

}

#endif // IRESERVATION_H
