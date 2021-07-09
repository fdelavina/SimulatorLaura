#include "material.h"

Material::Material()
{

}

void Material::setMaterial(MaterialProperty Mechanic, MaterialProperty Electric, MaterialProperty Thermal)
{

}

void Material::setNameMaterial(std::string _nameMaterial)
{
    this->MaterialName = _nameMaterial;
}

void Material::getMaterial()
{

}

std::string Material::getMaterialName()
{
    return this->MaterialName;
}
