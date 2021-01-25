#ifndef POROUSFUNCTIONSANDDERIVADES_H
#define POROUSFUNCTIONSANDDERIVADES_H

#endif // POROUSFUNCTIONSANDDERIVADES_H

#include<cmath>
#include <functional>


//*********************************************************************
//****************************FUNCTION1********************************
//Compute y = A*( 1-(x/xm) )^n and derivades
inline float Function1(float* parameters,float x)
{
//    float A  = parameters[0];
//    float n  = parameters[1];
//    float xm = parameters[2];

    return parameters[0]*pow(1-(x/parameters[2]) ,parameters[1]);
}
std::function<float(float*,float)> STDFunction1 = Function1;


inline float Function1DerX(float* parameters,float x)
{
    return -(x/parameters[2])*parameters[1]*parameters[0]*pow(1-(x/parameters[2]) ,parameters[1]-1);
}
std::function<float(float*,float)> STDFunction1DerX = Function1DerX;



inline float Function1DerX2(float* parameters,float x)
{
    return pow(x/parameters[2],2)*parameters[1]*parameters[0]*pow(1-(x/parameters[2]) ,parameters[1]-2);
}
std::function<float(float*,float)> STDFunction1DerX2 = Function1DerX2;
//*********************************************************************
//*********************************************************************
//*********************************************************************
