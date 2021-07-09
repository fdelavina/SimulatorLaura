#ifndef MATERIAL_H
#define MATERIAL_H

#include <LauraMaterials/MaterialProperties/materialProperty.h>

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
    std::string MaterialName;
    std::string MechanicsProperty; //elastic,plastic,thermoplastic

    bool TemperatureDependant;
    bool TimeDependant       ;
    bool Porous              ;


    MaterialProperty Mechanic;
    MaterialProperty Electric;
    MaterialProperty Thermal;

public:
    Material();

     void setMaterial (MaterialProperty _Mechanic,
                       MaterialProperty _Electric,
                       MaterialProperty _Thermal  );

     void setNameMaterial(std::string _nameMaterial);

     void setMaterialMechanic(MaterialProperty _Mechanic);
     void setMaterialElectric(MaterialProperty _Electric);
     void setMaterialTheraml (MaterialProperty _Thermal );

     void getMaterial();

     std::string getMaterialName();
     MaterialProperty getMaterialMechanic();
     MaterialProperty getMaterialElectric();
     MaterialProperty getMaterialThermal();


};

#endif // MATERIAL_H
