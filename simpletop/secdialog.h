#ifndef SECDIALOG_H
#define SECDIALOG_H

#include <QDialog>
#include "mainwindow.h"

namespace Ui {
class SecDialog;
}

class SecDialog : public QDialog
{
    Q_OBJECT

public:
    explicit SecDialog(QMainWindow *mainWin,QWidget *parent = nullptr);
    ~SecDialog();

private slots:
    void on_homePushButton_clicked();

    void on_calculatePushButton_clicked();

private:
    Ui::SecDialog *ui;
    QMainWindow *mainWindow;
};

#endif // SECDIALOG_H
