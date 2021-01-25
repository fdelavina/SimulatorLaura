#include "dvrpolinomial.h"
#include "inline/PolinomialAndDerivades.h"

DVRPolinomial::DVRPolinomial(unsigned int d):
    Polinomio(DVRFunctions(NULL)),
    DerX     (DVRFunctions(NULL)),
    DerY     (DVRFunctions(NULL)),
    DerXX    (DVRFunctions(NULL)),
    DerYY    (DVRFunctions(NULL)),
    DerXY    (DVRFunctions(NULL))
{
    this->degree=d;

    SetParameters();

};

void DVRPolinomial::SetParameters()
{
    switch (this->degree)
    {
    case 1:
        Polinomio=DVRFunctions(sumafuncion1);
        DerX     =DVRFunctions(sumafuncion1);
        DerY     =DVRFunctions(sumafuncion1);
        DerXX    =DVRFunctions(sumafuncion1);
        DerYY    =DVRFunctions(sumafuncion1);
        DerXY    =DVRFunctions(sumafuncion1);
    case 2:
        Polinomio=DVRFunctions(sumafuncion2);
        DerX     =DVRFunctions(sumafuncion2);
        DerY     =DVRFunctions(sumafuncion2);
        DerXX    =DVRFunctions(sumafuncion2);
        DerYY    =DVRFunctions(sumafuncion2);
        DerXY    =DVRFunctions(sumafuncion2);
    }



}

float DVRPolinomial::CalculateF(float x, float y)
{
    return this->Polinomio.Calculate(x,y);
}

float DVRPolinomial::CalculateDerX(float x, float y)
{
    return this->DerX.Calculate(x,y);
}

float DVRPolinomial::CalculateDerY(float x, float y)
{
    return this->DerY.Calculate(x,y);
}

float DVRPolinomial::CalculateDerXX(float x, float y)
{
    return this->DerXX.Calculate(x,y);
}

float DVRPolinomial::CalculateDerYY(float x, float y)
{
    return this->DerYY.Calculate(x,y);
}

float DVRPolinomial::CalculateDerXY(float x, float y)
{
    return this->DerXY.Calculate(x,y);
}
