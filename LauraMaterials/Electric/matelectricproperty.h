#ifndef MATELECTRICPROPERTY_H
#define MATELECTRICPROPERTY_H

#include <dvrmatrix.h>
#include <materialProperty.h>

class MatElectricProperty: public MaterialProperty
{
protected:

    DVRMatrix *BulkElectricConductivity; //bulk electric conductivity temperature dependant sigma=c(n)*T^n+c(n-1)*T^n-1+...
                                     //we save the parameters c
    //
    //                                        _c_
    //                                      | 1     |
    //                                      | 0.4   |
    //                ElectricConductivity =| 1.84  |  ->  ElectricConductivity= 1*T^2+0.4*T+1.84
    //                                      |       |
    //                                      |       |
    //                                      |       |
    //
    //
    //

public:

    MatElectricProperty(DVRMatrix *_BulkSigmaElectric);

    void       SetSigmaElectric (DVRMatrix *_BulkSigmaElectric);
    DVRMatrix* GetSigmaElectric();




};


class MatPorosiElectricProperty : public MatElectricProperty
{
protected:
    DVRMatrix *Cvv //function applied to BulkElectricConductivity
};


#endif // MATELECTRICPROPERTY_H
