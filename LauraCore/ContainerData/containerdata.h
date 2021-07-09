#ifndef CONTAINERDATA_H
#define CONTAINERDATA_H


#include <QVector>

#include "LauraGeometry/geometry.h"
#include "LauraMaterials/material.h"




/* *********************CLASS ContainerData************************
   ***********************************************************
   ***********************************************************

   This class contains all data this app uses.

   its possible to save/load all data in file with extension .aura

 *
 *
 */

class ContainerData
{
public:
    ContainerData();

    QVector<Material*> getAllMaterials();
    QVector<Geometry*> getAllGeometries();

    Material* getMaterialByName(QString _name);
    Geometry* getGeometryByName(QString _name);

    Material* getMaterialByPos(int _pos);
    Geometry* getGeometryByPos(int _pos);

    void includeMaterial(Material *_material);
    void includeGeometry(Geometry *_geometry);

    void removeMaterialByName(QString _name);
    void removeGeometryByName(QString _name);

    void removeMaterialByPos(int _pos);
    void removeGeometryByPos(int _pos);

private:
    void loadFile(); //loading data from a file .aura
    void saveFile(); //saving  data from a file .aura

private:

    QVector<Material*> my_vector_all_definedMaterials; //its defined all materials  on the app
    QVector<Geometry*> my_vector_all_definedGeometries;  //its defined all geometries on the app

    Material* my_selected_material;
    Geometry* my_selected_geometry;
};

#endif // CONTAINERDATA_H
