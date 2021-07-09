#include "materialcreate.h"
#include "ui_materialcreate.h"

MaterialCreate::MaterialCreate(QWidget *parent) :
    QDialog(parent),
    ui_material_create(new Ui::MaterialCreate)
{
    ui_material_create->setupUi(this);
}

MaterialCreate::~MaterialCreate()
{
    delete ui_material_create;
}
