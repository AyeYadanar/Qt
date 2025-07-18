#include "pid.h"
#include "ui_pid.h"
#include "mainwindow.h"

Pid::Pid(QMainWindow *mainWin,QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::Pid)
    ,mainWindow(mainWin)

{
    ui->setupUi(this);
    connect(ui->homePushButton, &QPushButton::clicked, this, &Pid::on_homePushButton_clicked);
    ui->label->setText("Setpoint Input");
    ui->label_2->setText("Actual Value Input");
    ui->label_3->setText("Ultimate Gain (Ku)");
    ui->label_4->setText("Ultimate Period (Tu)");
    ui->label_5->setText("PID");
    ui->label_6->setText("PID Convert");
    ui->label_7->setText("Kp");
    ui->label_8->setText("Ki");
    ui->label_9->setText("Kd");
}

Pid::~Pid()
{
    delete ui;
}

void Pid::on_homePushButton_clicked()
{
    mainWindow->show();
    this->close();
}


void Pid::on_calculatorPushButton_clicked()
{
    bool ok;
    double Ku = ui->lineEdit_3->text().toDouble(&ok);
    double Tu = ui->lineEdit_4->text().toDouble(&ok);

    if (ok && Ku > 0 && Tu > 0) {
        double Kp = 0.6 * Ku;
        double Ki = 2 * Kp / Tu;
        double Kd = Kp * Tu / 8;

        ui->lineEdit_5->setText(QString::number(Kp));
        ui->lineEdit_6->setText(QString::number(Ki));
        ui->lineEdit_7->setText(QString::number(Kd));
    }
}
