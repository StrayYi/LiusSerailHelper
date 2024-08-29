#ifndef WINDOWGPS_H
#define WINDOWGPS_H

#include <QMainWindow>

namespace Ui {
class windowGps;
}


class windowGps : public QMainWindow
{
    Q_OBJECT

public:
    explicit windowGps(QWidget *parent = nullptr);
    ~windowGps();

private:
    Ui::windowGps *ui;
};

#endif // WINDOWGPS_H
