#include "dvrfunctionsparametersand1value.h"

DVRFunctionsParameteresAnd1Value::DVRFunctionsParameteresAnd1Value(std::function<float(float*, float x)>f)
{
    MyFunction = std::move(f);
}


float DVRFunctionsParameteresAnd1Value::Calculate(float* parameters,float x)
{
    return MyFunction(parameters,x);
}

