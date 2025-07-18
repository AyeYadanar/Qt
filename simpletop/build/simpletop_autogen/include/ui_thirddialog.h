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
#include <QtWidgets/QFrame>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_ThirdDialog
{
public:
    QVBoxLayout *verticalLayout_3;
    QVBoxLayout *verticalLayout;
    QFrame *frame_2;
    QHBoxLayout *horizontalLayout_6;
    QLabel *label_6;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label;
    QSpacerItem *horizontalSpacer_2;
    QLineEdit *lineEdit;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_2;
    QSpacerItem *horizontalSpacer_3;
    QLineEdit *lineEdit_2;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_3;
    QSpacerItem *horizontalSpacer_4;
    QLineEdit *lineEdit_3;
    QSpacerItem *verticalSpacer;
    QFrame *frame;
    QVBoxLayout *verticalLayout_2;
    QLabel *label_5;
    QSpacerItem *verticalSpacer_2;
    QHBoxLayout *horizontalLayout_5;
    QLabel *label_4;
    QSpacerItem *horizontalSpacer_5;
    QLineEdit *lineEdit_4;
    QSpacerItem *verticalSpacer_3;
    QHBoxLayout *horizontalLayout;
    QPushButton *homePushButton;
    QSpacerItem *horizontalSpacer;
    QPushButton *calculatePushButton;

    void setupUi(QDialog *ThirdDialog)
    {
        if (ThirdDialog->objectName().isEmpty())
            ThirdDialog->setObjectName(QString::fromUtf8("ThirdDialog"));
        ThirdDialog->resize(400, 300);
        verticalLayout_3 = new QVBoxLayout(ThirdDialog);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(-1, -1, -1, 0);
        frame_2 = new QFrame(ThirdDialog);
        frame_2->setObjectName(QString::fromUtf8("frame_2"));
        frame_2->setFrameShape(QFrame::StyledPanel);
        frame_2->setFrameShadow(QFrame::Raised);
        horizontalLayout_6 = new QHBoxLayout(frame_2);
        horizontalLayout_6->setObjectName(QString::fromUtf8("horizontalLayout_6"));
        label_6 = new QLabel(frame_2);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        QFont font;
        font.setPointSize(13);
        font.setBold(true);
        label_6->setFont(font);

        horizontalLayout_6->addWidget(label_6, 0, Qt::AlignHCenter);


        verticalLayout->addWidget(frame_2);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        label = new QLabel(ThirdDialog);
        label->setObjectName(QString::fromUtf8("label"));

        horizontalLayout_2->addWidget(label);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_2);

        lineEdit = new QLineEdit(ThirdDialog);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));

        horizontalLayout_2->addWidget(lineEdit);


        verticalLayout->addLayout(horizontalLayout_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        label_2 = new QLabel(ThirdDialog);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        horizontalLayout_3->addWidget(label_2);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::MinimumExpanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_3);

        lineEdit_2 = new QLineEdit(ThirdDialog);
        lineEdit_2->setObjectName(QString::fromUtf8("lineEdit_2"));
        QSizePolicy sizePolicy(QSizePolicy::Minimum, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(lineEdit_2->sizePolicy().hasHeightForWidth());
        lineEdit_2->setSizePolicy(sizePolicy);

        horizontalLayout_3->addWidget(lineEdit_2);


        verticalLayout->addLayout(horizontalLayout_3);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        label_3 = new QLabel(ThirdDialog);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        horizontalLayout_4->addWidget(label_3);

        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_4);

        lineEdit_3 = new QLineEdit(ThirdDialog);
        lineEdit_3->setObjectName(QString::fromUtf8("lineEdit_3"));

        horizontalLayout_4->addWidget(lineEdit_3);


        verticalLayout->addLayout(horizontalLayout_4);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);

        frame = new QFrame(ThirdDialog);
        frame->setObjectName(QString::fromUtf8("frame"));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        verticalLayout_2 = new QVBoxLayout(frame);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        label_5 = new QLabel(frame);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setFont(font);

        verticalLayout_2->addWidget(label_5, 0, Qt::AlignHCenter);


        verticalLayout->addWidget(frame);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer_2);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        label_4 = new QLabel(ThirdDialog);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        horizontalLayout_5->addWidget(label_4);

        horizontalSpacer_5 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_5->addItem(horizontalSpacer_5);

        lineEdit_4 = new QLineEdit(ThirdDialog);
        lineEdit_4->setObjectName(QString::fromUtf8("lineEdit_4"));

        horizontalLayout_5->addWidget(lineEdit_4);


        verticalLayout->addLayout(horizontalLayout_5);

        verticalSpacer_3 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer_3);


        verticalLayout_3->addLayout(verticalLayout);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        homePushButton = new QPushButton(ThirdDialog);
        homePushButton->setObjectName(QString::fromUtf8("homePushButton"));

        horizontalLayout->addWidget(homePushButton);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Preferred, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        calculatePushButton = new QPushButton(ThirdDialog);
        calculatePushButton->setObjectName(QString::fromUtf8("calculatePushButton"));

        horizontalLayout->addWidget(calculatePushButton);


        verticalLayout_3->addLayout(horizontalLayout);


        retranslateUi(ThirdDialog);

        QMetaObject::connectSlotsByName(ThirdDialog);
    } // setupUi

    void retranslateUi(QDialog *ThirdDialog)
    {
        ThirdDialog->setWindowTitle(QCoreApplication::translate("ThirdDialog", "Dialog", nullptr));
        label_6->setText(QCoreApplication::translate("ThirdDialog", "TextLabel", nullptr));
        label->setText(QCoreApplication::translate("ThirdDialog", "Encoder Count", nullptr));
        label_2->setText(QCoreApplication::translate("ThirdDialog", "CPR", nullptr));
        label_3->setText(QCoreApplication::translate("ThirdDialog", "Wheel Radius  ", nullptr));
        label_5->setText(QCoreApplication::translate("ThirdDialog", "TextLabel", nullptr));
        label_4->setText(QCoreApplication::translate("ThirdDialog", "TextLabel", nullptr));
        homePushButton->setText(QCoreApplication::translate("ThirdDialog", "Home", nullptr));
        calculatePushButton->setText(QCoreApplication::translate("ThirdDialog", "Calculate", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ThirdDialog: public Ui_ThirdDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_THIRDDIALOG_H
