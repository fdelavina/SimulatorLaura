#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "globalLib/Global/globalLib.h"

QT_BEGIN_NAMESPACE
namespace  Ui
{
    class LAURAGUISHARED_EXPORT MainWindow;
}
QT_END_NAMESPACE

class LAURAGUISHARED_EXPORT MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private:
    Ui::MainWindow *ui;
};
#endif // MAINWINDOW_H
