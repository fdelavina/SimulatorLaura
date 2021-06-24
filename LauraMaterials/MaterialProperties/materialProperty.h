#ifndef MATERIALS_H
#define MATERIALS_H

#include <iostream>
#include "Matrices/dvrmatrix.h"



/* *************CLASS MateriasProperty************************
   ***********************************************************
   ***********************************************************
   This class defines all the Material properties we can obtain

   Material property can have

         - Time   -> Material can be time dependant or not
         - Linear -> Material can have linear or non-linear behavior
         - Type   -> Here, it assumes next type
                                                1. Mechanic
                                                2. Electric
                                                3. Thermal


  Posibilities:
    MaterialTime   = (Undefined,Yes,No)
    MaterialPoro   = (Undefined,Yes,No)
    MaterialTemp   = (Undefined,Yes,No)
    MaterialLinear = (Undefined,Yes,No)
    MaterialType   = (Undefined,Mechanic,Electric, Thermal)

*/

class MaterialProperty
{
protected:
    std::string MaterialTime   ;
    std::string MaterialPoro   ;
    std::string MaterialTemp   ;
    std::string MaterialLinear ;
    std::string MaterialType   ;

public:

    MaterialProperty(std::string _MatTime,
                     std::string _MatPoro,
                     std::string _MatTemp,
                     std::string _MatLin ,
                     std::string _MatType);

    void SetMaterialTime  (std::string  )  ; // Set Material Time: TimeDependant or not
    void SetMaterialPoro  (std::string  )  ;
    void SetMaterialTemp  (std::string  )  ; // Set Material Temp: their properties can be temperature dependant
    void SetMaterialLinear(std::string  )  ; // Set lineal or no linear material
    void SetMaterialType  (std::string  )  ; // Set Mechanics, Thermal or Electric

    std::string GetMaterialTime  (  ) ;      // Set Material Time: TimeDependant or not
    std::string GetMaterialPoro  (  ) ;
    std::string GetMaterialTemp  (  ) ;      // Set Material Temp
    std::string GetMaterialLinear(  ) ;      // Set lineal or no linear material
    std::string GetMaterialType  (  ) ;      // Set Mechanics, Thermal or Electric


};

#endif // MATERIALS_H
