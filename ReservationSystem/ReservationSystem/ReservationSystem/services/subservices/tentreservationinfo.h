#ifndef TENT_TENTRESERVATIONINFO_H
#define TENT_TENTRESERVATIONINFO_H

#include <interfaces/layout/tent/ITentReservationInfo.h>



namespace Tent {

class TentReservationInfo : public ITentReservationInfo
{
public:
    TentReservationInfo(Factory::ILoggerFactory* factory = 0,const QString& fileName = 0) noexcept;
    QJsonDocument* GetJsonDocument() override;
    virtual void LogMembers() override;
};

} // namespace Tent

#endif // TENT_TENTRESERVATIONINFO_H
