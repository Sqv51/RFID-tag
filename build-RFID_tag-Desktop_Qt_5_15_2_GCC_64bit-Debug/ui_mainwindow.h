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
#include <QtWidgets/QComboBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QComboBox *comPortBox;
    QPushButton *update;
    QPushButton *connect;
    QLabel *label;
    QPushButton *disconnect;
    QFrame *frame;
    QFrame *frame_2;
    QPushButton *add;
    QPushButton *remove;
    QPushButton *allremove;
    QLineEdit *rfiddata;
    QLabel *label_2;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(800, 450);
        MainWindow->setMinimumSize(QSize(800, 450));
        MainWindow->setMaximumSize(QSize(800, 450));
        MainWindow->setStyleSheet(QString::fromUtf8(""));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        comPortBox = new QComboBox(centralwidget);
        comPortBox->setObjectName(QString::fromUtf8("comPortBox"));
        comPortBox->setGeometry(QRect(230, 20, 211, 31));
        comPortBox->setStyleSheet(QString::fromUtf8("background-color: rgb(238, 238, 236);"));
        update = new QPushButton(centralwidget);
        update->setObjectName(QString::fromUtf8("update"));
        update->setGeometry(QRect(450, 10, 61, 41));
        update->setStyleSheet(QString::fromUtf8("image: url(:/new/prefix1/Logos/pngegg.png);"));
        connect = new QPushButton(centralwidget);
        connect->setObjectName(QString::fromUtf8("connect"));
        connect->setGeometry(QRect(230, 60, 211, 31));
        connect->setStyleSheet(QString::fromUtf8(""));
        label = new QLabel(centralwidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(230, 110, 211, 21));
        label->setStyleSheet(QString::fromUtf8("color: rgb(46, 52, 54);\n"
"background-color: rgb(238, 238, 236);"));
        disconnect = new QPushButton(centralwidget);
        disconnect->setObjectName(QString::fromUtf8("disconnect"));
        disconnect->setGeometry(QRect(230, 60, 211, 31));
        disconnect->setStyleSheet(QString::fromUtf8(""));
        frame = new QFrame(centralwidget);
        frame->setObjectName(QString::fromUtf8("frame"));
        frame->setGeometry(QRect(0, 0, 101, 101));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(frame->sizePolicy().hasHeightForWidth());
        frame->setSizePolicy(sizePolicy);
        frame->setMaximumSize(QSize(800, 450));
        frame->setStyleSheet(QString::fromUtf8("image: url(:/new/prefix1/Logos/logo_mobil-1.png);\n"
"background-color: transparent;\n"
"border-width: 1px;\n"
"border-radius: 11px;\n"
"border-color: #2082ff;\n"
"padding: 5px;a"));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        frame_2 = new QFrame(centralwidget);
        frame_2->setObjectName(QString::fromUtf8("frame_2"));
        frame_2->setGeometry(QRect(540, 150, 81, 101));
        frame_2->setStyleSheet(QString::fromUtf8("image: url(:/new/prefix1/Logos/rfid.png);\n"
"background-color: transparent;\n"
""));
        frame_2->setFrameShape(QFrame::StyledPanel);
        frame_2->setFrameShadow(QFrame::Raised);
        add = new QPushButton(centralwidget);
        add->setObjectName(QString::fromUtf8("add"));
        add->setGeometry(QRect(460, 260, 239, 29));
        add->setMouseTracking(true);
        add->setStyleSheet(QString::fromUtf8("border-style: solid;\n"
"border-width: 1px;\n"
"border-radius: 11px;\n"
"border-color: #2082ff;\n"
"padding: 5px;a"));
        remove = new QPushButton(centralwidget);
        remove->setObjectName(QString::fromUtf8("remove"));
        remove->setGeometry(QRect(460, 290, 239, 29));
        remove->setStyleSheet(QString::fromUtf8("border-style: solid;\n"
"border-width: 1px;\n"
"border-radius: 11px;\n"
"border-color: #2082ff;\n"
"padding: 5px;a"));
        allremove = new QPushButton(centralwidget);
        allremove->setObjectName(QString::fromUtf8("allremove"));
        allremove->setGeometry(QRect(460, 320, 239, 29));
        allremove->setStyleSheet(QString::fromUtf8("border-style: solid;\n"
"border-width: 1px;\n"
"border-radius: 11px;\n"
"border-color: #2082ff;\n"
"padding: 5px;a"));
        rfiddata = new QLineEdit(centralwidget);
        rfiddata->setObjectName(QString::fromUtf8("rfiddata"));
        rfiddata->setGeometry(QRect(10, 290, 431, 25));
        rfiddata->setMaxLength(8);
        label_2 = new QLabel(centralwidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(10, 270, 211, 21));
        MainWindow->setCentralWidget(centralwidget);
        disconnect->raise();
        connect->raise();
        comPortBox->raise();
        update->raise();
        label->raise();
        frame->raise();
        frame_2->raise();
        add->raise();
        remove->raise();
        allremove->raise();
        rfiddata->raise();
        label_2->raise();
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        update->setText(QString());
        connect->setText(QCoreApplication::translate("MainWindow", "Connect", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "BA\304\236LANTI DURUMU: HAZIR", nullptr));
        disconnect->setText(QCoreApplication::translate("MainWindow", "Disconnect", nullptr));
        add->setText(QCoreApplication::translate("MainWindow", "Kart Ekle", nullptr));
        remove->setText(QCoreApplication::translate("MainWindow", "Kart \303\207\304\261kar", nullptr));
        allremove->setText(QCoreApplication::translate("MainWindow", "B\303\274t\303\274n Kartlar\304\261 \303\207\304\261kar", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "Veri Giriniz:", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
