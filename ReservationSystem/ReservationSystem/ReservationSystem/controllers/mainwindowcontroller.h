#ifndef CONTROLLER_MAINWINDOWCONTROLLER_H
#define CONTROLLER_MAINWINDOWCONTROLLER_H

#include <QObject>
#include "../interfaces/transportation/ITransportationReservation.h"
#include "../interfaces/layout/ILayoutReservation.h"
#include "../facades/factoryfacade.h"

namespace Controller {

class MainWindowController : public QObject
{
    Q_OBJECT
public:
    explicit MainWindowController(QObject *parent = nullptr);

public slots:
    void on_wanted_tl_create_reservation(Transportation::ITransportationReservation*,Layout::ILayoutReservation*);
signals:

  private:
    void InitializeComponents();
    std::unique_ptr<Facade::FactoryFacade> _factoryFacade;

};

} // namespace Controller

#endif // CONTROLLER_MAINWINDOWCONTROLLER_H
