/********************************************************************************
** Form generated from reading UI file 'winsel.ui'
**
** Created by: Qt User Interface Compiler version 6.7.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WINSEL_H
#define UI_WINSEL_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Widget
{
public:
    QHBoxLayout *horizontalLayout_2;
    QHBoxLayout *horizontalLayout;
    QPushButton *gpskey;
    QPushButton *serialkey;
    QPushButton *camerakey;

    void setupUi(QWidget *Widget)
    {
        if (Widget->objectName().isEmpty())
            Widget->setObjectName("Widget");
        Widget->resize(520, 180);
        QSizePolicy sizePolicy(QSizePolicy::Policy::Fixed, QSizePolicy::Policy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(Widget->sizePolicy().hasHeightForWidth());
        Widget->setSizePolicy(sizePolicy);
        Widget->setMinimumSize(QSize(520, 180));
        Widget->setMaximumSize(QSize(520, 180));
        Widget->setStyleSheet(QString::fromUtf8("QWidget{\n"
"	background-color:rgb(222, 222, 222);\n"
"	border-radius:20px;\n"
"}\n"
""));
        horizontalLayout_2 = new QHBoxLayout(Widget);
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        gpskey = new QPushButton(Widget);
        gpskey->setObjectName("gpskey");
        QSizePolicy sizePolicy1(QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Expanding);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(gpskey->sizePolicy().hasHeightForWidth());
        gpskey->setSizePolicy(sizePolicy1);
        gpskey->setCursor(QCursor(Qt::PointingHandCursor));
        gpskey->setStyleSheet(QString::fromUtf8("\n"
"QPushButton{\n"
"	font-size:30px;\n"
"	border:5px solid rgb(146, 231, 255);\n"
"	border-radius:20px;\n"
"	background-color: rgb(212, 255, 252);\n"
"}\n"
"QPushButton:hover{\n"
"	background-color: rgb(156, 234, 234);\n"
"}"));

        horizontalLayout->addWidget(gpskey);

        serialkey = new QPushButton(Widget);
        serialkey->setObjectName("serialkey");
        sizePolicy1.setHeightForWidth(serialkey->sizePolicy().hasHeightForWidth());
        serialkey->setSizePolicy(sizePolicy1);
        serialkey->setCursor(QCursor(Qt::PointingHandCursor));
        serialkey->setStyleSheet(QString::fromUtf8("\n"
"QPushButton{\n"
"	font-size:30px;\n"
"	border:5px solid rgb(160, 255, 168);\n"
"	border-radius:20px;\n"
"	background-color: rgb(214, 255, 197);\n"
"}\n"
"QPushButton:hover{\n"
"	background-color: rgb(169, 236, 172);\n"
"}"));
        serialkey->setCheckable(false);
        serialkey->setChecked(false);

        horizontalLayout->addWidget(serialkey);

        camerakey = new QPushButton(Widget);
        camerakey->setObjectName("camerakey");
        sizePolicy1.setHeightForWidth(camerakey->sizePolicy().hasHeightForWidth());
        camerakey->setSizePolicy(sizePolicy1);
        camerakey->setCursor(QCursor(Qt::PointingHandCursor));
        camerakey->setMouseTracking(true);
        camerakey->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	font-size:30px;\n"
"	border:5px solid rgb(255, 249, 162);\n"
"	border-radius:20px;\n"
"	background-color: rgb(251, 255, 202);\n"
"}\n"
"QPushButton:hover{\n"
"	background-color:rgb(219, 222, 150);\n"
"}"));

        horizontalLayout->addWidget(camerakey);


        horizontalLayout_2->addLayout(horizontalLayout);


        retranslateUi(Widget);

        QMetaObject::connectSlotsByName(Widget);
    } // setupUi

    void retranslateUi(QWidget *Widget)
    {
        Widget->setWindowTitle(QCoreApplication::translate("Widget", "Widget", nullptr));
        gpskey->setText(QCoreApplication::translate("Widget", "GPS", nullptr));
        serialkey->setText(QCoreApplication::translate("Widget", "SERIAL", nullptr));
        camerakey->setText(QCoreApplication::translate("Widget", "CAMERA", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Widget: public Ui_Widget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WINSEL_H
