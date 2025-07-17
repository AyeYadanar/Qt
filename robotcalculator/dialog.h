#ifndef DIALOG_H
#define DIALOG_H

#include <QDialog>

// Forward declaration to reduce compile-time dependency
class QMainWindow;

namespace Ui {
class Dialog;
}

class Dialog : public QDialog
{
    Q_OBJECT

public:
    explicit Dialog(QMainWindow *mainWin, QWidget *parent = nullptr);
    ~Dialog();

private slots:
    void on_homePushButton_clicked();
    void on_calculate_clicked();

private:
    Ui::Dialog *ui;
    QMainWindow *mainWindow;
};

#endif // DIALOG_H
