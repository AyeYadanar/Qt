#ifndef THIRDDIALOG_H
#define THIRDDIALOG_H

#include <QDialog>
#include "mainwindow.h"

namespace Ui {
class ThirdDialog;
}

class ThirdDialog : public QDialog
{
    Q_OBJECT

public:
    explicit ThirdDialog(QMainWindow *mainWin,QWidget *parent = nullptr);
    ~ThirdDialog();


private slots:
    void on_homePushButton_clicked();

    void on_calculatePushButton_clicked();

private:
    Ui::ThirdDialog *ui;
    QMainWindow *mainWindow;

};

#endif // THIRDDIALOG_H
