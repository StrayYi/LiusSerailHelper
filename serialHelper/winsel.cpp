#include "winsel.h"
#include "ui_winsel.h"
#include "QPushButton"
#include"QMessageBox"
#include"windowgps.h"
#include"windowserial.h"
#include"camerawindow.h"

Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    ui->setupUi(this);
    this->setWindowTitle("请选择你想使用的功能");
    connect(ui->gpskey,SIGNAL(clicked(bool)),this,SLOT(clickGpsKey()));
    connect(ui->serialkey,SIGNAL(clicked(bool)),this,SLOT(clickSerialKey()));
    connect(ui->camerakey,SIGNAL(clicked(bool)),this,SLOT(clickCameraKey()));
}

Widget::~Widget()
{
    delete ui;
}

void Widget::clickGpsKey(){
    windowGps *wingps=new windowGps();
    wingps->show();
}
void Widget::clickCameraKey(){
    camerawindow *camwin=new camerawindow();
    camwin->show();
}
void Widget::clickSerialKey(){
    windowSerial *winserial=new windowSerial();
    winserial->show();
}

