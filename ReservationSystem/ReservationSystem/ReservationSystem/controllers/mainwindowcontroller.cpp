#include "mainwindowcontroller.h"

#include <services/tlfactory.h>
namespace Controller {

MainWindowController::MainWindowController(QObject *parent)
    : QObject{parent}
{
InitializeComponents();
}

void MainWindowController::InitializeComponents(){
    _factoryFacade.reset(new Facade::FactoryFacade());
}

void MainWindowController::on_wanted_tl_create_reservation(Transportation::ITransportationReservation* transportation,Layout::ILayoutReservation* layout){
    _factoryFacade->UseFactoryAndDelete(new Factory::TLFactory(transportation,layout));
}

} // namespace Controller
