#ifndef DVRPOLINOMIAL_H
#define DVRPOLINOMIAL_H
#include "functions/dvrfunctionsparametersand1value.h"
#include "functions/dvrfunctionsparameteresand2value.h"
#include "inline/PolinomialAndDerivades.h"

class DVRPolinomial
{
public:
    unsigned int degree;

    DVRFunctionsParameteresAnd2Values Polinomio;
    DVRFunctionsParameteresAnd2Values DerX     ;
    DVRFunctionsParameteresAnd2Values DerY     ;
    DVRFunctionsParameteresAnd2Values DerXX    ;
    DVRFunctionsParameteresAnd2Values DerYY    ;
    DVRFunctionsParameteresAnd2Values DerXY    ;

public:
    DVRPolinomial(unsigned int );

    void SetParameters  (            );
    float CalculateF    (float *c, float x, float y);
    float CalculateDerX (float *c, float x, float y);
    float CalculateDerY (float *c, float x, float y);
    float CalculateDerXX(float *c, float x, float y);
    float CalculateDerYY(float *c, float x, float y);
    float CalculateDerXY(float *c, float x, float y);
};

#endif // DVRPOLINOMIAL_H
