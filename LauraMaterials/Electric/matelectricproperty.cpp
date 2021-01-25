#include "matelectricproperty.h"
#include <dvrmatrix.h>

MatElectricProperty::MatElectricProperty(DVRMatrix *_SigmaElectric)
{
    SetSigmaElectric(_SigmaElectric);

    SetMaterialTime  ();
    SetMaterialLinear();
    SetMaterialType  ();
}

// ********* Setters this Class ***************
void MatElectricProperty::SetSigmaElectric(DVRMatrix *_SigmaElectric)
{
    this->SigmaElectric = _SigmaElectric;

}

// ********* Getters this Class ***************
DVRMatrix* MatElectricProperty::ShowSigmaElectric()
{
    return this->SigmaElectric;
}

//    *********** Setters SuperClass *****************
void MatElectricProperty::SetMaterialTime()
{
    this->MaterialTime = "No Time Dependant";
}

void MatElectricProperty::SetMaterialLinear()
{
    this->MaterialLinear = "Dont Care";
}

void MatElectricProperty::SetMaterialType()
{
    this->MaterialType = "Electric";
}

//    *********** Getters SuperClass *****************
QString MatElectricProperty::ShowMaterialTime()
{
    return this->MaterialTime;
}

QString MatElectricProperty::ShowMaterialLinear()
{
    return this->MaterialLinear;
}

QString MatElectricProperty::ShowMaterialType()
{
    return this->MaterialType;
}
