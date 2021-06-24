#ifndef MATERIALTHERMALPROPERTY_H
#define MATERIALTHERMALPROPERTY_H


#include "Matrices/dvrmatrix.h"
#include <materialProperty.h>

class MatThermalProperty: public MaterialProperty
{
protected:
    bool      TempDepend;           // true if material is temperature dependant
    DVRMatrix ThermalConductivity;  //bulk thermal conductivity temperature dependant sigma=c(n)*T^n+c(n-1)*T^n-1+...
                                    //we save the parameters c
    //
    //                                        _c_
    //                                      | 1     |
    //                                      | 0.4   |
    //                 ThermalConductivity =| 1.84  |  ->  SigmaElectric= 1*T^2+0.4*T+1.84
    //                                      |       |
    //                                      |       |
    //                                      |       |
    // In the case, no temperature dependant exists, ThermalConductivity DVRMaxtrix gets only one dimension,
    // i.e ThermalConductivity = [1231.232]
    //
    //

public:

    MatThermalProperty(DVRMatrix _TherCond);

    void       SetThermalConductivity (DVRMatrix _TherCond);
    DVRMatrix  GetThermalConductivity();
    bool       GetTempDepend();

private:
    bool isTemperatureDependant();




};

#endif // MATERIALTHERMALPROPERTY_H
