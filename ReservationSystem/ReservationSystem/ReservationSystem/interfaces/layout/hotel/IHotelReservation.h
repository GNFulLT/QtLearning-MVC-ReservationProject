#ifndef IHOTELRESERVATION_H
#define IHOTELRESERVATION_H

#include "../ILayoutReservation.h"

namespace Hotel{
class IHotelReservation: public Layout::ILayoutReservation{
public:
    virtual void MakeReservation() = 0;

protected:
};
}
#endif // IHOTELRESERVATION_H
