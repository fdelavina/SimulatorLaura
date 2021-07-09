#include "materialdelete.h"
#include "ui_materialdelete.h"

MaterialDelete::MaterialDelete(QWidget *parent) :
    QDialog(parent),
    ui_material_delete(new Ui::MaterialDelete)
{
    ui_material_delete->setupUi(this);
}

MaterialDelete::~MaterialDelete()
{
    delete ui_material_delete;
}
