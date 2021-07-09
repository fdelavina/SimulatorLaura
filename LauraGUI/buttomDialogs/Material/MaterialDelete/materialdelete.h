#ifndef MATERIALDELETE_H
#define MATERIALDELETE_H

#include <QDialog>
#include "globalLib/Global/globalLib.h"

namespace Ui {
class MaterialDelete;
}

class LAURAGUISHARED_EXPORT MaterialDelete : public QDialog
{
    Q_OBJECT

public:
    explicit MaterialDelete(QWidget *parent = nullptr);
    ~MaterialDelete();

private:
    Ui::MaterialDelete *ui_material_delete;
};

#endif // MATERIALDELETE_H
