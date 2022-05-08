#ifndef IRESERVATIONFACTORY_H
#define IRESERVATIONFACTORY_H

namespace Factory{
class IReservationFactory{
public:
    virtual void CreateReservation() = 0;
    virtual ~IReservationFactory() = default;
};
}


#endif // IRESERVATIONFACTORY_H
