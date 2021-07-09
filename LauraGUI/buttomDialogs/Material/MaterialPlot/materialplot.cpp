#include "materialplot.h"
#include "ui_materialplot.h"

MaterialPlot::MaterialPlot(QWidget *parent) :
    QDialog(parent),
    ui_material_plot(new Ui::MaterialPlot)
{
    ui_material_plot->setupUi(this);
}

MaterialPlot::~MaterialPlot()
{
    delete ui_material_plot;
}
