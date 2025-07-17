/********************************************************************************
** Form generated from reading UI file 'secdialog.ui'
**
** Created by: Qt User Interface Compiler version 5.15.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SECDIALOG_H
#define UI_SECDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_SecDialog
{
public:
    QVBoxLayout *verticalLayout_6;
    QVBoxLayout *verticalLayout_5;
    QFrame *frame;
    QHBoxLayout *horizontalLayout_17;
    QLabel *label_17;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_14;
    QSpacerItem *horizontalSpacer_14;
    QLineEdit *lineEdit_13;
    QHBoxLayout *horizontalLayout_15;
    QLabel *label_15;
    QSpacerItem *horizontalSpacer_16;
    QLineEdit *lineEdit_14;
    QHBoxLayout *horizontalLayout_16;
    QLabel *label_16;
    QSpacerItem *horizontalSpacer_15;
    QLineEdit *lineEdit_15;
    QFrame *frame_3;
    QHBoxLayout *horizontalLayout_18;
    QLabel *label_18;
    QHBoxLayout *horizontalLayout;
    QPushButton *homePushButton;
    QSpacerItem *horizontalSpacer;
    QPushButton *calculatePushButton;

    void setupUi(QDialog *SecDialog)
    {
        if (SecDialog->objectName().isEmpty())
            SecDialog->setObjectName(QString::fromUtf8("SecDialog"));
        SecDialog->resize(400, 300);
        verticalLayout_6 = new QVBoxLayout(SecDialog);
        verticalLayout_6->setObjectName(QString::fromUtf8("verticalLayout_6"));
        verticalLayout_5 = new QVBoxLayout();
        verticalLayout_5->setObjectName(QString::fromUtf8("verticalLayout_5"));
        verticalLayout_5->setContentsMargins(-1, -1, -1, 50);
        frame = new QFrame(SecDialog);
        frame->setObjectName(QString::fromUtf8("frame"));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        horizontalLayout_17 = new QHBoxLayout(frame);
        horizontalLayout_17->setObjectName(QString::fromUtf8("horizontalLayout_17"));
        label_17 = new QLabel(frame);
        label_17->setObjectName(QString::fromUtf8("label_17"));

        horizontalLayout_17->addWidget(label_17);


        verticalLayout_5->addWidget(frame, 0, Qt::AlignHCenter);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        label_14 = new QLabel(SecDialog);
        label_14->setObjectName(QString::fromUtf8("label_14"));

        horizontalLayout_2->addWidget(label_14);

        horizontalSpacer_14 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_14);

        lineEdit_13 = new QLineEdit(SecDialog);
        lineEdit_13->setObjectName(QString::fromUtf8("lineEdit_13"));

        horizontalLayout_2->addWidget(lineEdit_13);


        verticalLayout_5->addLayout(horizontalLayout_2);

        horizontalLayout_15 = new QHBoxLayout();
        horizontalLayout_15->setObjectName(QString::fromUtf8("horizontalLayout_15"));
        label_15 = new QLabel(SecDialog);
        label_15->setObjectName(QString::fromUtf8("label_15"));

        horizontalLayout_15->addWidget(label_15);

        horizontalSpacer_16 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_15->addItem(horizontalSpacer_16);

        lineEdit_14 = new QLineEdit(SecDialog);
        lineEdit_14->setObjectName(QString::fromUtf8("lineEdit_14"));

        horizontalLayout_15->addWidget(lineEdit_14);


        verticalLayout_5->addLayout(horizontalLayout_15);

        horizontalLayout_16 = new QHBoxLayout();
        horizontalLayout_16->setObjectName(QString::fromUtf8("horizontalLayout_16"));
        label_16 = new QLabel(SecDialog);
        label_16->setObjectName(QString::fromUtf8("label_16"));

        horizontalLayout_16->addWidget(label_16);

        horizontalSpacer_15 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_16->addItem(horizontalSpacer_15);

        lineEdit_15 = new QLineEdit(SecDialog);
        lineEdit_15->setObjectName(QString::fromUtf8("lineEdit_15"));

        horizontalLayout_16->addWidget(lineEdit_15);


        verticalLayout_5->addLayout(horizontalLayout_16);

        frame_3 = new QFrame(SecDialog);
        frame_3->setObjectName(QString::fromUtf8("frame_3"));
        frame_3->setFrameShape(QFrame::StyledPanel);
        frame_3->setFrameShadow(QFrame::Raised);
        horizontalLayout_18 = new QHBoxLayout(frame_3);
        horizontalLayout_18->setObjectName(QString::fromUtf8("horizontalLayout_18"));
        label_18 = new QLabel(frame_3);
        label_18->setObjectName(QString::fromUtf8("label_18"));

        horizontalLayout_18->addWidget(label_18, 0, Qt::AlignHCenter);


        verticalLayout_5->addWidget(frame_3);


        verticalLayout_6->addLayout(verticalLayout_5);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        homePushButton = new QPushButton(SecDialog);
        homePushButton->setObjectName(QString::fromUtf8("homePushButton"));

        horizontalLayout->addWidget(homePushButton);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Preferred, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        calculatePushButton = new QPushButton(SecDialog);
        calculatePushButton->setObjectName(QString::fromUtf8("calculatePushButton"));

        horizontalLayout->addWidget(calculatePushButton);


        verticalLayout_6->addLayout(horizontalLayout);


        retranslateUi(SecDialog);

        QMetaObject::connectSlotsByName(SecDialog);
    } // setupUi

    void retranslateUi(QDialog *SecDialog)
    {
        SecDialog->setWindowTitle(QCoreApplication::translate("SecDialog", "Dialog", nullptr));
        label_17->setText(QCoreApplication::translate("SecDialog", "TextLabel", nullptr));
        label_14->setText(QCoreApplication::translate("SecDialog", "TextLabel", nullptr));
        label_15->setText(QCoreApplication::translate("SecDialog", "TextLabel", nullptr));
        label_16->setText(QCoreApplication::translate("SecDialog", "TextLabel", nullptr));
        label_18->setText(QCoreApplication::translate("SecDialog", "TextLabel", nullptr));
        homePushButton->setText(QCoreApplication::translate("SecDialog", "Home", nullptr));
        calculatePushButton->setText(QCoreApplication::translate("SecDialog", "Calculate", nullptr));
    } // retranslateUi

};

namespace Ui {
    class SecDialog: public Ui_SecDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SECDIALOG_H
