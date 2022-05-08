#ifndef TLFACTORY_H
#define TLFACTORY_H

#include "../interfaces/IReservationFactory.h"
#include "../interfaces/transportation/ITransportationReservation.h"
#include "../interfaces/layout/ILayoutReservation.h"
namespace Factory{
class TLFactory : public IReservationFactory
{
public:
    TLFactory(Transportation::ITransportationReservation* transportation,Layout::ILayoutReservation* layout);
    void CreateReservation() override;
private:
    std::unique_ptr<Transportation::ITransportationReservation> _transportation;
    std::unique_ptr<Layout::ILayoutReservation> _layout;

};
}
#endif // TLFACTORY_H
