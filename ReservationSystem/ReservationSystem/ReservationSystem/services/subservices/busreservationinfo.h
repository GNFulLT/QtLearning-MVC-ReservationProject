#ifndef BUSRESERVATIONINFO_H
#define BUSRESERVATIONINFO_H

#include "../../interfaces/transportation/bus/IBusReservationInfo.h"
namespace Bus{
class BusReservationInfo : public IBusReservationInfo
{
public:
    BusReservationInfo(Factory::ILoggerFactory* factory = 0,const QString& fileName = 0);
    QJsonDocument* GetJsonDocument() override;
    virtual void LogMembers() override;

};
}
#endif // BUSRESERVATIONINFO_H
