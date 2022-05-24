#ifndef BUS_BUSRESERVATION_H
#define BUS_BUSRESERVATION_H

#include <interfaces/transportation/bus/IBusReservation.h>
#include <interfaces/transportation/bus/IBusReservationInfo.h>


namespace Bus {

class BusReservation : public IBusReservation
{
public:
    BusReservation(IBusReservationInfo* info) noexcept;
    void MakeReservation() override;


private:
    std::unique_ptr<IBusReservationInfo> _info;

};


} // namespace Bus

#endif // BUS_BUSRESERVATION_H
