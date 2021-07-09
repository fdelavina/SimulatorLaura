#include "materialset.h"
#include "ui_materialset.h"

MaterialSet::MaterialSet(QWidget *parent) :
    QDialog(parent),
    ui_materialSet(new Ui::MaterialSet)
{
    ui_materialSet->setupUi(this);
}

MaterialSet::~MaterialSet()
{
    delete ui_materialSet;
}
