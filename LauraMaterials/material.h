#ifndef MATERIAL_H
#define MATERIAL_H

#include <materialProperty.h>

/* *********************CLASS Material************************
   ***********************************************************
   ***********************************************************

   This class define all properties a material can have.
   Every material is defined how is follows:

     - TemperatureDependant.
     - TimeDependant
     - Porous

  It assumes every material have a mechanic, electric and thermal
  behavior

 *
 *
 */

class Material
{
private:

    std::string MechanicsProperty; //elastic,plastic,thermoplastic

    bool TemperatureDependant;
    bool TimeDependant       ;
    bool Porous              ;


    MaterialProperty *Mechanic;
    MaterialProperty *Electric;
    MaterialProperty *Thermal;

public:
    Material();

     void SetMaterial (MaterialProperty *Mechanic,
                       MaterialProperty *Electric,
                       MaterialProperty *Thermal  );

     void ShowMaterial(                           );

};

#endif // MATERIAL_H
