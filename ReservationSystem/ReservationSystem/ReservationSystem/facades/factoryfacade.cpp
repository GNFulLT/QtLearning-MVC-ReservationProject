#include "factoryfacade.h"

namespace Facade {

FactoryFacade::FactoryFacade()
{

}
void FactoryFacade::UseFactoryAndDelete(Factory::IReservationFactory* factory){
    factory->CreateReservation();
    delete factory;
}
} // namespace Facade
