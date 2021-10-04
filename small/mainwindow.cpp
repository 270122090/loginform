#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "dialog2.h"
#include <QMessageBox>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    QPixmap pix("./Image/R.jfif");
    int w = ui->lblImage->width();
    int h = ui->lblImage->height();
    ui->lblImage->setPixmap(pix.scaled(w,h, Qt::KeepAspectRatio));
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_pblogin_clicked()
{
    QString username = ui->txtuser->text();
    QString password = ui->txtpass->text();

    if (username == "admin" && password == "1234")
    {
        QMessageBox::information(this,"login", "You have logged in succesful"); // ::information(this,"Login Successfull");
        hide();
        second = new Dialog2(this);
        second->show();
    }
    else
    {
        QMessageBox::warning(this, "login", "failed");// you have to give your box login
    }

}

