#include "matelectricproperty.h"
#include <dvrmatrix.h>

MatElectricProperty::MatElectricProperty(DVRMatrix   *_BulkSigmaElectric,
                                         std::string  _MatTime          ,
                                         std::string  _MatPoro          ,
                                         std::string  _MatTem           ,
                                         std::string  _MatLin           ):MaterialProperty(_MatTime   ,  //Time
                                                                                           _MatPoro   ,  //Porosity
                                                                                           _MatTem    ,  //Temperature
                                                                                           _MatLin    ,  //Lineal
                                                                                           "Electric" )  // Type

{
    SetSigmaElectric(_BulkSigmaElectric);
}

// ********* Setters this Class ***************
void MatElectricProperty::SetSigmaElectric(DVRMatrix *_BulkSigmaElectric)
{
    this->BulkElectricConductivity = _BulkSigmaElectric;
}

// ********* Getters this Class ***************
DVRMatrix* MatElectricProperty::GetSigmaElectric()
{
    return this->BulkElectricConductivity;
}


// *******************************************************************************
MatPorosiElectricProperty::MatPorosiElectricProperty( DVRMatrix  *_BulkSigmaElectric,
                                                      DVRMatrix  *_PoroApplied      ):
    MatElectricProperty(  _BulkSigmaElectric,
                          "DontCare"        ,
                          "Yes"             ,
                          "DontCare"        ,
                          "DontCare"        )
{
    SetPoroApplied(_PoroApplied);
}

void MatPorosiElectricProperty::SetPoroApplied(DVRMatrix *_PoroAppl)
{
    this->PoroApplied = _PoroAppl;
}

DVRMatrix *MatPorosiElectricProperty::GetPoroAplied()
{
    return this->PoroApplied;
}

MatBulkElectricProperty::MatBulkElectricProperty(DVRMatrix *_BulkSigmaElectric):
    MatElectricProperty(  _BulkSigmaElectric,
                          "DontCare"        ,
                          "No"              ,
                          "DontCare"        ,
                          "DontCare"        )
{

}
