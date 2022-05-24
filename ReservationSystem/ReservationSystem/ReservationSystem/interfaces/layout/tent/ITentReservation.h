#ifndef ITENTRESERVATION_H
#define ITENTRESERVATION_H

#include <interfaces/layout/ILayoutReservation.h>


namespace Tent{
class ITentReservation: public Layout::ILayoutReservation{
public:
    virtual void MakeReservation() = 0;

protected:
};
}

#endif // ITENTRESERVATION_H
