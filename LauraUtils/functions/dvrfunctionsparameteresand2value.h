#ifndef DVRFUNCTIONSPARAMETERESAND2VALUE_H
#define DVRFUNCTIONSPARAMETERESAND2VALUE_H

#include <functional>
/*
 * ************CLASS DVRFunctions************
 * ******************************************
 * Esta clase devuelve un numero float de una
 * funcion dada. Se usa en conjunto con
 *
 * -DVRPolinomial si se quiere calcular un polinomio
 *
 */
class DVRFunctionsParameteresAnd2Values
{
public:
    std::function<float(float*,float, float)> MyFunction;

public:
    DVRFunctionsParameteresAnd2Values(std::function<float(float*,float, float)>f);

    float Calculate (float*, float, float);

};

#endif // DVRFUNCTIONS_H
