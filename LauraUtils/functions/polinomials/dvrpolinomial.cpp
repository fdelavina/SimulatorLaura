#include "dvrpolinomial.h"


DVRPolinomial::DVRPolinomial(unsigned int d):
    Polinomio(DVRFunctionsParameteresAnd2Values(NULL)),
    DerX     (DVRFunctionsParameteresAnd2Values(NULL)),
    DerY     (DVRFunctionsParameteresAnd2Values(NULL)),
    DerXX    (DVRFunctionsParameteresAnd2Values(NULL)),
    DerYY    (DVRFunctionsParameteresAnd2Values(NULL)),
    DerXY    (DVRFunctionsParameteresAnd2Values(NULL))
{
    this->degree=d;

    SetParameters();

};

void DVRPolinomial::SetParameters()
{
    switch (this->degree)
    {
    case 1:
        Polinomio = DVRFunctionsParameteresAnd2Values( Polinomial1func);
        DerX      = DVRFunctionsParameteresAnd2Values( Polinomial1DerXfunc);
        DerY      = DVRFunctionsParameteresAnd2Values( Polinomial1DerYfunc);
        DerXX     = DVRFunctionsParameteresAnd2Values( Polinomial1DerXXfunc);
        DerYY     = DVRFunctionsParameteresAnd2Values( Polinomial1DerYYfunc);
        DerXY     = DVRFunctionsParameteresAnd2Values( Polinomial1DerXYfunc);
    case 2:
        Polinomio = DVRFunctionsParameteresAnd2Values( Polinomial2func);
        DerX      = DVRFunctionsParameteresAnd2Values( Polinomial2DerXfunc);
        DerY      = DVRFunctionsParameteresAnd2Values( Polinomial2DerYfunc);
        DerXX     = DVRFunctionsParameteresAnd2Values( Polinomial2DerXXfunc);
        DerYY     = DVRFunctionsParameteresAnd2Values( Polinomial2DerYYfunc);
        DerXY     = DVRFunctionsParameteresAnd2Values( Polinomial2DerXYfunc);
    }



}

float DVRPolinomial::CalculateF(float *c, float x, float y)
{
    return this->Polinomio.Calculate(c, x,y);
}

float DVRPolinomial::CalculateDerX(float *c, float x, float y)
{
    return this->DerX.Calculate(c,x,y);
}

float DVRPolinomial::CalculateDerY(float *c, float x, float y)
{
    return this->DerY.Calculate(c, x,y);
}

float DVRPolinomial::CalculateDerXX(float *c, float x, float y)
{
    return this->DerXX.Calculate(c, x,y);
}

float DVRPolinomial::CalculateDerYY(float *c, float x, float y)
{
    return this->DerYY.Calculate(c, x,y);
}

float DVRPolinomial::CalculateDerXY(float *c, float x, float y)
{
    return this->DerXY.Calculate(c, x,y);
}
