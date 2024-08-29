#ifndef WINSEL_H
#define WINSEL_H

#include <QWidget>

QT_BEGIN_NAMESPACE
namespace Ui {
class Widget;
}
QT_END_NAMESPACE

class Widget : public QWidget
{
    Q_OBJECT

public:
    Widget(QWidget *parent = nullptr);
    ~Widget();

private:
    Ui::Widget *ui;

public slots:
    //槽函数
    void clickGpsKey();
    void clickCameraKey();
    void clickSerialKey();

};
#endif // WINSEL_H
