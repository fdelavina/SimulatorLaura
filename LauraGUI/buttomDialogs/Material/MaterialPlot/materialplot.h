#ifndef MATERIALPLOT_H
#define MATERIALPLOT_H

#include <QDialog>
#include "globalLib/Global/globalLib.h"

namespace Ui {
class MaterialPlot;
}

class LAURAGUISHARED_EXPORT MaterialPlot : public QDialog
{
    Q_OBJECT

public:
    explicit MaterialPlot(QWidget *parent = nullptr);
    ~MaterialPlot();

private:
    Ui::MaterialPlot *ui_material_plot;
};

#endif // MATERIALPLOT_H
