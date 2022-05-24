#include "../../interfaces/transportation/bus/IBusReservationInfo.h"
#include "busreservationinfo.h"

namespace Bus{
BusReservationInfo::BusReservationInfo(Factory::ILoggerFactory* factory,const QString& fileName) : IBusReservationInfo(factory,fileName)
{

}
QJsonDocument* BusReservationInfo::GetJsonDocument(){
    QJsonObject* jsonObject = this->GetJsonObject();


    QJsonDocument* doc = new QJsonDocument(*jsonObject);

    delete jsonObject;

    return doc;
}
void BusReservationInfo::LogMembers(){
   IBusReservationInfo::LogMembers();
}

}
