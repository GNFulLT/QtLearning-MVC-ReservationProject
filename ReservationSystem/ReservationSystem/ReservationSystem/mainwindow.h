#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "controllers/mainwindowcontroller.h"
QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();


private:
    void InitializeComponents();
    void ConnectComponents();
    Ui::MainWindow *ui;
    Controller::MainWindowController* _controller;
signals:
    void wants_tl_create_reservation(Transportation::ITransportationReservation*,Layout::ILayoutReservation*);

private slots:
    void on_pushButton_clicked();
};
#endif // MAINWINDOW_H
