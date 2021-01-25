#include "dvrfunctionsparametersand2values.h"


DVRFunctionsParameteresAnd2Values::DVRFunctionsParameteresAnd2Values(std::function<float(float*, float x, float y)>f)
{
    MyFunction = std::move(f);
}


float DVRFunctionsParameteresAnd2Values::Calculate(float* parameters,float x, float y)
{
    return MyFunction(parameters,x,y);
}

