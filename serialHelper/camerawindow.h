#ifndef CAMERAWINDOW_H
#define CAMERAWINDOW_H

#include <QWidget>

namespace Ui {
class camerawindow;
}

class camerawindow : public QWidget
{
    Q_OBJECT

public:
    explicit camerawindow(QWidget *parent = nullptr);
    ~camerawindow();

private:
    Ui::camerawindow *ui;
};

#endif // CAMERAWINDOW_H
