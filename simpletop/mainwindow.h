#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QDialog>

QT_BEGIN_NAMESPACE
class Dialog;
class SecDialog;
class ThirdDialog;
class Pid;

namespace Ui {
class MainWindow;
}
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void pushButton_clicked();

    void pushButton_2_clicked();

    void pushButton_3_clicked();

    void pushButton_4_clicked();

private:
    Ui::MainWindow *ui;
    QDialog *dialog;
    QDialog *secdialog;
    QDialog *thirddialog;
    QDialog *pid;
};
#endif // MAINWINDOW_H
