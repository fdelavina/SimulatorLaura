#include "containerdata.h"

ContainerData::ContainerData()
{

}

void ContainerData::removeMaterialByName(QString _name)
{
    for (int i=0;i<this->my_vector_all_definedMaterials.size();i++)
    {
        if(this->my_vector_all_definedMaterials[i]->getMaterialName() == _name.toStdString())
        {
            this->my_vector_all_definedGeometries.remove(i);
        }
    }
}

void ContainerData::removeGeometryByName(QString _name)
{
    for (int i=0;i<this->my_vector_all_definedGeometries.size();i++)
    {
        if(this->my_vector_all_definedGeometries[i]->getName() == _name.toStdString())
        {
            this->my_vector_all_definedGeometries.remove(i);
        }
    }
}

void ContainerData::removeMaterialByPos(int _pos)
{
    this->my_vector_all_definedMaterials.remove(_pos);
}

void ContainerData::removeGeometryByPos(int _pos)
{
    this->my_vector_all_definedGeometries.remove(_pos);
}

QVector<Material*> ContainerData::getAllMaterials()
{
    return this->my_vector_all_definedMaterials;
}

QVector<Geometry*> ContainerData::getAllGeometries()
{
    return this->my_vector_all_definedGeometries;
}

Material* ContainerData::getMaterialByName(QString _name)
{
    bool find = false;
    int pos = 0;

    for (int i=0;i<this->my_vector_all_definedMaterials.size();i++)
    {
        if(this->my_vector_all_definedMaterials[i]->getMaterialName() == _name.toStdString())
        {           
            find = true;
            pos = i;
        }
    }

    if (find == true)
    {
        return this->my_vector_all_definedMaterials[pos];
    }
        else
    {
        return nullptr;
    }

}

Geometry* ContainerData::getGeometryByName(QString _name)
{
    bool find = false;
    int pos = 0;

    for (int i=0;i<this->my_vector_all_definedGeometries.size();i++)
    {
        if(this->my_vector_all_definedGeometries[i]->getName() == _name.toStdString())
        {
            find = true;
            pos = i;
        }
    }

    if (find == true)
    {
        return this->my_vector_all_definedGeometries[pos];
    }
        else
    {
        return nullptr;
    }
}

Material* ContainerData::getMaterialByPos(int _pos)
{
    return this->my_vector_all_definedMaterials.at(_pos);
}

Geometry* ContainerData::getGeometryByPos(int _pos)
{
    return this->my_vector_all_definedGeometries.at(_pos);
}

void ContainerData::includeMaterial(Material* _material)
{
    this->my_vector_all_definedMaterials.append(_material);
}

void ContainerData::includeGeometry(Geometry* _geometry)
{
    this->my_vector_all_definedGeometries.append(_geometry);
}

void ContainerData::loadFile()
{

}

void ContainerData::saveFile()
{

}
