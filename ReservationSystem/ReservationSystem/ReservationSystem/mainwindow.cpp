#include "mainwindow.h"
#include "ui_mainwindow.h"

#include "services/subservices/flightreservation.h"
#include "services/subservices/flightreservationinfo.h"

#include "services/subservices/hotelreservation.h"
#include "services/subservices/hotelreservationinfo.h"


MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    InitializeComponents();

    ConnectComponents();
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
    Flight::FlightReservationInfo* info1 = new Flight::FlightReservationInfo();
    info1->SetName(new QString("Ahmet"));
    info1->SetSurname(new QString("Kuş"));
    info1->SetTC(new QString("2139219321"));
    info1->SetReceivingDate(new QDate(QDate::currentDate()));
    info1->SetComingDate(new QDate(QDate::currentDate()));
    info1->SetLeavingDate(new QDate(QDate::currentDate()));

    Hotel::HotelReservationInfo* info2 = new Hotel::HotelReservationInfo();

    info2->SetName(new QString("Ahmet"));
    info2->SetSurname(new QString("Kuş"));
    info2->SetTC(new QString("2139219321"));
    info2->SetReceivingDate(new QDate(QDate::currentDate()));
    info2->SetComingDate(new QDate(QDate::currentDate()));
    info2->SetLeavingDate(new QDate(QDate::currentDate()));

    emit wants_tl_create_reservation(new Flight::FlightReservation(info1),new Hotel::HotelReservation(info2));
}

