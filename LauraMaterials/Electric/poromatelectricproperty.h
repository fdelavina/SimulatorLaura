#ifndef POROMATELECTRICPROPERTY_H
#define POROMATELECTRICPROPERTY_H

#include "matelectricproperty.h"

class PoroMatElectricProperty: public MatElectricProperty
{
private:

    DVRMatrix *PorosityInSigmaElectric;

public:
    PoroMatElectricProperty(DVRMatrix *PoroInSig);


    void SetMaterialTime  () override ;  // Set Material Time: TimeDependant or not
    void SetMaterialLinear() override ; // Set lineal or no linear material
    void SetMaterialType  () override ; // Set Mechanics, Thermal or Electric

    QString ShowMaterialTime  () override ;  // Set Material Time: TimeDependant or not
    QString ShowMaterialLinear() override ; // Set lineal or no linear material
    QString ShowMaterialType  () override ; // Set Mechanics, Thermal or Electric

    void       SetPorosityInSigmaElectric (DVRMatrix *PoroInSig);
    DVRMatrix *ShowPorosityInSigmaElectric();
};

#endif // POROMATELECTRICPROPERTY_H
