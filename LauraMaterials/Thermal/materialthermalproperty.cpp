#include "materialthermalproperty.h"
#include <dvrmatrix.h>

MatThermalProperty::MatThermalProperty(DVRMatrix *_TherCond):MaterialProperty( "Undefined", //Time
                                                                               "Undefined", //Temp
                                                                               "Undefined", //Lineal
                                                                               "Thermal"  ) // Type

{
    SetThermalConductivity(_TherCond);
}

// ********* Setters this Class ***************
void MatThermalProperty::SetThermalConductivity(DVRMatrix *_TherCond)
{
    this->ThermalConductivity = _TherCond;
}

// ********* Getters this Class ***************
DVRMatrix* MatThermalProperty::GetThermalConductivity()
{
    return this->ThermalConductivity;
}
