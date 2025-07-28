#include "dialog.h"
#include "ui_dialog.h"
#include "mainwindow.h"
#include <QMessageBox>
#include "variable.h"

Dialog::Dialog(QMainWindow *mainWin, QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::Dialog)
    , mainWindow(mainWin)
{
    ui->setupUi(this);

    // Connect manually
    connect(ui->homePushButton, &QPushButton::clicked, this, &Dialog::on_homePushButton_clicked);//home button clickလိုက်တာနဲ့ mainwindow ပြန်ပေါ်လာအောင် connect ချိတ်

    ui->label->setText("Linear velocity(m/s)");
    ui->label_2->setText("Angular velocity(rad/s)");
    ui->label_3->setText("Wheel radius(m)");
    ui->label_4->setText("Wheel separation(m)");
    ui->label_5->setText("RPM left");
    ui->label_6->setText("RPM right");
    ui->label_7->setText("Yours Robot RPM");
    ui->label_8->setText("Velocity to RPM");
}

Dialog::~Dialog()
{
    delete ui;
}


void Dialog::on_calculate_clicked()
{
    bool ok1, ok2, ok3, ok4;
    double v = ui->lineEdit->text().toDouble(&ok1);
    double w = ui->lineEdit_2->text().toDouble(&ok2);
    double r = ui->lineEdit_3->text().toDouble(&ok3);
    double L = ui->lineEdit_4->text().toDouble(&ok4);//value ကို user ဆီက တောင်းပီးထည့်

    if (!(ok1 && ok2 && ok3 && ok4)) {
        QMessageBox::warning(this, "Input Error", "Please enter valid numbers.");
        return;
    }

    double rpm_left = ((2*v - w*L) / (2*r)) *rad_to_rpm;
    double rpm_right = ((2*v + w*L) / (2*r)) *rad_to_rpm;//variable.h headerမာ file rad_to_rpm ကို const အနေနဲ့ သတ်မှတ်ထား

    ui->lineEdit_5->setText(QString::number(rpm_left));
    ui->lineEdit_6->setText(QString::number(rpm_right));
}

void Dialog::on_homePushButton_clicked()
{
    mainWindow->show();//home pushbutton  ကို click လိုက်ရင် mainwindow page ကို ပြန်ရောက်မည်
    this->close();//close current page 
}

