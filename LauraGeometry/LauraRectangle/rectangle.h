#ifndef RECTANGLE_H
#define RECTANGLE_H

#include "geometry.h"
#include "globalLib/Global/globalLib.h"
#include "LauraUtils/Matrices/dvrmatrix.h"

class LAURAGEOMETRYSHARED_EXPORT  Rectangle : public  Geometry
{
private:

    float        SideX    ;
    float        SideY    ;
    float        PosX     ;
    float        PosY     ;
    unsigned int DiscretX ;
    unsigned int DiscretY ;
public:
    Rectangle(float SX,float SY, float PX,float PY,unsigned int DX,unsigned int DY);

    void SetGeometryType (              ) override;
    void NodesCalculation(              ) override;
    void ShowNodes       (              ) override;
    void ShowParameters  (bool shownodes) override;

    void SetParameters(float SX,float SY, float PX,float PY ,unsigned int DX,unsigned int DY);

};

#endif // RECTANGLE_H
