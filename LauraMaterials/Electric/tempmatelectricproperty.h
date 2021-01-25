#ifndef TEMPMATELECTRICPROPERTY_H
#define TEMPMATELECTRICPROPERTY_H

#include "matelectricproperty.h"


class TempMatElectricProperty: public MatElectricProperty
{
protected:

    DVRMatrix *SpecificHeatCapacity; //Specific Heat Capacity

    //                                       _c_
    //                                      | 1     |
    //                                      | 0.4   |
    //                SpecificHeatCapacity =| 1.84  |  ->  SpecificHeatCapacity= 1*T^2+0.4*T+1.84
    //                                      |       |
    //                                      |       |
    //                                      |       |


public:
    TempMatElectricProperty(DVRMatrix *_SigmaElectric,DVRMatrix *SpecificHeatCapacity);



    void       SetSpecificHeatCapacity (DVRMatrix *_SpecificHeatCapacity);
    DVRMatrix* ShowSpecificHeatCapacity();

    void    SetMaterialTime   () override ; // Set Material Time: TimeDependant or not
    void    SetMaterialLinear () override ; // Set lineal or no linear material
    void    SetMaterialType   () override ; // Set Mechanics, Thermal or Electric

    QString ShowMaterialTime  () override ; // Get Material Time: TimeDependant or not
    QString ShowMaterialLinear() override ; // Get lineal or no linear material
    QString ShowMaterialType  () override ; // Get Mechanics, Thermal or Electric

};

#endif // TEMPMATELECTRICPROPERTY_H
