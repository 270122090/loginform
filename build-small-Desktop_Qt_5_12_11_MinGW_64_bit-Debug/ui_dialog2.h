/********************************************************************************
** Form generated from reading UI file 'dialog2.ui'
**
** Created by: Qt User Interface Compiler version 5.12.11
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIALOG2_H
#define UI_DIALOG2_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>

QT_BEGIN_NAMESPACE

class Ui_Dialog2
{
public:
    QLabel *Welcome;
    QLabel *label;

    void setupUi(QDialog *Dialog2)
    {
        if (Dialog2->objectName().isEmpty())
            Dialog2->setObjectName(QString::fromUtf8("Dialog2"));
        Dialog2->resize(672, 500);
        Welcome = new QLabel(Dialog2);
        Welcome->setObjectName(QString::fromUtf8("Welcome"));
        Welcome->setGeometry(QRect(280, 140, 91, 61));
        QFont font;
        font.setFamily(QString::fromUtf8("MS Gothic"));
        font.setPointSize(16);
        font.setUnderline(true);
        Welcome->setFont(font);
        label = new QLabel(Dialog2);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(260, 210, 141, 101));

        retranslateUi(Dialog2);

        QMetaObject::connectSlotsByName(Dialog2);
    } // setupUi

    void retranslateUi(QDialog *Dialog2)
    {
        Dialog2->setWindowTitle(QApplication::translate("Dialog2", "Dialog", nullptr));
        Welcome->setText(QApplication::translate("Dialog2", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'MS Gothic'; font-size:16pt; font-weight:400; font-style:normal;\">\n"
"<p align=\"center\" style=\" margin-top:12px; margin-bottom:12px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">WELCOME</p></body></html>", nullptr));
        label->setText(QApplication::translate("Dialog2", "<html><head/><body><p align=\"center\"><span style=\" font-size:16pt; font-weight:600;\">Welcome </span></p><p align=\"center\"><span style=\" font-size:16pt; font-weight:600;\">to </span></p><p align=\"center\"><span style=\" font-size:11pt; color:#aa55ff;\">CS103</span></p></body></html>", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Dialog2: public Ui_Dialog2 {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOG2_H
