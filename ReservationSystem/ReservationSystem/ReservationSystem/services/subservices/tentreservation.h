#ifndef TENT_TENTRESERVATION_H
#define TENT_TENTRESERVATION_H

#include <interfaces/layout/tent/ITentReservation.h>
#include <interfaces/layout/tent/ITentReservationInfo.h>

namespace Tent {

class TentReservation : public ITentReservation
{
public:
    TentReservation(ITentReservationInfo* info) noexcept;
    void MakeReservation() override;
private:
    std::unique_ptr<ITentReservationInfo> _info;
};

} // namespace Tent

#endif // TENT_TENTRESERVATION_H
