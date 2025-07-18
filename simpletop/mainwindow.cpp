#include "mainwindow.h"
#include "./ui_mainwindow.h"
#include "dialog.h"
#include <QMessageBox>
#include "secdialog.h"
#include "thirddialog.h"
#include "pid.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    //this->setStyleSheet("MainWindow{background-image:url(:images/back.jpg);}");
    ui->label->setText("ROM ROBOTICS");
    ui->label_2->setText("ROBOTICS CALCULATOR");
    ui->label->setStyleSheet("QLabel{color:white;}");
    ui->pushButton->setStyleSheet("QPushButton{background-color: grey; color: white;}"
                                  "QPushButton:hover {"
                                  "  background-color: green;"
                                  "}");
    ui->pushButton_2->setStyleSheet("QPushButton {"
                                    "  background-color: grey;"
                                    "  color: white;"
                                    "}"
                                    "QPushButton:hover {"
                                    "  background-color: purple;"
                                    "}");
    ui->pushButton_3->setStyleSheet("QPushButton {"
                                    "  background-color: grey;"
                                    "  color: white;"
                                    "}"
                                    "QPushButton:hover {"
                                    "  background-color: blue;"
                                    "}");
    ui->pushButton_4->setStyleSheet("QPushButton {"
                                    "  background-color: grey;"
                                    "  color: white;"
                                    "}"
                                    "QPushButton:hover {"
                                    "  background-color: red;"
                                    "}");
    connect(ui->pushButton, &QPushButton::clicked, this, &MainWindow::pushButton_clicked);
    connect(ui->pushButton_2, &QPushButton::clicked, this, &MainWindow::pushButton_2_clicked);
    connect(ui->pushButton_3, &QPushButton::clicked, this, &MainWindow::pushButton_3_clicked);
    connect(ui->pushButton_4, &QPushButton::clicked, this, &MainWindow::pushButton_4_clicked);

}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::pushButton_clicked()
{
     this->hide();
//QMessageBox::information(this, "Dialog", "Hello! This is a dialog.");
    dialog =new Dialog(this);
    dialog->show();
}


void MainWindow::pushButton_2_clicked()
{
     this->hide();
    //QMessageBox::information(this, "Dialog", "Hello! This is a dialog.");
    secdialog =new SecDialog(this);
    secdialog->show();
}



void MainWindow::pushButton_3_clicked()
{
     this->hide();
    thirddialog =new ThirdDialog(this);
    thirddialog->show();
}


void MainWindow::pushButton_4_clicked()
{
    this->hide();
    pid =new Pid(this);
    pid->show();
}

