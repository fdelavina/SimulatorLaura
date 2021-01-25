#ifndef DVRPOLINOMIAL_H
#define DVRPOLINOMIAL_H
#include "dvrfunctionsparametersand2values.h"

class DVRPolinomial
{
public:
    unsigned int degree;

    DVRFunctions Polinomio;
    DVRFunctions DerX     ;
    DVRFunctions DerY     ;
    DVRFunctions DerXX    ;
    DVRFunctions DerYY    ;
    DVRFunctions DerXY    ;

public:
    DVRPolinomial(unsigned int );

    void SetParameters  (            );
    float CalculateF    (float, float);
    float CalculateDerX (float, float);
    float CalculateDerY (float, float);
    float CalculateDerXX(float, float);
    float CalculateDerYY(float, float);
    float CalculateDerXY(float, float);
};

#endif // DVRPOLINOMIAL_H
