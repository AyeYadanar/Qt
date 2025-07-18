/********************************************************************************
** Form generated from reading UI file 'pid.ui'
**
** Created by: Qt User Interface Compiler version 5.15.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PID_H
#define UI_PID_H

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

class Ui_Pid
{
public:
    QVBoxLayout *verticalLayout_2;
    QVBoxLayout *verticalLayout;
    QFrame *frame;
    QHBoxLayout *horizontalLayout_7;
    QLabel *label_5;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label;
    QSpacerItem *horizontalSpacer_2;
    QLineEdit *lineEdit;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_2;
    QSpacerItem *horizontalSpacer_3;
    QLineEdit *lineEdit_2;
    QHBoxLayout *horizontalLayout_5;
    QLabel *label_3;
    QSpacerItem *horizontalSpacer_4;
    QLineEdit *lineEdit_3;
    QHBoxLayout *horizontalLayout_6;
    QLabel *label_4;
    QSpacerItem *horizontalSpacer_5;
    QLineEdit *lineEdit_4;
    QFrame *frame_2;
    QHBoxLayout *horizontalLayout_8;
    QLabel *label_6;
    QHBoxLayout *horizontalLayout_9;
    QLabel *label_7;
    QSpacerItem *horizontalSpacer_6;
    QLineEdit *lineEdit_5;
    QHBoxLayout *horizontalLayout_10;
    QLabel *label_8;
    QSpacerItem *horizontalSpacer_7;
    QLineEdit *lineEdit_6;
    QHBoxLayout *horizontalLayout_11;
    QLabel *label_9;
    QSpacerItem *horizontalSpacer_8;
    QLineEdit *lineEdit_7;
    QSpacerItem *verticalSpacer;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *homePushButton;
    QSpacerItem *horizontalSpacer;
    QPushButton *calculatorPushButton;

    void setupUi(QDialog *Pid)
    {
        if (Pid->objectName().isEmpty())
            Pid->setObjectName(QString::fromUtf8("Pid"));
        Pid->resize(400, 423);
        verticalLayout_2 = new QVBoxLayout(Pid);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(-1, -1, -1, 0);
        frame = new QFrame(Pid);
        frame->setObjectName(QString::fromUtf8("frame"));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        horizontalLayout_7 = new QHBoxLayout(frame);
        horizontalLayout_7->setObjectName(QString::fromUtf8("horizontalLayout_7"));
        label_5 = new QLabel(frame);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        horizontalLayout_7->addWidget(label_5, 0, Qt::AlignHCenter);


        verticalLayout->addWidget(frame);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        label = new QLabel(Pid);
        label->setObjectName(QString::fromUtf8("label"));

        horizontalLayout_3->addWidget(label);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_2);

        lineEdit = new QLineEdit(Pid);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));

        horizontalLayout_3->addWidget(lineEdit);


        verticalLayout->addLayout(horizontalLayout_3);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        label_2 = new QLabel(Pid);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        horizontalLayout_4->addWidget(label_2);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_3);

        lineEdit_2 = new QLineEdit(Pid);
        lineEdit_2->setObjectName(QString::fromUtf8("lineEdit_2"));

        horizontalLayout_4->addWidget(lineEdit_2);


        verticalLayout->addLayout(horizontalLayout_4);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        label_3 = new QLabel(Pid);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        horizontalLayout_5->addWidget(label_3);

        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_5->addItem(horizontalSpacer_4);

        lineEdit_3 = new QLineEdit(Pid);
        lineEdit_3->setObjectName(QString::fromUtf8("lineEdit_3"));

        horizontalLayout_5->addWidget(lineEdit_3);


        verticalLayout->addLayout(horizontalLayout_5);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName(QString::fromUtf8("horizontalLayout_6"));
        label_4 = new QLabel(Pid);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        horizontalLayout_6->addWidget(label_4);

        horizontalSpacer_5 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_6->addItem(horizontalSpacer_5);

        lineEdit_4 = new QLineEdit(Pid);
        lineEdit_4->setObjectName(QString::fromUtf8("lineEdit_4"));

        horizontalLayout_6->addWidget(lineEdit_4);


        verticalLayout->addLayout(horizontalLayout_6);

        frame_2 = new QFrame(Pid);
        frame_2->setObjectName(QString::fromUtf8("frame_2"));
        frame_2->setFrameShape(QFrame::StyledPanel);
        frame_2->setFrameShadow(QFrame::Raised);
        horizontalLayout_8 = new QHBoxLayout(frame_2);
        horizontalLayout_8->setObjectName(QString::fromUtf8("horizontalLayout_8"));
        label_6 = new QLabel(frame_2);
        label_6->setObjectName(QString::fromUtf8("label_6"));

        horizontalLayout_8->addWidget(label_6, 0, Qt::AlignHCenter);


        verticalLayout->addWidget(frame_2);

        horizontalLayout_9 = new QHBoxLayout();
        horizontalLayout_9->setObjectName(QString::fromUtf8("horizontalLayout_9"));
        label_7 = new QLabel(Pid);
        label_7->setObjectName(QString::fromUtf8("label_7"));

        horizontalLayout_9->addWidget(label_7);

        horizontalSpacer_6 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_9->addItem(horizontalSpacer_6);

        lineEdit_5 = new QLineEdit(Pid);
        lineEdit_5->setObjectName(QString::fromUtf8("lineEdit_5"));
        QSizePolicy sizePolicy(QSizePolicy::Minimum, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(lineEdit_5->sizePolicy().hasHeightForWidth());
        lineEdit_5->setSizePolicy(sizePolicy);

        horizontalLayout_9->addWidget(lineEdit_5);


        verticalLayout->addLayout(horizontalLayout_9);

        horizontalLayout_10 = new QHBoxLayout();
        horizontalLayout_10->setObjectName(QString::fromUtf8("horizontalLayout_10"));
        label_8 = new QLabel(Pid);
        label_8->setObjectName(QString::fromUtf8("label_8"));

        horizontalLayout_10->addWidget(label_8);

        horizontalSpacer_7 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_10->addItem(horizontalSpacer_7);

        lineEdit_6 = new QLineEdit(Pid);
        lineEdit_6->setObjectName(QString::fromUtf8("lineEdit_6"));
        sizePolicy.setHeightForWidth(lineEdit_6->sizePolicy().hasHeightForWidth());
        lineEdit_6->setSizePolicy(sizePolicy);

        horizontalLayout_10->addWidget(lineEdit_6);


        verticalLayout->addLayout(horizontalLayout_10);

        horizontalLayout_11 = new QHBoxLayout();
        horizontalLayout_11->setObjectName(QString::fromUtf8("horizontalLayout_11"));
        label_9 = new QLabel(Pid);
        label_9->setObjectName(QString::fromUtf8("label_9"));

        horizontalLayout_11->addWidget(label_9);

        horizontalSpacer_8 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_11->addItem(horizontalSpacer_8);

        lineEdit_7 = new QLineEdit(Pid);
        lineEdit_7->setObjectName(QString::fromUtf8("lineEdit_7"));
        sizePolicy.setHeightForWidth(lineEdit_7->sizePolicy().hasHeightForWidth());
        lineEdit_7->setSizePolicy(sizePolicy);

        horizontalLayout_11->addWidget(lineEdit_7);


        verticalLayout->addLayout(horizontalLayout_11);


        verticalLayout_2->addLayout(verticalLayout);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_2->addItem(verticalSpacer);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        homePushButton = new QPushButton(Pid);
        homePushButton->setObjectName(QString::fromUtf8("homePushButton"));

        horizontalLayout_2->addWidget(homePushButton);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer);

        calculatorPushButton = new QPushButton(Pid);
        calculatorPushButton->setObjectName(QString::fromUtf8("calculatorPushButton"));

        horizontalLayout_2->addWidget(calculatorPushButton);


        verticalLayout_2->addLayout(horizontalLayout_2);


        retranslateUi(Pid);

        QMetaObject::connectSlotsByName(Pid);
    } // setupUi

    void retranslateUi(QDialog *Pid)
    {
        Pid->setWindowTitle(QCoreApplication::translate("Pid", "Dialog", nullptr));
        label_5->setText(QCoreApplication::translate("Pid", "TextLabel", nullptr));
        label->setText(QCoreApplication::translate("Pid", "TextLabel", nullptr));
        label_2->setText(QCoreApplication::translate("Pid", "TextLabel", nullptr));
        label_3->setText(QCoreApplication::translate("Pid", "TextLabel", nullptr));
        label_4->setText(QCoreApplication::translate("Pid", "TextLabel", nullptr));
        label_6->setText(QCoreApplication::translate("Pid", "TextLabel", nullptr));
        label_7->setText(QCoreApplication::translate("Pid", "TextLabel", nullptr));
        label_8->setText(QCoreApplication::translate("Pid", "TextLabel", nullptr));
        label_9->setText(QCoreApplication::translate("Pid", "TextLabel", nullptr));
        homePushButton->setText(QCoreApplication::translate("Pid", "Home", nullptr));
        calculatorPushButton->setText(QCoreApplication::translate("Pid", "Calculator", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Pid: public Ui_Pid {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PID_H
