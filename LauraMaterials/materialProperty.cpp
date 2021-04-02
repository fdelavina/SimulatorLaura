#include "materialProperty.h"



MaterialProperty::MaterialProperty(std::string _MatTime, std::string _MatLin, std::string _MatType)
{
      SetMaterialTime  (_MatTime);
      SetMaterialLinear(_MatLin );
      SetMaterialType  (_MatType);
}

void MaterialProperty::SetMaterialTime(std::string _MatTime)
{
    MaterialTime = _MatTime;
}

void MaterialProperty::SetMaterialLinear(std::string _MatLin)
{
    MaterialLinear = _MatLin;
}

void MaterialProperty::SetMaterialType(std::string _MatType)
{
    MaterialType = _MatType;
}

std::string MaterialProperty::GetMaterialTime()
{
    return MaterialTime;
}

std::string MaterialProperty::GetMaterialLinear()
{
    return MaterialLinear;
}

std::string MaterialProperty::GetMaterialType()
{
    return MaterialType;
}
