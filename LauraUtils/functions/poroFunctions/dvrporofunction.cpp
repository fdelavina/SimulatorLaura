#include "dvrporofunction.h"
#include "inline/PorousFunctionsAndDerivades.h"

DVRPoroFunction::DVRPoroFunction(float _A,float _ThetaM,float _n) : TheFunction         ( DVRFunctionsParameteresAnd1Value(NULL) ),
                                                                    TheFunctionDerTheta ( DVRFunctionsParameteresAnd1Value(NULL) ),
                                                                    TheFunctionDer2Theta( DVRFunctionsParameteresAnd1Value(NULL) )
{
    SetEquationName();

    SetA        ( _A      );
    SetThetaM   ( _ThetaM );
    Setn        ( _n      );
    SetFunction (         );
}

void DVRPoroFunction::SetA(float _A)
{
    this->A = _A;
}

void DVRPoroFunction::SetThetaM(float _ThetaM)
{
    this->ThetaM = _ThetaM;
}

void DVRPoroFunction::Setn(float _n)
{
    this->n = _n;
}

float DVRPoroFunction::ShowA()
{
    return this-> A;
}

float DVRPoroFunction::ShowThetaM()
{
    return this-> ThetaM;
}

float DVRPoroFunction::Shown()
{
    return this-> n;
}

void DVRPoroFunction::SetEquationName()
{
    this->equationName = "A*(1-theta/thetaM)^n";
}

std::string DVRPoroFunction::ShowEquationName()
{
    return this->equationName;
}

void DVRPoroFunction::SetFunction()
{
    this->TheFunction          = DVRFunctionsParameteresAnd1Value( STDFunction1      );
    this->TheFunctionDerTheta  = DVRFunctionsParameteresAnd1Value( STDFunction1DerX  );
    this->TheFunctionDer2Theta = DVRFunctionsParameteresAnd1Value( STDFunction1DerX2 );


}
