#include "tlfactory.h"
namespace Factory{
TLFactory::TLFactory(Transportation::ITransportationReservation* transportation,Layout::ILayoutReservation* layout)
{
    _transportation.reset(transportation);
    _layout.reset(layout);
}

void TLFactory::CreateReservation(){
  _transportation.get()->MakeReservation();
  _layout.get()->MakeReservation();

}

}
