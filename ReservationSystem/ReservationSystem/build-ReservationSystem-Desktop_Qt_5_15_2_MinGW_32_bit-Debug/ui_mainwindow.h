/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDateEdit>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QStackedWidget *stackedWidget;
    QWidget *page;
    QComboBox *transportationReservationsComboBox;
    QComboBox *layoutReservationsComboBox;
    QPushButton *confirmButton1;
    QWidget *page_2;
    QTextEdit *kimlikTextBox;
    QLabel *kimlikNoLabel;
    QTextEdit *isimTextBox;
    QLabel *isimLabel;
    QTextEdit *soyisimTextBox;
    QLabel *soyisimLabel;
    QTextEdit *telefonNoTextBox;
    QLabel *isimLabel_3;
    QLabel *isimLabel_4;
    QComboBox *koltukNoComboBox;
    QLabel *gidisTarihi;
    QLabel *donusTarihi;
    QCheckBox *jsonCheckBox;
    QCheckBox *xmlCheckBox;
    QCheckBox *htmlCheckBox;
    QDateEdit *gidisTarihiText;
    QDateEdit *donusTarihiText;
    QPushButton *pushButton;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(1184, 631);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        stackedWidget = new QStackedWidget(centralwidget);
        stackedWidget->setObjectName(QString::fromUtf8("stackedWidget"));
        stackedWidget->setGeometry(QRect(10, 0, 1171, 601));
        stackedWidget->setStyleSheet(QString::fromUtf8("QLabel{\n"
"border:1px solid black;\n"
"padding:2px;\n"
"border-radius:2px;\n"
"}\n"
"QTextEdit{\n"
"border:1px solid rgba(0,0,0,0.25);\n"
"border-radius:4px;\n"
"}\n"
"QDateEdit{\n"
"border:1px solid rgba(0,0,0,0.25);\n"
"border-radius:4px;\n"
"}\n"
"QStackedWidget > QWidget{\n"
" background-color: qradialgradient(spread:pad, \n"
"                            cx:0.739, \n"
"                            cy:0.278364, \n"
"                            radius:0.478, \n"
"                            fx:0.997289, \n"
"                            fy:0.00389117, \n"
"                            stop:0 rgba(255, 255, 255, 255), \n"
"                            stop:1 rgba(75,75 ,75, 255));\n"
"}"));
        page = new QWidget();
        page->setObjectName(QString::fromUtf8("page"));
        transportationReservationsComboBox = new QComboBox(page);
        transportationReservationsComboBox->setObjectName(QString::fromUtf8("transportationReservationsComboBox"));
        transportationReservationsComboBox->setGeometry(QRect(300, 90, 551, 41));
        layoutReservationsComboBox = new QComboBox(page);
        layoutReservationsComboBox->setObjectName(QString::fromUtf8("layoutReservationsComboBox"));
        layoutReservationsComboBox->setGeometry(QRect(300, 291, 551, 41));
        confirmButton1 = new QPushButton(page);
        confirmButton1->setObjectName(QString::fromUtf8("confirmButton1"));
        confirmButton1->setGeometry(QRect(450, 410, 231, 81));
        stackedWidget->addWidget(page);
        page_2 = new QWidget();
        page_2->setObjectName(QString::fromUtf8("page_2"));
        kimlikTextBox = new QTextEdit(page_2);
        kimlikTextBox->setObjectName(QString::fromUtf8("kimlikTextBox"));
        kimlikTextBox->setGeometry(QRect(190, 60, 201, 31));
        kimlikNoLabel = new QLabel(page_2);
        kimlikNoLabel->setObjectName(QString::fromUtf8("kimlikNoLabel"));
        kimlikNoLabel->setGeometry(QRect(90, 60, 81, 31));
        kimlikNoLabel->setLayoutDirection(Qt::LeftToRight);
        isimTextBox = new QTextEdit(page_2);
        isimTextBox->setObjectName(QString::fromUtf8("isimTextBox"));
        isimTextBox->setGeometry(QRect(190, 130, 201, 31));
        isimLabel = new QLabel(page_2);
        isimLabel->setObjectName(QString::fromUtf8("isimLabel"));
        isimLabel->setGeometry(QRect(90, 130, 81, 31));
        isimLabel->setLayoutDirection(Qt::LeftToRight);
        soyisimTextBox = new QTextEdit(page_2);
        soyisimTextBox->setObjectName(QString::fromUtf8("soyisimTextBox"));
        soyisimTextBox->setGeometry(QRect(190, 200, 201, 31));
        soyisimLabel = new QLabel(page_2);
        soyisimLabel->setObjectName(QString::fromUtf8("soyisimLabel"));
        soyisimLabel->setGeometry(QRect(90, 200, 81, 31));
        soyisimLabel->setLayoutDirection(Qt::LeftToRight);
        telefonNoTextBox = new QTextEdit(page_2);
        telefonNoTextBox->setObjectName(QString::fromUtf8("telefonNoTextBox"));
        telefonNoTextBox->setGeometry(QRect(190, 280, 201, 31));
        isimLabel_3 = new QLabel(page_2);
        isimLabel_3->setObjectName(QString::fromUtf8("isimLabel_3"));
        isimLabel_3->setGeometry(QRect(90, 280, 81, 31));
        isimLabel_3->setLayoutDirection(Qt::LeftToRight);
        isimLabel_4 = new QLabel(page_2);
        isimLabel_4->setObjectName(QString::fromUtf8("isimLabel_4"));
        isimLabel_4->setGeometry(QRect(90, 360, 81, 31));
        isimLabel_4->setLayoutDirection(Qt::LeftToRight);
        koltukNoComboBox = new QComboBox(page_2);
        koltukNoComboBox->setObjectName(QString::fromUtf8("koltukNoComboBox"));
        koltukNoComboBox->setGeometry(QRect(190, 360, 201, 31));
        gidisTarihi = new QLabel(page_2);
        gidisTarihi->setObjectName(QString::fromUtf8("gidisTarihi"));
        gidisTarihi->setGeometry(QRect(620, 60, 101, 31));
        gidisTarihi->setLayoutDirection(Qt::LeftToRight);
        gidisTarihi->setStyleSheet(QString::fromUtf8(""));
        donusTarihi = new QLabel(page_2);
        donusTarihi->setObjectName(QString::fromUtf8("donusTarihi"));
        donusTarihi->setGeometry(QRect(620, 130, 101, 31));
        donusTarihi->setLayoutDirection(Qt::LeftToRight);
        jsonCheckBox = new QCheckBox(page_2);
        jsonCheckBox->setObjectName(QString::fromUtf8("jsonCheckBox"));
        jsonCheckBox->setGeometry(QRect(660, 360, 76, 20));
        xmlCheckBox = new QCheckBox(page_2);
        xmlCheckBox->setObjectName(QString::fromUtf8("xmlCheckBox"));
        xmlCheckBox->setGeometry(QRect(790, 360, 76, 20));
        htmlCheckBox = new QCheckBox(page_2);
        htmlCheckBox->setObjectName(QString::fromUtf8("htmlCheckBox"));
        htmlCheckBox->setGeometry(QRect(900, 360, 76, 20));
        gidisTarihiText = new QDateEdit(page_2);
        gidisTarihiText->setObjectName(QString::fromUtf8("gidisTarihiText"));
        gidisTarihiText->setGeometry(QRect(750, 60, 221, 31));
        donusTarihiText = new QDateEdit(page_2);
        donusTarihiText->setObjectName(QString::fromUtf8("donusTarihiText"));
        donusTarihiText->setGeometry(QRect(750, 130, 221, 31));
        pushButton = new QPushButton(page_2);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(470, 450, 201, 91));
        stackedWidget->addWidget(page_2);
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 1184, 26));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        stackedWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        confirmButton1->setText(QCoreApplication::translate("MainWindow", "Confirm", nullptr));
        kimlikNoLabel->setText(QCoreApplication::translate("MainWindow", "TC Kimlik", nullptr));
        isimLabel->setText(QCoreApplication::translate("MainWindow", "\304\260sim", nullptr));
        soyisimLabel->setText(QCoreApplication::translate("MainWindow", "Soyisim", nullptr));
        isimLabel_3->setText(QCoreApplication::translate("MainWindow", "Telefon No:", nullptr));
        isimLabel_4->setText(QCoreApplication::translate("MainWindow", "Koltuk No", nullptr));
        gidisTarihi->setText(QCoreApplication::translate("MainWindow", "Gidi\305\237 Tarihi", nullptr));
        donusTarihi->setText(QCoreApplication::translate("MainWindow", "D\303\266n\303\274\305\237 Tarihi", nullptr));
        jsonCheckBox->setText(QCoreApplication::translate("MainWindow", "Json", nullptr));
        xmlCheckBox->setText(QCoreApplication::translate("MainWindow", "XML", nullptr));
        htmlCheckBox->setText(QCoreApplication::translate("MainWindow", "HTML", nullptr));
        pushButton->setText(QCoreApplication::translate("MainWindow", "Kayd\304\261 Bitir ve \303\207\304\261kt\304\261 Al", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
