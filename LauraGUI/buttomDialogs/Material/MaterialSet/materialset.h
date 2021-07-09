#ifndef MATERIALSET_H
#define MATERIALSET_H

#include <QDialog>
#include "globalLib/Global/globalLib.h"

namespace Ui {
class MaterialSet;
}

class LAURAGUISHARED_EXPORT MaterialSet : public QDialog
{
    Q_OBJECT

public:
    explicit MaterialSet(QWidget *parent = nullptr);
    ~MaterialSet();

private:
    Ui::MaterialSet *ui_materialSet;
};

#endif // MATERIALSET_H
