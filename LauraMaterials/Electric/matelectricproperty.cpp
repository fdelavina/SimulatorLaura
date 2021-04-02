#include "matelectricproperty.h"
#include <dvrmatrix.h>

MatElectricProperty::MatElectricProperty(DVRMatrix *_SigmaElectric):MaterialProperty("Undefined",
                                                                                     "Undefined",
                                                                                     "Undefined",
                                                                                     "Electric")

{
    SetSigmaElectric(_SigmaElectric);
}

// ********* Setters this Class ***************
void MatElectricProperty::SetSigmaElectric(DVRMatrix *_SigmaElectric)
{
    this->SigmaElectric = _SigmaElectric;

}

// ********* Getters this Class ***************
DVRMatrix* MatElectricProperty::GetSigmaElectric()
{
    return this->SigmaElectric;
}
