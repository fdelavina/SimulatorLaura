#include <iostream>
#include <string>
#include "dvrmatrix.h"
#include "dvrfunctionsparametersand2values.h"
#include "rectangle.h"
#include "dvrpolinomial.h"
#include "matelectricproperty.h"

int main()
{
    DVRMatrix m(2,6,"matriz1");
    m.ShowParameters(true);
    m.SetMatrix(4,3,1);
    m.ShowParameters(true);

    std::cout<<"Rectangulo ahora \n\n";

    Rectangle Rectangulo(10.0,15.0,0.0,0.0,2,3);
    Rectangulo.ShowParameters(true);

    //polinomio
    float a;
    DVRPolinomial b(2);
    a = b.CalculateF(4.0,4.0);
    std::cout<<"resultado "<<a<<std::endl;


    //material electrico
    MatElectricProperty PropElect(m);


    system("PAUSE");

    return 0;
}
