#ifndef PID_H
#define PID_H

#include <QDialog>

class QMainWindow; // Forward declaration to avoid full include

namespace Ui {
class Pid;
}

class Pid : public QDialog
{
    Q_OBJECT

public:
    // Declare the constructor that matches your .cpp
    explicit Pid(QMainWindow *mainWin, QWidget *parent = nullptr);
    ~Pid();

private slots:
    void on_homePushButton_clicked();

    void on_calculatorPushButton_clicked();

private:
    Ui::Pid *ui;
    QMainWindow *mainWindow;
};

#endif // PID_H
