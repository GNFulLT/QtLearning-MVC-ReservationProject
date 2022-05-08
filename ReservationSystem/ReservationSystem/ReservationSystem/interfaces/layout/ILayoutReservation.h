#ifndef ILAYOUTRESERVATION_H
#define ILAYOUTRESERVATION_H

#include "../IReservation.h"

namespace Layout{
class ILayoutReservation : public Reservation::IReservation{
public:
    virtual void MakeReservation() = 0;

protected:
};
}
#endif // ILAYOUTRESERVATION_H
