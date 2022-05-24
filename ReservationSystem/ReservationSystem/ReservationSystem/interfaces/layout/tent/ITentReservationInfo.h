#ifndef ITENTRESERVATIONINFO_H
#define ITENTRESERVATIONINFO_H

#include <interfaces/layout/ILayoutReservationInfo.h>



namespace Tent{
class ITentReservationInfo : public Layout::ILayoutReservationInfo{
public:
    virtual void LogMembers(){
        Layout::ILayoutReservationInfo::LogMembers();
    }
protected:
    ITentReservationInfo(Factory::ILoggerFactory* factory = 0,const QString& fileName = 0) : Layout::ILayoutReservationInfo(factory,fileName){}

    virtual QJsonObject* GetJsonObject(){
        QJsonObject* jsonObject = Layout::ILayoutReservationInfo::GetJsonObject();
        return jsonObject;
    };

};

}


#endif // ITENTRESERVATIONINFO_H
