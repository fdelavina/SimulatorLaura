#ifndef MATELECTRICPROPERTY_H
#define MATELECTRICPROPERTY_H

#include <Matrices/dvrmatrix.h>
#include <materialProperty.h>

class MatElectricProperty: private MaterialProperty
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

    MatElectricProperty(DVRMatrix   *_BulkSigmaElectric,
                        std::string  _MatTime          ,
                        std::string  _MatPoro          ,
                        std::string  _MatTem           ,
                        std::string  _MatLin           );

    void       SetSigmaElectric (DVRMatrix *_BulkSigmaElectric);
    DVRMatrix* GetSigmaElectric();




};


class MatPorosiElectricProperty : private MatElectricProperty
{
protected:
    DVRMatrix *PoroApplied; //function applied to BulkElectricConductivity in order to take into account porosity
    //
    //  PoroApplied = 1-(theta/thetaM)^n
    //                                      thetaM | 1     |
    //                                           n | 0.4   |
    //
    //
    //
    //
    //
public:
    MatPorosiElectricProperty(DVRMatrix *_BulkSigmaElectric,
                              DVRMatrix *_PoroApplied      );

    void       SetPoroApplied(DVRMatrix *_PoroAppl);
    DVRMatrix* GetPoroAplied ();


};




class MatBulkElectricProperty: private MatElectricProperty
{
protected:

public:
    MatBulkElectricProperty(DVRMatrix *_BulkSigmaElectric);
};

#endif // MATELECTRICPROPERTY_H
