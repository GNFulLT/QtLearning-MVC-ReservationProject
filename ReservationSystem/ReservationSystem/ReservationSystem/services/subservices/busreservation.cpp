#include "busreservation.h"

namespace Bus {

BusReservation::BusReservation(IBusReservationInfo* info) noexcept
{
 _info.reset(info);
}
void BusReservation::MakeReservation(){
    QJsonDocument* jsonDoc = _info.get()->GetJsonDocument();
    _info.get()->LogMembers();
    delete jsonDoc;
}

} // namespace Bus
