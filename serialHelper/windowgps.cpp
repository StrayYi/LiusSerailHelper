#include "windowgps.h"
#include "ui_windowgps.h"

windowGps::windowGps(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::windowGps)
{
    ui->setupUi(this);
    this->setWindowTitle("GPS测试助手");
}

windowGps::~windowGps()
{
    delete ui;
}
