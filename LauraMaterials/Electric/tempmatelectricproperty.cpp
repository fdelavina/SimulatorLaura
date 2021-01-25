#include "tempmatelectricproperty.h"

TempMatElectricProperty::TempMatElectricProperty(DVRMatrix *_SigmaElectric, DVRMatrix *_SpecificHeatCapacity) : MatElectricProperty(_SigmaElectric)
{
    SetSpecificHeatCapacity (_SpecificHeatCapacity);

    SetMaterialTime  ();
    SetMaterialLinear();
    SetMaterialType  ();
}

void TempMatElectricProperty::SetSpecificHeatCapacity(DVRMatrix *_SpecificHeatCapacity)
{
    this->SpecificHeatCapacity = _SpecificHeatCapacity;
}

DVRMatrix *TempMatElectricProperty::ShowSpecificHeatCapacity()
{
    return this->SpecificHeatCapacity;
}

//Setter SuperClass
void TempMatElectricProperty::SetMaterialTime()
{
    this->MaterialTime = "Time Dependant";
}

void TempMatElectricProperty::SetMaterialLinear()
{
    this->MaterialLinear = "Dont Care";
}

void TempMatElectricProperty::SetMaterialType()
{
    this->MaterialType = "Electric";
}

//Getters SuperClass
QString TempMatElectricProperty::ShowMaterialTime()
{
    return this->MaterialTime;
}

QString TempMatElectricProperty::ShowMaterialLinear()
{
    return this->MaterialLinear;
}

QString TempMatElectricProperty::ShowMaterialType()
{
    return this->MaterialType;
}
