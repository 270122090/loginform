/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.12.11
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QGroupBox *groupBox;
    QLabel *label;
    QLabel *label_2;
    QPushButton *pblogin;
    QLineEdit *txtpass;
    QLineEdit *txtuser;
    QLabel *lblImage;
    QMenuBar *menubar;
    QMenu *menuAlienReg;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(800, 600);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        groupBox = new QGroupBox(centralwidget);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setGeometry(QRect(370, 110, 381, 331));
        label = new QLabel(groupBox);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(30, 90, 81, 16));
        label_2 = new QLabel(groupBox);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(30, 140, 81, 16));
        pblogin = new QPushButton(groupBox);
        pblogin->setObjectName(QString::fromUtf8("pblogin"));
        pblogin->setGeometry(QRect(180, 190, 75, 23));
        txtpass = new QLineEdit(groupBox);
        txtpass->setObjectName(QString::fromUtf8("txtpass"));
        txtpass->setGeometry(QRect(170, 140, 113, 20));
        txtpass->setEchoMode(QLineEdit::Password);
        txtuser = new QLineEdit(groupBox);
        txtuser->setObjectName(QString::fromUtf8("txtuser"));
        txtuser->setGeometry(QRect(170, 90, 113, 20));
        lblImage = new QLabel(centralwidget);
        lblImage->setObjectName(QString::fromUtf8("lblImage"));
        lblImage->setGeometry(QRect(50, 100, 301, 341));
        lblImage->setFrameShape(QFrame::Panel);
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 800, 21));
        menuAlienReg = new QMenu(menubar);
        menuAlienReg->setObjectName(QString::fromUtf8("menuAlienReg"));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);

        menubar->addAction(menuAlienReg->menuAction());

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", nullptr));
        groupBox->setTitle(QApplication::translate("MainWindow", "GroupBox", nullptr));
        label->setText(QApplication::translate("MainWindow", "UserName", nullptr));
        label_2->setText(QApplication::translate("MainWindow", "Password", nullptr));
        pblogin->setText(QApplication::translate("MainWindow", "Login", nullptr));
        lblImage->setText(QString());
        menuAlienReg->setTitle(QApplication::translate("MainWindow", "AlienReg", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
