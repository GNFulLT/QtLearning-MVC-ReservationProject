#include "tentreservation.h"

namespace Tent {

TentReservation::TentReservation(ITentReservationInfo* info) noexcept
{
    _info.reset(info);
}
void TentReservation::MakeReservation(){
    QJsonDocument* jsonDoc = _info.get()->GetJsonDocument();
    _info.get()->LogMembers();
    delete jsonDoc;
}
} // namespace Tent
