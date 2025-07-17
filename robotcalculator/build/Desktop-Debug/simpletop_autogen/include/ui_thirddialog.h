/********************************************************************************
** Form generated from reading UI file 'thirddialog.ui'
**
** Created by: Qt User Interface Compiler version 5.15.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_THIRDDIALOG_H
#define UI_THIRDDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ThirdDialog
{
public:
    QWidget *horizontalLayoutWidget;
    QHBoxLayout *horizontalLayout;
    QPushButton *homePushButton;
    QSpacerItem *horizontalSpacer;
    QPushButton *calculatePushButton;

    void setupUi(QDialog *ThirdDialog)
    {
        if (ThirdDialog->objectName().isEmpty())
            ThirdDialog->setObjectName(QString::fromUtf8("ThirdDialog"));
        ThirdDialog->resize(400, 300);
        horizontalLayoutWidget = new QWidget(ThirdDialog);
        horizontalLayoutWidget->setObjectName(QString::fromUtf8("horizontalLayoutWidget"));
        horizontalLayoutWidget->setGeometry(QRect(20, 200, 371, 91));
        horizontalLayout = new QHBoxLayout(horizontalLayoutWidget);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        homePushButton = new QPushButton(horizontalLayoutWidget);
        homePushButton->setObjectName(QString::fromUtf8("homePushButton"));

        horizontalLayout->addWidget(homePushButton);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Preferred, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        calculatePushButton = new QPushButton(horizontalLayoutWidget);
        calculatePushButton->setObjectName(QString::fromUtf8("calculatePushButton"));

        horizontalLayout->addWidget(calculatePushButton);


        retranslateUi(ThirdDialog);

        QMetaObject::connectSlotsByName(ThirdDialog);
    } // setupUi

    void retranslateUi(QDialog *ThirdDialog)
    {
        ThirdDialog->setWindowTitle(QCoreApplication::translate("ThirdDialog", "Dialog", nullptr));
        homePushButton->setText(QCoreApplication::translate("ThirdDialog", "Home", nullptr));
        calculatePushButton->setText(QCoreApplication::translate("ThirdDialog", "Calculate", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ThirdDialog: public Ui_ThirdDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_THIRDDIALOG_H
