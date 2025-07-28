#include "secdialog.h"
#include "ui_secdialog.h"
#include "mainwindow.h"
#include "variable.h"

SecDialog::SecDialog(QMainWindow *mainWin,QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::SecDialog)
    ,mainWindow(mainWin)
{
    ui->setupUi(this);
    connect(ui->homePushButton, &QPushButton::clicked, this, &SecDialog::on_homePushButton_clicked);

     ui->label_8->setText("Actual RPM to  Actual Robot velocity ");
     ui->label->setText("RPM left");
     ui->label_2->setText("RPM Right");
     ui->label_3->setText("Wheel radius(m)");
     ui->label_4->setText("Wheel separation(m)");
     ui->label_7->setText("Actual Robot Velocity");
     ui->label_5->setText("Wheel Velocity Left(m/s)");
     ui->label_6->setText("Wheel Velocity Right(m/s)");

}

SecDialog::~SecDialog()
{
    delete ui;
}

void SecDialog::on_homePushButton_clicked()
{
    mainWindow->show();
    this->close();

}


void SecDialog::on_calculatePushButton_clicked()
{
    double rpmLeft = ui->lineEdit->text().toDouble();
    double rpmRight = ui->lineEdit_2->text().toDouble();
    double wheelRadius = ui->lineEdit_3->text().toDouble();
    double wheelSeparation = ui->lineEdit_4->text().toDouble();

    // Convert RPM to radians/sec
    double wLeft = rpmLeft * 2 * M_PI / 60.0;
    double wRight = rpmRight * 2 * M_PI / 60.0;//M_PI ရဲ့ value ကို const အနေနဲ့ variable.h header file မာ ထည့် ထားခဲ့သည်

    double vLeft = wLeft * wheelRadius;
    double vRight = wRight * wheelRadius;

    ui->lineEdit_5->setText(QString::number(vLeft));
    ui->lineEdit_6->setText(QString::number(vRight));
}

