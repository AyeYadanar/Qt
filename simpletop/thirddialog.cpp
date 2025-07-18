#include "thirddialog.h"
#include "ui_thirddialog.h"
#include "mainwindow.h"
#include "variable.h"

ThirdDialog::ThirdDialog(QMainWindow *mainWin,QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::ThirdDialog)
    ,mainWindow(mainWin)
{
    ui->setupUi(this);
    connect(ui->homePushButton, &QPushButton::clicked, this, &ThirdDialog::on_homePushButton_clicked);
    ui->label->setText("Encoder Count");
    ui->label_2->setText("CPR");
    ui->label_3->setText("Wheel Radius");
    ui->label_4->setText("Wheel Distance");
    ui->label_5->setText("Distance");
    ui->label_6->setText("Encoder Count To Distance");
}
ThirdDialog::~ThirdDialog()
{
    delete ui;
}
void ThirdDialog::on_homePushButton_clicked()
{
    mainWindow->show();
    this->close();
}

void ThirdDialog::on_calculatePushButton_clicked()
{
    double Encodercount = ui->lineEdit->text().toDouble();
    double cpr = ui->lineEdit_2->text().toDouble();
    double r = ui->lineEdit_3->text().toDouble();

    double circumference = 2* M_PI * r ;
    double distance = ( Encodercount / cpr) * circumference ;

    ui->lineEdit_4->setText(QString::number(distance));

}

