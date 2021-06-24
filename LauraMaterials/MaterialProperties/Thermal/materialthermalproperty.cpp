#include "materialthermalproperty.h"
#include "Matrices/dvrmatrix.h"

MatThermalProperty::MatThermalProperty(DVRMatrix _TherCond):MaterialProperty( "Undefined", //Time
                                                                              "Undefined", //Poro
                                                                              "Undefined", //Temp
                                                                              "Undefined", //Lineal
                                                                              "Thermal"  ) // Type

{
    TempDepend = false;
    SetThermalConductivity(_TherCond);
    TempDepend = isTemperatureDependant();
}

// ********* Setters this Class ***************
void MatThermalProperty::SetThermalConductivity(DVRMatrix _TherCond)
{
    this->ThermalConductivity = _TherCond;
}

// ********* Getters this Class ***************
DVRMatrix MatThermalProperty::GetThermalConductivity()
{
    return this->ThermalConductivity;
}

//it checks if the material is temperature dependant thanks to the
//dimension of the matrix DVRMatrix
bool MatThermalProperty::isTemperatureDependant()
{
    return TempDepend = false;


}
