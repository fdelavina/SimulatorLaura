#ifndef MATERIALCREATE_H
#define MATERIALCREATE_H

#include <QDialog>
#include "globalLib/Global/globalLib.h"

namespace Ui {
class MaterialCreate;
}

class LAURAGUISHARED_EXPORT MaterialCreate : public QDialog
{
    Q_OBJECT

public:
    explicit MaterialCreate(QWidget *parent = nullptr);
    ~MaterialCreate();

private:
    Ui::MaterialCreate *ui_material_create;
};

#endif // MATERIALCREATE_H
