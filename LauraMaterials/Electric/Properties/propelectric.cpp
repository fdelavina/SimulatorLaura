#include "propelectric.h"

PropElectric::PropElectric()
{

}
PropElectric::PropElectric(std::string _Type)
{
    SetType(_Type);
}

void PropElectric::SetType(std::string _Type)
{
    this->Type = _Type;
}
