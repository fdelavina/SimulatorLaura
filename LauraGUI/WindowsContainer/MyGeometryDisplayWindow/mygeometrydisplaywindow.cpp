#include "mygeometrydisplaywindow.h"
#include "ui_mygeometrydisplaywindow.h"



MyGeometryDisplayWindow::MyGeometryDisplayWindow(QWidget *parent) :
    QWidget(parent),
    ui_geometry_display_window(new Ui::MyGeometryDisplayWindow)
{
    ui_geometry_display_window->setupUi(this);
}

MyGeometryDisplayWindow::~MyGeometryDisplayWindow()
{
    delete ui_geometry_display_window;
}
