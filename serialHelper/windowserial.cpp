#include "windowserial.h"
#include "ui_windowserial.h"
#include"QDebug"
#include<QMessageBox>
#include<QTime>

windowSerial::windowSerial(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::windowSerial)
{
    ui->setupUi(this);
    //初始化界面信息以及相关数据
    this->initSerailPorts();


    //创建端口
    MyCom = new QSerialPort();          //创建唯一端口
    // ui->comboBoxPorts->
    autoRefreshPortTimer=new QTimer;
    connect(this->autoRefreshPortTimer, SIGNAL(timeout()), this, SLOT(autoRefrePortTimerTimeOut()));
    connect(this->autoSendTimer, SIGNAL(timeout()), this, SLOT(autoSendTimerTimeOut()));

    //信号与槽绑定
    connect(this->MyCom,SIGNAL(readyRead()),this,SLOT(serialReceiveData()));
    connect(ui->pushButtonSend,SIGNAL(clicked(bool)),this,SLOT(evButtonSend()));
    connect(ui->pushButtonClearAll,SIGNAL(clicked(bool)),this,SLOT(evButtonClearAll()));
    connect(ui->pushButtonTurnOnOff,SIGNAL(clicked(bool)),this,SLOT(evButtonTurnOnOff()));
    connect(ui->pushButtonUpdatePorts,SIGNAL(clicked(bool)),this,SLOT(evButtonUpdatePorts()));
    connect(ui->pushButtonSend,SIGNAL(released(bool)),this,SLOT(evButtonSend()));


    autoRefreshPortTimer->start(50);
}

windowSerial::~windowSerial()
{
    delete MyCom;
    delete ui;
}

/**********************************
* 函数名称:
* 功能描述:
* 参数说明:
* 返回值:
***********************************/
void windowSerial::evButtonSend(){
    QString data = ui->TextSend->toPlainText();
    this->sendCount+=data.size();
    ui->sendByteNum->setNum(this->sendCount);
    this->MyCom->write(data.toUtf8());
}

/**********************************
* 函数名称:
* 功能描述:定时发送信息
* 参数说明:
* 返回值:
***********************************/
void windowSerial::autoSendTimerTimeOut(){

}

/**********************************
* 函数名称:
* 功能描述:定时刷新端口
* 参数说明:
* 返回值:
***********************************/
void windowSerial::autoRefrePortTimerTimeOut(){
    QStringList serialPortName;
    /* 添加新插入的端口到列表中 */
    foreach (const QSerialPortInfo &info, QSerialPortInfo::availablePorts()) {
        serialPortName << info.portName();
        //qDebug()<<"get port name"<<info.portName();
        if(ui->comboBoxPorts->findText(info.portName()) == -1){
            ui->comboBoxPorts->addItem(info.portName());
        }
    }

    /* 移除已拔出的端口 */
    QStringList ret;
    for(int i = 0; i < ui->comboBoxPorts->count(); i++){
        ret = serialPortName.filter(ui->comboBoxPorts->itemText(i));
        if(ret.isEmpty() == true){
            ui->comboBoxPorts->removeItem(i);
        }
    }
}

/**********************************
* 函数名称:void evButtonClearAll();
* 功能描述:清空数据按键槽函数
* 参数说明:
* 返回值:
***********************************/
void windowSerial::evButtonClearAll(){
    ui->TextRev->clear();
    this->sendCount=this->receiveCount=0;
    ui->sendByteNum->setNum(this->sendCount);
    ui->receiveByteNum->setNum(this->receiveCount);
}

/**********************************
* 函数名称:serial
* 功能描述:
* 参数说明:
* 返回值:
***********************************/
void windowSerial::serialReceiveData()
{
    qDebug()<<"received\n";
    // QByteArray array = this->MyCom->readAll();
    // this->receiveCount += array.size();
    //接收到的字符串数据
    QString revString=this->MyCom->readAll();

    //创建一个文本光标对象指向接收文本框
    QTextCursor tc = ui->TextRev->textCursor();
    tc.movePosition(QTextCursor::End);
    //把文本位置插入文本框中
    tc.insertText(revString);

    this->receiveCount += revString.size();
    ui->receiveByteNum->setNum(this->receiveCount);
}

