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
    ui->label->setText("ROM ROBOTICS");//company name 
    ui->label_2->setText("ROBOTICS CALCULATOR");//project name ထည့်ချင်တာ
    ui->label->setStyleSheet("QLabel{color:white;}");
    ui->pushButton->setStyleSheet("QPushButton{background-color: grey; color: white;}"
                                  "QPushButton:hover {"
                                  "  background-color: green;"
                                  "}");//rpm ရဲ့ button ပေါ်မာတင်လိုက်ရင် အရောင် ပြောင်းချင်လို့
    ui->pushButton_2->setStyleSheet("QPushButton {"
                                    "  background-color: grey;"
                                    "  color: white;"
                                    "}"
                                    "QPushButton:hover {"
                                    "  background-color: purple;"
                                    "}");//velocity ရဲ့ button ပေါ်မာတင်လိုက်ရင် အရောင် ပြောင်းချင်လို့
    ui->pushButton_3->setStyleSheet("QPushButton {"
                                    "  background-color: grey;"
                                    "  color: white;"
                                    "}"
                                    "QPushButton:hover {"
                                    "  background-color: blue;"
                                    "}");//distance ရဲ့ button ပေါ်မာတင်လိုက်ရင် အရောင် ပြောင်းချင်လို့
    ui->pushButton_4->setStyleSheet("QPushButton {"
                                    "  background-color: grey;"
                                    "  color: white;"
                                    "}"
                                    "QPushButton:hover {"
                                    "  background-color: red;"
                                    "}");//pid ရဲ့ button ပေါ်မာတင်လိုက်ရင် အရောင် ပြောင်းချင်လို့
    connect(ui->pushButton, &QPushButton::clicked, this, &MainWindow::pushButton_clicked);//pushbutton ကို နှိပ်လိုက်တာနဲ့ rpm calculator dialog ပေါ်လာဖို့အတွက် connect လုပ်တာ
    connect(ui->pushButton_2, &QPushButton::clicked, this, &MainWindow::pushButton_2_clicked);//pushbutton ကို နှိပ်လိုက်တာနဲ့ velocity calculator dialog ပေါ်လာဖို့အတွက် connect လုပ်တာ
    connect(ui->pushButton_3, &QPushButton::clicked, this, &MainWindow::pushButton_3_clicked);//pushbutton ကို နှိပ်လိုက်တာနဲ့ distance calculator dialog ပေါ်လာဖို့အတွက် connect လုပ်တာ
    connect(ui->pushButton_4, &QPushButton::clicked, this, &MainWindow::pushButton_4_clicked);//pushbutton ကို နှိပ်လိုက်တာနဲ့ pid calculator dialog ပေါ်လာဖို့အတွက် connect လုပ်တာ

}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::pushButton_clicked()
{
     this->hide();//mainwindow.ui ပိတ်
//QMessageBox::information(this, "Dialog", "Hello! This is a dialog.");
    dialog =new Dialog(this);
    dialog->show();//click လိုက်တာနဲ့ new diaiog ပေါ်လာမာ
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

