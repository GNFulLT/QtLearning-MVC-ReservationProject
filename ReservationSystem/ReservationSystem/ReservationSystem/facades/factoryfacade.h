#ifndef FACADE_FACTORYFACADE_H
#define FACADE_FACTORYFACADE_H

#include "../interfaces/IReservationFactory.h"

#include <bits/unique_ptr.h>

namespace Facade {

class FactoryFacade
{
public:
    FactoryFacade();
    void UseFactoryAndDelete(Factory::IReservationFactory* factory);
private:
};

} // namespace Facade

#endif // FACADE_FACTORYFACADE_H