/**********************************
* 函数名称:
* 功能描述:获取当前端口信息，并更新当前端口号
* 参数说明:无
* 返回值:无
***********************************/
void windowSerial::updateAvailablePorts(){
    //清空原本的端口信息
    ui->comboBoxPorts->clear();

    //读取串口信息
    portStringList.clear();
    const auto infos = QSerialPortInfo::availablePorts();
    for (const QSerialPortInfo &info : infos)
        portStringList << info.portName();
    ui->comboBoxPorts->addItems(portStringList);
}


/**********************************
* 函数名称:
* 功能描述:串口更新按键槽函数
* 参数说明:
* 返回值:
***********************************/
void windowSerial::evButtonUpdatePorts(){
    this->updateAvailablePorts();
}

/**********************************
* 功能描述:对基本的串口信息进行初始化
* 参数说明:无
* 返回值:无
***********************************/
void windowSerial::initSerailPorts(){
    //初始化发送接收计数
    this->sendCount=this->receiveCount=0;
    //设置窗口标题
    this->setWindowTitle("串口调试助手");
    //更新可获取的端口
    this->updateAvailablePorts();

    //更新其他串口设置
    QStringList baudList;   //波特率
    QStringList parityList; //校验位
    QStringList dataBitsList;   //数据位
    QStringList stopBitsList;   //停止位
    // 波特率    //波特率默认选择下拉第三项：9600
    baudList<<"1200"<<"2400"<<"4800"<<"9600"
             <<"14400"<<"19200"<<"38400"<<"56000"
             <<"57600"<<"115200";
    ui->comboBoxComBaud->addItems(baudList);
    ui->comboBoxComBaud->setCurrentIndex(3);
    // 校验      //校验默认选择无
    parityList<<"无"<<"奇"<<"偶";
    ui->comboBoxCheck->addItems(parityList);
    ui->comboBoxCheck->setCurrentIndex(0);
    // 数据位      //数据位默认选择8位
    dataBitsList<<"5"<<"6"<<"7"<<"8";
    ui->comboBoxData->addItems(dataBitsList);
    ui->comboBoxData->setCurrentIndex(3);
    // 停止位      //停止位默认选择1位
    stopBitsList<<"1"<<"2";
    ui->comboBoxStop->addItems(stopBitsList);
    ui->comboBoxStop->setCurrentIndex(0);
}




/***********************************************************
 *打开或关闭串口按钮槽函数
 * 1.从控件获取串口初始化信息包括：
 *  1.1 波特率、数据位、停止位、校验方式，端口号
 * 2.初始化串口
 * 3.打开串口
 *  3.1 打开成功，将按钮文字设置为“关闭串口”
 *  3.2 打开失败，弹出错误消息框
 *  3.3 处理相应控件
 * 4.关闭串口
 *  4.1 将按钮文字设置为“打开串口”
 *  4.2 处理相应控件
 **********************************************************/
