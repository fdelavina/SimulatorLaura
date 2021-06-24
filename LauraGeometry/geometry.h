#ifndef GEOMETRY_H
#define GEOMETRY_H

#include "LauraUtils/Matrices/dvrmatrix.h"
#include "globalLib/Global/globalLib.h"

class LAURAGEOMETRYSHARED_EXPORT Geometry
{

    protected:
         std::string     GeometryType ;
         DVRMatrix       TotalNodes   ;

    public:

        explicit
        Geometry(  ): GeometryType( "Empty Geometry" ),TotalNodes(DVRMatrix(0,0,"Empty Matrix")){};


        virtual void SetGeometryType  (              ) = 0 ; // Type of Geometry eg Rectangle, Circle,Sphere,etc
        virtual void NodesCalculation (              ) = 0 ; // All nodes in  geometry calculation
        virtual void ShowNodes        (              ) = 0 ; // Show nodes within chosen geometry
        virtual void ShowParameters   (bool shownodes) = 0 ;
};
#endif // GEOMETRY_H


//
//                PositionX PositionY PositionZ   Is a Boundary  (1=Yes, 0=No)    nx    ny
//
//            |       0.3        0.2     1.2                    1                 1     0
// TotalNodes=|       1.4        1.7    -4.1                    1                 0.5   0.5
//            |        .          .       .                     0                 0     0
//
//
//
//

