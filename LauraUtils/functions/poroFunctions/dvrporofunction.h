#ifndef DVRPOROFUNCTION_H
#define DVRPOROFUNCTION_H

#include "dvrfunctionsparametersand1value.h"
#include <string>

/***********CLASS DVRPoroFunction*****************
 *************************************************
 *************************************************
 * This class creates the function
 * y= A*(1-theta/thetaM)^n
 * computing the result and the first and second
 * derivade
 *
*/
class DVRPoroFunction
{
public:
    std::string equationName ;

    float A      ;
    float ThetaM ;
    float n      ;

    DVRFunctionsParameteresAnd1Value TheFunction         ;
    DVRFunctionsParameteresAnd1Value TheFunctionDerTheta ;
    DVRFunctionsParameteresAnd1Value TheFunctionDer2Theta;

public:
    DVRPoroFunction(float _A,float _ThetaM,float _n);

    void SetA     (float _A      );
    void SetThetaM(float _ThetaM );
    void Setn     (float _n      );

    float ShowA     ();
    float ShowThetaM();
    float Shown     ();

    void        SetEquationName ();
    std::string ShowEquationName();

    void  SetFunction();

};

#endif // DVRPOROFUNCTION_H