void windowSerial::evButtonTurnOnOff(){
    QSerialPort::BaudRate CombaudRate;
    QSerialPort::DataBits ComdataBits;
    QSerialPort::StopBits ComstopBits;
    QSerialPort::Parity   ComParity;

    //获取波特率
    {
    if(ui->comboBoxComBaud->currentText()=="1200")
    {
        CombaudRate = QSerialPort::Baud1200;
    }
    else if(ui->comboBoxComBaud->currentText()=="2400")
    {
        CombaudRate = QSerialPort::Baud2400;
    }
    else if(ui->comboBoxComBaud->currentText()=="4800")
    {
        CombaudRate = QSerialPort::Baud4800;
    }
    else if(ui->comboBoxComBaud->currentText()=="9600")
    {
        CombaudRate = QSerialPort::Baud9600;
    }
    else if(ui->comboBoxComBaud->currentText()=="19200")
    {
        CombaudRate = QSerialPort::Baud19200;
    }
    else if(ui->comboBoxComBaud->currentText()=="38400")
    {
        CombaudRate = QSerialPort::Baud38400;
    }
    else if(ui->comboBoxComBaud->currentText()=="57600")
    {
        CombaudRate = QSerialPort::Baud57600;
    }
    else if(ui->comboBoxComBaud->currentText()=="115200")
    {
        CombaudRate = QSerialPort::Baud115200;
    }
    else
    {
        CombaudRate = QSerialPort::Baud115200;
    }
    }

    //获取数据位
    {
    if(ui->comboBoxData->currentText()=="5")
    {
        ComdataBits = QSerialPort::Data5;
    }
    else if(ui->comboBoxData->currentText()=="6")
    {
        ComdataBits = QSerialPort::Data6;
    }
    else if(ui->comboBoxData->currentText()=="7")
    {
        ComdataBits = QSerialPort::Data7;
    }
    else if(ui->comboBoxData->currentText()=="8")
    {
        ComdataBits = QSerialPort::Data8;
    }
    else
    {
        ComdataBits = QSerialPort::Data8;
    }
    }

    //获取停止位
    {
    if(ui->comboBoxStop->currentText()=="1")
    {
        ComstopBits = QSerialPort::OneStop;
    }
    else if(ui->comboBoxStop->currentText()=="1.5")
    {
        ComstopBits = QSerialPort::OneAndHalfStop;
    }
    if(ui->comboBoxStop->currentText()=="2")
    {
        ComstopBits = QSerialPort::TwoStop;
    }
    else
    {
        ComstopBits = QSerialPort::OneStop;
    }
    }

    //获取校验方式
    {
    if(ui->comboBoxCheck->currentText()=="None")
    {
        ComParity = QSerialPort::NoParity;
    }
    else if(ui->comboBoxCheck->currentText()=="Even")
    {
        ComParity = QSerialPort::EvenParity;
    }
    else if(ui->comboBoxCheck->currentText()=="Odd")
    {
        ComParity = QSerialPort::OddParity;
    }
    else if(ui->comboBoxCheck->currentText()=="Space")
    {
        ComParity = QSerialPort::SpaceParity;
    }
    else if(ui->comboBoxCheck->currentText()=="Mark")
    {
        ComParity = QSerialPort::MarkParity;
    }
    else
    {
        ComParity = QSerialPort::NoParity;
    }
    }

    //获取端口号
    QString spTxt = ui->comboBoxPorts->currentText();
    spTxt = spTxt.section(':', 0, 0);//过滤掉:后面的信息，只留下COMx

    //初始化串口：设置端口号，波特率，数据位，停止位，校验方式等
    MyCom->setBaudRate(CombaudRate);
    MyCom->setDataBits(ComdataBits);
    MyCom->setStopBits(ComstopBits);
    MyCom->setParity(ComParity);
    MyCom->setPortName(spTxt);   //MyCom.setPortName(ui->comboBoxNo->currentText());

    //打开串口
    if(ui->pushButtonTurnOnOff->text() == "打开串口")
    {
        bool ComFlag;
        ComFlag = MyCom->open(QIODevice::ReadWrite);
        if(ComFlag == true)//串口打开成功
        {
            //串口下拉框设置为不可选
            ui->comboBoxCheck->setEnabled(false);
            ui->comboBoxComBaud->setEnabled(false);
            ui->comboBoxData->setEnabled(false);
            ui->comboBoxPorts->setEnabled(false);
            ui->comboBoxStop->setEnabled(false);

            //使能相应按钮等
            ui->pushButtonSend->setEnabled(true);
            ui->checkBoxPeriodicSend->setEnabled(true);
            ui->lineEditTime->setEnabled(true);
            ui->pushButtonTurnOnOff->setText("关闭串口");
        }
        else //打开失败，弹出窗口提示！
        {
            QMessageBox::critical(this, "错误提示", "串口打开失败，该端口可能被占用或不存在！\r\nLinux系统可能为当前用户无串口访问权限！");
        }
    }
    else
    {
        MyCom->close();
        ui->pushButtonTurnOnOff->setText("打开串口");
        ui->comboBoxCheck->setEnabled(true);
        ui->comboBoxComBaud->setEnabled(true);
        ui->comboBoxData->setEnabled(true);
        ui->comboBoxPorts->setEnabled(true);
        ui->comboBoxStop->setEnabled(true);

        //使相应的按钮不可用
        ui->pushButtonSend->setEnabled(false);
        ui->checkBoxPeriodicSend->setChecked(false);//取消选中
        ui->checkBoxPeriodicSend->setEnabled(false);
        ui->lineEditTime->setEnabled(false);
    }
}

