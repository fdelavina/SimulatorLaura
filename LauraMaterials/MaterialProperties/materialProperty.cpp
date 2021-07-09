#include "materialProperty.h"


MaterialProperty::MaterialProperty(std::string _MatTime,
                                   std::string _MatPoro,
                                   std::string _MatTemp,
                                   std::string _MatLin ,
                                   std::string _MatType)
{
      SetMaterialTime  (_MatTime);
      SetMaterialPoro  (_MatPoro);
      SetMaterialTemp  (_MatTemp);
      SetMaterialLinear(_MatLin );
      SetMaterialType  (_MatType);
}

MaterialProperty::MaterialProperty()
{
    SetMaterialTime  ("Undefined");
    SetMaterialPoro  ("Undefined");
    SetMaterialTemp  ("Undefined");
    SetMaterialLinear("Undefined" );
    SetMaterialType  ("Undefined");
}

void MaterialProperty::SetMaterialTime(std::string _MatTime)
{
    MaterialTime = _MatTime;
}

void MaterialProperty::SetMaterialPoro(std::string _MatPoro)
{
    MaterialPoro = _MatPoro;
}

void MaterialProperty::SetMaterialTemp(std::string _MatTemp)
{
    MaterialTemp = _MatTemp;
}

void MaterialProperty::SetMaterialLinear(std::string _MatLin)
{
    MaterialLinear = _MatLin;
}

void MaterialProperty::SetMaterialType(std::string _MatType)
{
    MaterialType = _MatType;
}

//Getters

std::string MaterialProperty::GetMaterialTime()
{
    return MaterialTime;
}

std::string MaterialProperty::GetMaterialPoro()
{
    return MaterialPoro;
}

std::string MaterialProperty::GetMaterialTemp()
{
    return MaterialTemp;
}

std::string MaterialProperty::GetMaterialLinear()
{
    return MaterialLinear;
}

std::string MaterialProperty::GetMaterialType()
{
    return MaterialType;
}
