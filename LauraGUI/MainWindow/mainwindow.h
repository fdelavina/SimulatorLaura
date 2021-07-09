#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "globalLib/Global/globalLib.h"

#include "Material/MaterialCreate/materialcreate.h"
#include "Material/MaterialDelete/materialdelete.h"
#include "Material/MaterialSet/materialset.h"
#include "Material/MaterialPlot/materialplot.h"

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
    Ui::MainWindow *ui_mainWindow;

    void setConnect();

private slots:

    void setMaterialClickBtn();
    void createMaterialClickBtn();
    void deleteMaterialClickBtn();
    void plotMaterialClickBtn();

};
#endif // MAINWINDOW_H
