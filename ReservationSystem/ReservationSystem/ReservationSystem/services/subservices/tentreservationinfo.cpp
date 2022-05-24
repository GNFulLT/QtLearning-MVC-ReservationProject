#include "tentreservationinfo.h"

namespace Tent {

TentReservationInfo::TentReservationInfo(Factory::ILoggerFactory* factory ,const QString& fileName) noexcept : ITentReservationInfo(factory,fileName)
{

}
QJsonDocument* TentReservationInfo::GetJsonDocument(){
    QJsonObject* jsonObject = this->GetJsonObject();

    QJsonDocument* doc = new QJsonDocument(*jsonObject);

    delete jsonObject;

    return doc;
}
void TentReservationInfo::LogMembers(){
   ITentReservationInfo::LogMembers();
}
} // namespace Tent
