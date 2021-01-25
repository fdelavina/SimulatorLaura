#include "poromatelectricproperty.h"

PoroMatElectricProperty::PoroMatElectricProperty(DVRMatrix *PoroInSig)
{
    PoroMatElectricProperty(PoroInSig);
    SetMaterialTime();
    SetMaterialLinear();
}

void PoroMatElectricProperty::SetMaterialTime()
{
    this->MaterialTime = "No time Dependant";
}

void PoroMatElectricProperty::SetMaterialLinear()
{
    this->MaterialLinear = "No lineal";
}

void PoroMatElectricProperty::SetMaterialType()
{
    this->MaterialType ="Electric";
}

QString PoroMatElectricProperty::ShowMaterialTime()
{
    return this->MaterialTime;
}

QString PoroMatElectricProperty::ShowMaterialLinear()
{
    return this->MaterialLinear;
}

QString PoroMatElectricProperty::ShowMaterialType()
{
    return this->MaterialType;
}



void PoroMatElectricProperty::SetPorosityInSigmaElectric(DVRMatrix *PoroInSig)
{
    this->PorosityInSigmaElectric = PoroInSig;
}

DVRMatrix *PoroMatElectricProperty::ShowPorosityInSigmaElectric()
{
    return this->PorosityInSigmaElectric;
}
