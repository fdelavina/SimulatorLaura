#ifndef MATERIALS_H
#define MATERIALS_H
#include "dvrmatrix.h"

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
 */

class MaterialProperty
{
protected:
    QString MaterialTime   ;
    QString MaterialLinear ;
    QString MaterialType   ;
public:
    MaterialProperty(): MaterialTime  ( "undefined" ),
                        MaterialLinear( "undefined" ),
                        MaterialType  ( "undefined" )
    {};

    virtual void SetMaterialTime  (  ) = 0 ; // Set Material Time: TimeDependant or not
    virtual void SetMaterialLinear(  ) = 0 ; // Set lineal or no linear material
    virtual void SetMaterialType  (  ) = 0 ; // Set Mechanics, Thermal or Electric

    virtual QString ShowMaterialTime  (  ) = 0 ; // Set Material Time: TimeDependant or not
    virtual QString ShowMaterialLinear(  ) = 0 ; // Set lineal or no linear material
    virtual QString ShowMaterialType  (  ) = 0 ; // Set Mechanics, Thermal or Electric


};

#endif // MATERIALS_H
