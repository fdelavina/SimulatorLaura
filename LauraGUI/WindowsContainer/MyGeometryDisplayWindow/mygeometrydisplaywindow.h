#ifndef MYGEOMETRYDISPLAYWINDOW_H
#define MYGEOMETRYDISPLAYWINDOW_H

#include <QWidget>



namespace Ui {
class MyGeometryDisplayWindow;
}

class MyGeometryDisplayWindow : public QWidget
{
    Q_OBJECT

public:
    explicit MyGeometryDisplayWindow(QWidget *parent = nullptr);
    ~MyGeometryDisplayWindow();

private:
    Ui::MyGeometryDisplayWindow *ui_geometry_display_window;
};

#endif // MYGEOMETRYDISPLAYWINDOW_H
