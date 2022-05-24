#include "mainwindow.h"
#include "ui_mainwindow.h"

#include "services/subservices/flightreservation.h"
#include "services/subservices/flightreservationinfo.h"

#include "services/subservices/hotelreservation.h"
#include "services/subservices/hotelreservationinfo.h"

#include "services/fileloggerfactory.h"

const QString hotelReservationString ="HotelReservation";
const QString tendReservationString ="TendReservation";
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
   ui->layoutReservationsComboBox->addItem(tendReservationString);

   ui->transportationReservationsComboBox->addItem(flightReservationString);
   ui->transportationReservationsComboBox->addItem(busReservationString);

   for(int i = 1;i<101;i++)
   {
       ui->koltukNoComboBox->addItem(QString::number(i));
   }

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
   Flight::FlightReservationInfo* info1;
   info1 = new Flight::FlightReservationInfo(new Factory::FileLoggerFactory((Logger::JsonLoggerr | Logger::XmlLoggerr)),"flightReservation");
    info1->SetName(new QString(ui->isimTextBox->toPlainText()));
    info1->SetSurname(new QString(ui->soyisimTextBox->toPlainText()));
    info1->SetTC(new QString(ui->kimlikTextBox->toPlainText()));
    info1->SetReceivingDate(new QDate(QDate::currentDate()));
    info1->SetComingDate(new QDate(ui->gidisTarihiText->date()));
    info1->SetLeavingDate(new QDate(ui->donusTarihiText->date()));


    Hotel::HotelReservationInfo* info2;
    info2= new Hotel::HotelReservationInfo(new Factory::FileLoggerFactory((Logger::JsonLoggerr | Logger::XmlLoggerr)),"hotelReservation");

    info2->SetName(new QString(ui->isimTextBox->toPlainText()));
    info2->SetSurname(new QString(ui->soyisimTextBox->toPlainText()));
    info2->SetTC(new QString(ui->kimlikTextBox->toPlainText()));
    info2->SetReceivingDate(new QDate(QDate::currentDate()));
    info2->SetComingDate(new QDate(ui->gidisTarihiText->date()));
    info2->SetLeavingDate(new QDate(ui->donusTarihiText->date()));

    emit wants_tl_create_reservation(new Flight::FlightReservation(info1),new Hotel::HotelReservation(info2));
}


void MainWindow::on_confirmButton1_clicked()
{
  ui->stackedWidget->setCurrentWidget(ui->page_2);
}

