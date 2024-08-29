/********************************************************************************
** Form generated from reading UI file 'windowserial.ui'
**
** Created by: Qt User Interface Compiler version 6.7.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WINDOWSERIAL_H
#define UI_WINDOWSERIAL_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_windowSerial
{
public:
    QWidget *centralwidget;
    QHBoxLayout *horizontalLayout_2;
    QWidget *widget_3;
    QVBoxLayout *verticalLayout;
    QGroupBox *groupBoxComSet;
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout_5;
    QComboBox *comboBoxPorts;
    QPushButton *pushButtonUpdatePorts;
    QGridLayout *gridLayout_4;
    QLabel *labelData;
    QComboBox *comboBoxData;
    QLabel *labelStop;
    QComboBox *comboBoxComBaud;
    QComboBox *comboBoxCheck;
    QComboBox *comboBoxStop;
    QLabel *labelCheck;
    QLabel *labelBaud;
    QPushButton *pushButtonTurnOnOff;
    QPushButton *pushButtonClearAll;
    QGroupBox *groupBox;
    QLabel *label;
    QLabel *label_2;
    QWidget *widget;
    QGridLayout *gridLayout;
    QGroupBox *groupBoxRev;
    QGridLayout *gridLayout_2;
    QPlainTextEdit *TextRev;
    QWidget *widget_2;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QRadioButton *radioButton;
    QCheckBox *checkBoxPeriodicSend;
    QLineEdit *lineEditTime;
    QLabel *labelMS;
    QWidget *widget_4;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_6;
    QLabel *sendByteNum;
    QSpacerItem *horizontalSpacer_2;
    QLabel *label_3;
    QLabel *receiveByteNum;
    QSpacerItem *horizontalSpacer_4;
    QLabel *label_7;
    QGroupBox *groupBoxSend;
    QGridLayout *gridLayout_3;
    QPlainTextEdit *TextSend;
    QPushButton *pushButtonSend;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *windowSerial)
    {
        if (windowSerial->objectName().isEmpty())
            windowSerial->setObjectName("windowSerial");
        windowSerial->resize(923, 791);
        QSizePolicy sizePolicy(QSizePolicy::Policy::Preferred, QSizePolicy::Policy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(windowSerial->sizePolicy().hasHeightForWidth());
        windowSerial->setSizePolicy(sizePolicy);
        centralwidget = new QWidget(windowSerial);
        centralwidget->setObjectName("centralwidget");
        horizontalLayout_2 = new QHBoxLayout(centralwidget);
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        widget_3 = new QWidget(centralwidget);
        widget_3->setObjectName("widget_3");
        QSizePolicy sizePolicy1(QSizePolicy::Policy::Fixed, QSizePolicy::Policy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(widget_3->sizePolicy().hasHeightForWidth());
        widget_3->setSizePolicy(sizePolicy1);
        verticalLayout = new QVBoxLayout(widget_3);
        verticalLayout->setObjectName("verticalLayout");
        groupBoxComSet = new QGroupBox(widget_3);
        groupBoxComSet->setObjectName("groupBoxComSet");
        QSizePolicy sizePolicy2(QSizePolicy::Policy::Fixed, QSizePolicy::Policy::Fixed);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(groupBoxComSet->sizePolicy().hasHeightForWidth());
        groupBoxComSet->setSizePolicy(sizePolicy2);
        groupBoxComSet->setMinimumSize(QSize(200, 260));
        layoutWidget = new QWidget(groupBoxComSet);
        layoutWidget->setObjectName("layoutWidget");
        layoutWidget->setGeometry(QRect(10, 20, 181, 231));
        verticalLayout_2 = new QVBoxLayout(layoutWidget);
        verticalLayout_2->setObjectName("verticalLayout_2");
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName("horizontalLayout_5");
        comboBoxPorts = new QComboBox(layoutWidget);
        comboBoxPorts->setObjectName("comboBoxPorts");

        horizontalLayout_5->addWidget(comboBoxPorts);

        pushButtonUpdatePorts = new QPushButton(layoutWidget);
        pushButtonUpdatePorts->setObjectName("pushButtonUpdatePorts");

        horizontalLayout_5->addWidget(pushButtonUpdatePorts);


        verticalLayout_2->addLayout(horizontalLayout_5);

        gridLayout_4 = new QGridLayout();
        gridLayout_4->setObjectName("gridLayout_4");
        labelData = new QLabel(layoutWidget);
        labelData->setObjectName("labelData");

        gridLayout_4->addWidget(labelData, 1, 0, 1, 1);

        comboBoxData = new QComboBox(layoutWidget);
        comboBoxData->addItem(QString());
        comboBoxData->addItem(QString());
        comboBoxData->addItem(QString());
        comboBoxData->addItem(QString());
        comboBoxData->setObjectName("comboBoxData");

        gridLayout_4->addWidget(comboBoxData, 1, 1, 1, 1);

        labelStop = new QLabel(layoutWidget);
        labelStop->setObjectName("labelStop");

        gridLayout_4->addWidget(labelStop, 2, 0, 1, 1);

        comboBoxComBaud = new QComboBox(layoutWidget);
        comboBoxComBaud->addItem(QString());
        comboBoxComBaud->addItem(QString());
        comboBoxComBaud->addItem(QString());
        comboBoxComBaud->addItem(QString());
        comboBoxComBaud->addItem(QString());
        comboBoxComBaud->addItem(QString());
        comboBoxComBaud->addItem(QString());
        comboBoxComBaud->addItem(QString());
        comboBoxComBaud->addItem(QString());
        comboBoxComBaud->addItem(QString());
        comboBoxComBaud->addItem(QString());
        comboBoxComBaud->addItem(QString());
        comboBoxComBaud->setObjectName("comboBoxComBaud");
        comboBoxComBaud->setEnabled(true);

        gridLayout_4->addWidget(comboBoxComBaud, 0, 1, 1, 1);

        comboBoxCheck = new QComboBox(layoutWidget);
        comboBoxCheck->addItem(QString());
        comboBoxCheck->addItem(QString());
        comboBoxCheck->addItem(QString());
        comboBoxCheck->addItem(QString());
        comboBoxCheck->addItem(QString());
        comboBoxCheck->setObjectName("comboBoxCheck");

        gridLayout_4->addWidget(comboBoxCheck, 3, 1, 1, 1);

        comboBoxStop = new QComboBox(layoutWidget);
        comboBoxStop->addItem(QString());
        comboBoxStop->addItem(QString());
        comboBoxStop->addItem(QString());
        comboBoxStop->setObjectName("comboBoxStop");

        gridLayout_4->addWidget(comboBoxStop, 2, 1, 1, 1);

        labelCheck = new QLabel(layoutWidget);
        labelCheck->setObjectName("labelCheck");

        gridLayout_4->addWidget(labelCheck, 3, 0, 1, 1);

        labelBaud = new QLabel(layoutWidget);
        labelBaud->setObjectName("labelBaud");

        gridLayout_4->addWidget(labelBaud, 0, 0, 1, 1);


        verticalLayout_2->addLayout(gridLayout_4);

        pushButtonTurnOnOff = new QPushButton(layoutWidget);
        pushButtonTurnOnOff->setObjectName("pushButtonTurnOnOff");

        verticalLayout_2->addWidget(pushButtonTurnOnOff);

        pushButtonClearAll = new QPushButton(layoutWidget);
        pushButtonClearAll->setObjectName("pushButtonClearAll");

        verticalLayout_2->addWidget(pushButtonClearAll);


        verticalLayout->addWidget(groupBoxComSet);

        groupBox = new QGroupBox(widget_3);
        groupBox->setObjectName("groupBox");
        label = new QLabel(groupBox);
        label->setObjectName("label");
        label->setGeometry(QRect(10, 50, 151, 71));

        verticalLayout->addWidget(groupBox);

        label_2 = new QLabel(widget_3);
        label_2->setObjectName("label_2");
        label_2->setStyleSheet(QString::fromUtf8("QLabel{\n"
"	font: 20pt \"\346\245\267\344\275\223\";\n"
"	color:rgb(186, 186, 186);\n"
"	background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:0, stop:0 rgba(0, 0, 0, 255), stop:1 rgba(255, 255, 255, 255));\n"
"}\n"
""));

        verticalLayout->addWidget(label_2);

        verticalLayout->setStretch(0, 10);
        verticalLayout->setStretch(1, 10);
        verticalLayout->setStretch(2, 1);

        horizontalLayout_2->addWidget(widget_3);

        widget = new QWidget(centralwidget);
        widget->setObjectName("widget");
        widget->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        gridLayout = new QGridLayout(widget);
        gridLayout->setObjectName("gridLayout");
        groupBoxRev = new QGroupBox(widget);
        groupBoxRev->setObjectName("groupBoxRev");
        gridLayout_2 = new QGridLayout(groupBoxRev);
        gridLayout_2->setObjectName("gridLayout_2");
        TextRev = new QPlainTextEdit(groupBoxRev);
        TextRev->setObjectName("TextRev");
        TextRev->setReadOnly(false);

        gridLayout_2->addWidget(TextRev, 0, 0, 1, 1);


        gridLayout->addWidget(groupBoxRev, 0, 0, 2, 2);

        widget_2 = new QWidget(widget);
        widget_2->setObjectName("widget_2");
        horizontalLayout = new QHBoxLayout(widget_2);
        horizontalLayout->setObjectName("horizontalLayout");
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        radioButton = new QRadioButton(widget_2);
        radioButton->setObjectName("radioButton");

        horizontalLayout->addWidget(radioButton);

        checkBoxPeriodicSend = new QCheckBox(widget_2);
        checkBoxPeriodicSend->setObjectName("checkBoxPeriodicSend");
        checkBoxPeriodicSend->setCheckable(true);

        horizontalLayout->addWidget(checkBoxPeriodicSend);

        lineEditTime = new QLineEdit(widget_2);
        lineEditTime->setObjectName("lineEditTime");
        sizePolicy2.setHeightForWidth(lineEditTime->sizePolicy().hasHeightForWidth());
        lineEditTime->setSizePolicy(sizePolicy2);
        lineEditTime->setMaximumSize(QSize(80, 16777215));

        horizontalLayout->addWidget(lineEditTime);

        labelMS = new QLabel(widget_2);
        labelMS->setObjectName("labelMS");

        horizontalLayout->addWidget(labelMS);


        gridLayout->addWidget(widget_2, 2, 0, 1, 1);

        widget_4 = new QWidget(widget);
        widget_4->setObjectName("widget_4");
        horizontalLayout_3 = new QHBoxLayout(widget_4);
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        label_6 = new QLabel(widget_4);
        label_6->setObjectName("label_6");
        label_6->setStyleSheet(QString::fromUtf8("font: 12pt \"\345\215\216\346\226\207\346\226\260\351\255\217\";\n"
"color: rgb(74, 74, 74);"));

        horizontalLayout_3->addWidget(label_6);

        sendByteNum = new QLabel(widget_4);
        sendByteNum->setObjectName("sendByteNum");

        horizontalLayout_3->addWidget(sendByteNum);

        horizontalSpacer_2 = new QSpacerItem(128, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_2);

        label_3 = new QLabel(widget_4);
        label_3->setObjectName("label_3");
        label_3->setStyleSheet(QString::fromUtf8("font: 12pt \"\345\215\216\346\226\207\346\226\260\351\255\217\";\n"
"color: rgb(74, 74, 74);"));

        horizontalLayout_3->addWidget(label_3);

        receiveByteNum = new QLabel(widget_4);
        receiveByteNum->setObjectName("receiveByteNum");

        horizontalLayout_3->addWidget(receiveByteNum);

        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_4);

        label_7 = new QLabel(widget_4);
        label_7->setObjectName("label_7");
        label_7->setStyleSheet(QString::fromUtf8("font: 15pt \"\345\215\216\346\226\207\346\226\260\351\255\217\" ;\n"
"color: rgb(117, 117, 117);"));

        horizontalLayout_3->addWidget(label_7);


        gridLayout->addWidget(widget_4, 4, 0, 1, 2);

        groupBoxSend = new QGroupBox(widget);
        groupBoxSend->setObjectName("groupBoxSend");
        gridLayout_3 = new QGridLayout(groupBoxSend);
        gridLayout_3->setObjectName("gridLayout_3");
        TextSend = new QPlainTextEdit(groupBoxSend);
        TextSend->setObjectName("TextSend");
        TextSend->setEnabled(true);

        gridLayout_3->addWidget(TextSend, 0, 0, 2, 2);

        pushButtonSend = new QPushButton(groupBoxSend);
        pushButtonSend->setObjectName("pushButtonSend");
        sizePolicy2.setHeightForWidth(pushButtonSend->sizePolicy().hasHeightForWidth());
        pushButtonSend->setSizePolicy(sizePolicy2);
        pushButtonSend->setCheckable(false);
        pushButtonSend->setChecked(false);
        pushButtonSend->setAutoDefault(false);

        gridLayout_3->addWidget(pushButtonSend, 1, 1, 1, 1);


        gridLayout->addWidget(groupBoxSend, 3, 0, 1, 2);

        gridLayout->setRowStretch(0, 10);
        gridLayout->setRowStretch(1, 2);
        gridLayout->setRowStretch(2, 1);
        gridLayout->setRowStretch(3, 6);
        gridLayout->setRowStretch(4, 1);

        horizontalLayout_2->addWidget(widget);

        horizontalLayout_2->setStretch(0, 7);
        horizontalLayout_2->setStretch(1, 3);
        windowSerial->setCentralWidget(centralwidget);
        menubar = new QMenuBar(windowSerial);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 923, 25));
        windowSerial->setMenuBar(menubar);
        statusbar = new QStatusBar(windowSerial);
        statusbar->setObjectName("statusbar");
        windowSerial->setStatusBar(statusbar);

        retranslateUi(windowSerial);

        comboBoxData->setCurrentIndex(3);
        comboBoxComBaud->setCurrentIndex(3);
        pushButtonSend->setDefault(false);


        QMetaObject::connectSlotsByName(windowSerial);
    } // setupUi

    void retranslateUi(QMainWindow *windowSerial)
    {
        windowSerial->setWindowTitle(QCoreApplication::translate("windowSerial", "MainWindow", nullptr));
        groupBoxComSet->setTitle(QCoreApplication::translate("windowSerial", "\344\270\262\345\217\243\350\256\276\347\275\256", nullptr));
        pushButtonUpdatePorts->setText(QCoreApplication::translate("windowSerial", "\345\210\267\346\226\260", nullptr));
        labelData->setText(QCoreApplication::translate("windowSerial", "\346\225\260\346\215\256\344\275\215", nullptr));
        comboBoxData->setItemText(0, QCoreApplication::translate("windowSerial", "5", nullptr));
        comboBoxData->setItemText(1, QCoreApplication::translate("windowSerial", "6", nullptr));
        comboBoxData->setItemText(2, QCoreApplication::translate("windowSerial", "7", nullptr));
        comboBoxData->setItemText(3, QCoreApplication::translate("windowSerial", "8", nullptr));

        labelStop->setText(QCoreApplication::translate("windowSerial", "\345\201\234\346\255\242\344\275\215", nullptr));
        comboBoxComBaud->setItemText(0, QCoreApplication::translate("windowSerial", "1200", nullptr));
        comboBoxComBaud->setItemText(1, QCoreApplication::translate("windowSerial", "2400", nullptr));
        comboBoxComBaud->setItemText(2, QCoreApplication::translate("windowSerial", "4800", nullptr));
        comboBoxComBaud->setItemText(3, QCoreApplication::translate("windowSerial", "9600", nullptr));
        comboBoxComBaud->setItemText(4, QCoreApplication::translate("windowSerial", "19200", nullptr));
        comboBoxComBaud->setItemText(5, QCoreApplication::translate("windowSerial", "38400", nullptr));
        comboBoxComBaud->setItemText(6, QCoreApplication::translate("windowSerial", "57600", nullptr));
        comboBoxComBaud->setItemText(7, QCoreApplication::translate("windowSerial", "74880", nullptr));
        comboBoxComBaud->setItemText(8, QCoreApplication::translate("windowSerial", "115200", nullptr));
        comboBoxComBaud->setItemText(9, QCoreApplication::translate("windowSerial", "230400", nullptr));
        comboBoxComBaud->setItemText(10, QCoreApplication::translate("windowSerial", "460800", nullptr));
        comboBoxComBaud->setItemText(11, QCoreApplication::translate("windowSerial", "576000", nullptr));

        comboBoxCheck->setItemText(0, QCoreApplication::translate("windowSerial", "None", nullptr));
        comboBoxCheck->setItemText(1, QCoreApplication::translate("windowSerial", "Even", nullptr));
        comboBoxCheck->setItemText(2, QCoreApplication::translate("windowSerial", "Odd", nullptr));
        comboBoxCheck->setItemText(3, QCoreApplication::translate("windowSerial", "Mark", nullptr));
        comboBoxCheck->setItemText(4, QCoreApplication::translate("windowSerial", "Space", nullptr));

        comboBoxStop->setItemText(0, QCoreApplication::translate("windowSerial", "1", nullptr));
        comboBoxStop->setItemText(1, QCoreApplication::translate("windowSerial", "1.5", nullptr));
        comboBoxStop->setItemText(2, QCoreApplication::translate("windowSerial", "2", nullptr));

        labelCheck->setText(QCoreApplication::translate("windowSerial", "\346\240\241\351\252\214\344\275\215", nullptr));
        labelBaud->setText(QCoreApplication::translate("windowSerial", "\346\263\242\347\211\271\347\216\207", nullptr));
        pushButtonTurnOnOff->setText(QCoreApplication::translate("windowSerial", "\346\211\223\345\274\200\344\270\262\345\217\243", nullptr));
        pushButtonClearAll->setText(QCoreApplication::translate("windowSerial", "\346\270\205\347\251\272\346\225\260\346\215\256", nullptr));
        groupBox->setTitle(QCoreApplication::translate("windowSerial", "\345\276\205\346\224\276\345\214\272\345\237\237", nullptr));
        label->setText(QCoreApplication::translate("windowSerial", "<html><head/><body><p>\350\277\231\345\235\227\345\214\272\345\237\237\350\277\230\346\262\241\346\203\263\345\245\275\350\246\201\346\224\276\344\273\200\344\271\210</p><p>\344\273\245\345\220\216\346\234\211\346\226\260\347\232\204\351\234\200\346\261\202\345\206\215\344\275\277\347\224\250\345\220\247</p></body></html>", nullptr));
        label_2->setText(QCoreApplication::translate("windowSerial", "<html><head/><body><p>\345\210\230\347\246\271\346\203\234\345\207\272\345\223\201</p></body></html>", nullptr));
        groupBoxRev->setTitle(QCoreApplication::translate("windowSerial", "\346\216\245\346\224\266\345\214\272", nullptr));
        TextRev->setPlainText(QString());
        radioButton->setText(QCoreApplication::translate("windowSerial", "\345\244\232\350\241\214\345\217\221\351\200\201", nullptr));
        checkBoxPeriodicSend->setText(QCoreApplication::translate("windowSerial", "\345\221\250\346\234\237\345\217\221\351\200\201", nullptr));
        lineEditTime->setText(QCoreApplication::translate("windowSerial", "1000", nullptr));
        labelMS->setText(QCoreApplication::translate("windowSerial", "ms", nullptr));
        label_6->setText(QCoreApplication::translate("windowSerial", "\345\217\221\351\200\201\357\274\232", nullptr));
        sendByteNum->setText(QCoreApplication::translate("windowSerial", "0", nullptr));
        label_3->setText(QCoreApplication::translate("windowSerial", "\346\216\245\346\224\266\357\274\232", nullptr));
        receiveByteNum->setText(QCoreApplication::translate("windowSerial", "0", nullptr));
        label_7->setText(QCoreApplication::translate("windowSerial", "\347\245\235\344\275\240\345\244\251\345\244\251\345\274\200\345\277\203", nullptr));
        groupBoxSend->setTitle(QCoreApplication::translate("windowSerial", "\345\217\221\351\200\201\345\214\272", nullptr));
        TextSend->setPlainText(QString());
        pushButtonSend->setText(QCoreApplication::translate("windowSerial", "\345\217\221\351\200\201", nullptr));
    } // retranslateUi

};

namespace Ui {
    class windowSerial: public Ui_windowSerial {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WINDOWSERIAL_H
