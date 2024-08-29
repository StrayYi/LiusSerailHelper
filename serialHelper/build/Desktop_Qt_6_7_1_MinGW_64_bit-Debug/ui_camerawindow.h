/********************************************************************************
** Form generated from reading UI file 'camerawindow.ui'
**
** Created by: Qt User Interface Compiler version 6.7.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CAMERAWINDOW_H
#define UI_CAMERAWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAbstractButton>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_camerawindow
{
public:
    QWidget *video;
    QLabel *label;
    QDialogButtonBox *buttonBox;
    QToolButton *toolButton;

    void setupUi(QWidget *camerawindow)
    {
        if (camerawindow->objectName().isEmpty())
            camerawindow->setObjectName("camerawindow");
        camerawindow->resize(818, 574);
        video = new QWidget(camerawindow);
        video->setObjectName("video");
        video->setGeometry(QRect(170, 120, 511, 361));
        video->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 0, 0);"));
        label = new QLabel(camerawindow);
        label->setObjectName("label");
        label->setGeometry(QRect(390, 90, 71, 21));
        label->setStyleSheet(QString::fromUtf8("font: 11pt \"Agency FB\";"));
        buttonBox = new QDialogButtonBox(camerawindow);
        buttonBox->setObjectName("buttonBox");
        buttonBox->setGeometry(QRect(510, 500, 166, 20));
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);
        toolButton = new QToolButton(camerawindow);
        toolButton->setObjectName("toolButton");
        toolButton->setGeometry(QRect(170, 490, 61, 31));
        toolButton->setStyleSheet(QString::fromUtf8("font: 11pt \"Agency FB\";"));

        retranslateUi(camerawindow);

        QMetaObject::connectSlotsByName(camerawindow);
    } // setupUi

    void retranslateUi(QWidget *camerawindow)
    {
        camerawindow->setWindowTitle(QCoreApplication::translate("camerawindow", "Form", nullptr));
        label->setText(QCoreApplication::translate("camerawindow", "\350\247\206\351\242\221\350\277\224\351\200\201", nullptr));
        toolButton->setText(QCoreApplication::translate("camerawindow", "\346\222\255\346\224\276", nullptr));
    } // retranslateUi

};

namespace Ui {
    class camerawindow: public Ui_camerawindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CAMERAWINDOW_H
