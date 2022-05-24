QT       += core gui \
            xml

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++17

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    controllers/mainwindowcontroller.cpp \
    facades/factoryfacade.cpp \
    main.cpp \
    mainwindow.cpp \
    services/fileloggerfactory.cpp \
    services/subservices/busreservation.cpp \
    services/subservices/busreservationinfo.cpp \
    services/subservices/flightreservation.cpp \
    services/subservices/flightreservationinfo.cpp \
    services/subservices/hotelreservation.cpp \
    services/subservices/hotelreservationinfo.cpp \
    services/subservices/htmllogger.cpp \
    services/subservices/jsonlogger.cpp \
    services/subservices/tentreservation.cpp \
    services/subservices/tentreservationinfo.cpp \
    services/subservices/xmllogger.cpp \
    services/tlfactory.cpp

HEADERS += \
    controllers/mainwindowcontroller.h \
    facades/factoryfacade.h \
    interfaces/IReservation.h \
    interfaces/IReservationFactory.h \
    interfaces/IReservationInfo.h \
    interfaces/layout/ILayoutReservation.h \
    interfaces/layout/ILayoutReservationInfo.h \
    interfaces/layout/hotel/IHotelReservation.h \
    interfaces/layout/hotel/IHotelReservationInfo.h \
    interfaces/layout/tent/ITentReservation.h \
    interfaces/layout/tent/ITentReservationInfo.h \
    interfaces/logging/ILoggable.h \
    interfaces/logging/ILogger.h \
    interfaces/logging/ILoggerFactory.h \
    interfaces/logging/file/IFileLogger.h \
    interfaces/logging/file/IFileLoggerFactory.h \
    interfaces/logging/file/html/IHtmlLogger.h \
    interfaces/logging/file/json/IJsonLogger.h \
    interfaces/logging/file/xml/IXmlLogger.h \
    interfaces/transportation/ITransportationReservation.h \
    interfaces/transportation/ITransportationReservationInfo.h \
    interfaces/transportation/bus/IBusReservation.h \
    interfaces/transportation/bus/IBusReservationInfo.h \
    interfaces/transportation/flight/IFlightReservation.h \
    interfaces/transportation/flight/IFlightReservationInfo.h \
    mainwindow.h \
    services/fileloggerfactory.h \
    services/subservices/busreservation.h \
    services/subservices/busreservationinfo.h \
    services/subservices/flightreservation.h \
    services/subservices/flightreservationinfo.h \
    services/subservices/hotelreservation.h \
    services/subservices/hotelreservationinfo.h \
    services/subservices/htmllogger.h \
    services/subservices/jsonlogger.h \
    services/subservices/tentreservation.h \
    services/subservices/tentreservationinfo.h \
    services/subservices/xmllogger.h \
    services/tlfactory.h

FORMS += \
    mainwindow.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target
