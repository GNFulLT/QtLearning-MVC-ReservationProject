#include "mainwindow.h"
#include "ui_mainwindow.h"

#include "services/subservices/flightreservation.h"
#include "services/subservices/flightreservationinfo.h"

#include "services/subservices/hotelreservation.h"
#include "services/subservices/hotelreservationinfo.h"

#include "services/fileloggerfactory.h"

#include <services/subservices/busreservation.h>
#include <services/subservices/busreservationinfo.h>
#include <services/subservices/tentreservation.h>
#include <services/subservices/tentreservationinfo.h>

const QString hotelReservationString ="HotelReservation";
const QString tentReservationString ="TentReservation";
const QString flightReservationString ="FlightReservation";
const QString busReservationString ="BusReservation";



MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    InitializeComponents();

    ConnectComponents();


   ui->layoutReservationsComboBox->addItem(hotelReservationString);
   ui->layoutReservationsComboBox->addItem(tentReservationString);

   ui->transportationReservationsComboBox->addItem(flightReservationString);
   ui->transportationReservationsComboBox->addItem(busReservationString);

   for(int i = 1;i<101;i++)
   {
       ui->koltukNoComboBox->addItem(QString::number(i));
   }

   ui->donusTarihiText->setDate(QDate::currentDate());
   ui->gidisTarihiText->setDate(QDate::currentDate());


}

void MainWindow::InitializeComponents(){
    _controller = new Controller::MainWindowController(this);
}
void MainWindow::ConnectComponents(){
    connect(this,SIGNAL(wants_tl_create_reservation(Transportation::ITransportationReservation*,Layout::ILayoutReservation*)),
            _controller,SLOT(on_wanted_tl_create_reservation(Transportation::ITransportationReservation*,Layout::ILayoutReservation*)));
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_pushButton_clicked()
{
    Logger::FileLoggerTypes fileLogger = Logger::NoLogger;

    if(ui->jsonCheckBox->isChecked())
        fileLogger |= Logger::JsonLoggerr;
    if(ui->xmlCheckBox->isChecked())
        fileLogger |= Logger::XmlLoggerr;
    if(ui->htmlCheckBox->isChecked())
        fileLogger |= Logger::HtmlLoggerr;

    Transportation::ITransportationReservation* transportationReserv = nullptr;

    //Getting transportation reservation
    if(ui->transportationReservationsComboBox->currentText().compare(flightReservationString) == 0){
    Flight::FlightReservationInfo* info1;
    info1 = new Flight::FlightReservationInfo(new Factory::FileLoggerFactory(fileLogger),flightReservationString);
    info1->SetName(new QString(ui->isimTextBox->toPlainText()));
    info1->SetSurname(new QString(ui->soyisimTextBox->toPlainText()));
    info1->SetTC(new QString(ui->kimlikTextBox->toPlainText()));
    info1->SetReceivingDate(new QDate(QDate::currentDate()));
    info1->SetComingDate(new QDate(ui->gidisTarihiText->date()));
    info1->SetLeavingDate(new QDate(ui->donusTarihiText->date()));
    transportationReserv = new Flight::FlightReservation(info1);
    }
    else{
        Bus::BusReservationInfo* info1;
        info1 = new Bus::BusReservationInfo(new Factory::FileLoggerFactory(fileLogger),busReservationString);
        info1->SetName(new QString(ui->isimTextBox->toPlainText()));
        info1->SetSurname(new QString(ui->soyisimTextBox->toPlainText()));
        info1->SetTC(new QString(ui->kimlikTextBox->toPlainText()));
        info1->SetReceivingDate(new QDate(QDate::currentDate()));
        info1->SetComingDate(new QDate(ui->gidisTarihiText->date()));
        info1->SetLeavingDate(new QDate(ui->donusTarihiText->date()));
        transportationReserv = new Bus::BusReservation(info1);
    }


    //Getting layout reservation
    Layout::ILayoutReservation* layoutReserv = nullptr;

    if(ui->layoutReservationsComboBox->currentText().compare(hotelReservationString) == 0)
    {
        Hotel::HotelReservationInfo* info2;
        info2= new Hotel::HotelReservationInfo(new Factory::FileLoggerFactory(fileLogger),hotelReservationString);

        info2->SetName(new QString(ui->isimTextBox->toPlainText()));
        info2->SetSurname(new QString(ui->soyisimTextBox->toPlainText()));
        info2->SetTC(new QString(ui->kimlikTextBox->toPlainText()));
        info2->SetReceivingDate(new QDate(QDate::currentDate()));
        info2->SetComingDate(new QDate(ui->gidisTarihiText->date()));
        info2->SetLeavingDate(new QDate(ui->donusTarihiText->date()));
        layoutReserv = new Hotel::HotelReservation(info2);
    }
    else
    {
        Tent::TentReservationInfo* info2;
        info2= new Tent::TentReservationInfo(new Factory::FileLoggerFactory(fileLogger),tentReservationString);

        info2->SetName(new QString(ui->isimTextBox->toPlainText()));
        info2->SetSurname(new QString(ui->soyisimTextBox->toPlainText()));
        info2->SetTC(new QString(ui->kimlikTextBox->toPlainText()));
        info2->SetReceivingDate(new QDate(QDate::currentDate()));
        info2->SetComingDate(new QDate(ui->gidisTarihiText->date()));
        info2->SetLeavingDate(new QDate(ui->donusTarihiText->date()));
        layoutReserv = new Tent::TentReservation(info2);
    }


    emit wants_tl_create_reservation(transportationReserv,layoutReserv);

}


void MainWindow::on_confirmButton1_clicked()
{
  ui->stackedWidget->setCurrentWidget(ui->page_2);
}

