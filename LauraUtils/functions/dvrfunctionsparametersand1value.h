#ifndef DVRFUNCTIONSPARAMETERSAND1VALUE_H
#define DVRFUNCTIONSPARAMETERSAND1VALUE_H



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
class DVRFunctionsParameteresAnd1Value
{
public:
    std::function<float(float*,float)> MyFunction;

public:
    DVRFunctionsParameteresAnd1Value(std::function<float(float*,float)>f);

    float Calculate (float*, float);

};

#endif // DVRFUNCTIONS_H
