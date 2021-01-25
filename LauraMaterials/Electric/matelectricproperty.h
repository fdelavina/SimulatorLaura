#ifndef MATELECTRICPROPERTY_H
#define MATELECTRICPROPERTY_H

#include <dvrmatrix.h>
#include <materialProperty.h>

class MatElectricProperty: public MaterialProperty
{
protected:

    DVRMatrix *SigmaElectric; //bulk electric conductivity temperature dependant sigma=c(n)*T^n+c(n-1)*T^n-1+...
                              //we save the parameters c
    //
    //                                       _c_
    //                                      | 1     |
    //                                      | 0.4   |
    //                       SigmaElectric =| 1.84  |  ->  SigmaElectric= 1*T^2+0.4*T+1.84
    //                                      |       |
    //                                      |       |
    //                                      |       |
    //
    //
    //

public:

    MatElectricProperty(DVRMatrix *_SigmaElectric);

    void       SetSigmaElectric (DVRMatrix *_SigmaElectric);
    DVRMatrix* ShowSigmaElectric();

    virtual void SetMaterialTime  ()  ; // Set Material Time: TimeDependant or not
    virtual void SetMaterialLinear()  ; // Set lineal or no linear material
    virtual void SetMaterialType  ()  ;    // Set Mechanics, Thermal or Electric

    virtual QString ShowMaterialTime  ()  ; // Set Material Time: TimeDependant or not
    virtual QString ShowMaterialLinear()  ; // Set lineal or no linear material
    virtual QString ShowMaterialType  ()  ; // Set Mechanics, Thermal or Electric


};

#endif // MATELECTRICPROPERTY_H
