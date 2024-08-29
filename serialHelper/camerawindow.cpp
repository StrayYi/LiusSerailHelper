#include "camerawindow.h"
#include "ui_camerawindow.h"

camerawindow::camerawindow(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::camerawindow)
{
    ui->setupUi(this);
}

camerawindow::~camerawindow()
{
    delete ui;
}
