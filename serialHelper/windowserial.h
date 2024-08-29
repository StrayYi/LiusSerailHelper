#ifndef WINDOWSERIAL_H
#define WINDOWSERIAL_H

#include <QMainWindow>
#include <QSerialPort>
#include <QSerialPortInfo>
#include <QStringList>
#include <windows.h>
#include <windowsx.h>
#include <dbt.h>
#include <QTimer>

/***********************************************
*   类描述  :创建一个串口调试助手的窗口
*功能实现思路 :
*           1.实现界面UI
*           2.添加qt内置串口模块
*           3.创建事件函数
*               (1)搜索端口
*               (2)串口数据初始化
*               (3)打开串口点击事件
*               (4)文本框显示串口数据
*               (5)设置发送代码按键
*           4.测试
************************************************/

namespace Ui {
class windowSerial;
}

class windowSerial : public QMainWindow
{
    Q_OBJECT

public:
    QSerialPort *MyCom;
    QStringList portStringList;
    int sendCount;
    int receiveCount;

    explicit windowSerial(QWidget *parent = nullptr);
    ~windowSerial();
protected:
    // bool nativeEvent(const QByteArray &eventType, void *message, long *result);

public slots:
    void evButtonTurnOnOff();   //串口打开关闭按键
    void evButtonClearAll();    //清空数据按键
    void evButtonSend();        //发送按键
    void evButtonUpdatePorts(); //更新串口
    void serialReceiveData();   //接收并打印串口信息

    void autoRefrePortTimerTimeOut();   //定时刷新端口
    void autoSendTimerTimeOut();        //定时发送时钟

private:
    Ui::windowSerial *ui;
    QTimer *autoRefreshPortTimer;               //定时刷新串口定时器
    QTimer *autoSendTimer;                      //定时发送定时器

    void initSerailPorts();    //对基本的串口信息进行初始化
    void updateAvailablePorts();    //更新端口
};

#endif // WINDOWSERIAL_H
