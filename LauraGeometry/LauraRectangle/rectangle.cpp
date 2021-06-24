#include "rectangle.h"
#include <iostream>


Rectangle :: Rectangle (float SX,float SY, float PX,float PY
                     ,unsigned int DX,unsigned int DY)
{
    Rectangle::SetGeometryType();
    Rectangle::SetParameters(SX,SY,PX,PY,DX,DY);
    this->TotalNodes=DVRMatrix( (this->DiscretX+1)*(this->DiscretY+1),
                                5,
                                "TotalNodes");
    Rectangle::NodesCalculation();
    

}

 void Rectangle::SetGeometryType()
{
    this->GeometryType="Rectangular Geometry";
}

void Rectangle::SetParameters(float SX,float SY, float PX,float PY
                              ,unsigned int DX,unsigned int DY)
{

    this->SideX    =SX;
    this->SideY    =SY;
    this->PosX     =PX;
    this->PosY     =PY;
    this->DiscretX =DX;
    this->DiscretY =DY;
}

void Rectangle ::ShowParameters(bool shownodes)
{
    std::cout<<this->GeometryType<<"\n"
            <<"Side in X direction "<<this->SideX   <<", "
            <<"Side in Y direction "<<this->SideX   <<",\n"
            <<"Displacement in X "  <<this->PosX    <<", "
            <<"Displacement in X "  <<this->PosY    <<", \n"
            <<"Discretitation in X "<<this->DiscretX<<", "
            <<"Discretitation in Y "<<this->DiscretY<<"\n\n";
    if (shownodes==true)
    {
        ShowNodes();
    }


}
void Rectangle::NodesCalculation()
{
    float PasoX;
    float PasoY;
    PasoX=this->SideX/this->DiscretX;
    PasoY=this->SideY/this->DiscretY;


    for(unsigned int i=0;i<this->DiscretX+1;i++)
    {
        for(unsigned int j=0;j<this->DiscretY+1;j++)
        {
            //Se calcula la posicion de los nodos
            float val1=(float)i*PasoX+this->PosX;
            float val2=(float)j*PasoY+this->PosY;
            TotalNodes.SetMatrix(val1,i*this->DiscretY+j  ,0);
            TotalNodes.SetMatrix(val2,i*this->DiscretY+j  ,1);


            //Se ve si el nodo pertenece al contorno o no
            if(val1==this->PosX)                       //Pertenece a la linea izquierda
            {
                TotalNodes.SetMatrix(1,i*this->DiscretY+j,2);
                //En el caso que pertenezca al contorno, se obtiene su normal, en este caso [-1,0]
                TotalNodes.SetMatrix(-1,i*this->DiscretY+j,3);
                TotalNodes.SetMatrix( 0,i*this->DiscretY+j,4);
            }
            else
            {
                TotalNodes.SetMatrix(0,i*this->DiscretY+j,2);

            }

            if(val1==this->PosX+this->SideX)           //Pertenece a la linea derecha
            {
                TotalNodes.SetMatrix(1,i*this->DiscretY+j,2);
                //En el caso que pertenezca al contorno, se obtiene su normal, en este caso [1,0]
                TotalNodes.SetMatrix( 1,i*this->DiscretY+j,3);
                TotalNodes.SetMatrix( 0,i*this->DiscretY+j,4);
            }
            else
            {
                TotalNodes.SetMatrix(0,i*this->DiscretY+j,2);
            }


            if(val2==this->PosY)                      //Pertenece a la linea inferior
            {
                TotalNodes.SetMatrix(1,i*this->DiscretY+j,2);
                //En el caso que pertenezca al contorno, se obtiene su normal, en este caso [0,-1]
                TotalNodes.SetMatrix( 0,i*this->DiscretY+j,3);
                TotalNodes.SetMatrix(-1,i*this->DiscretY+j,4);

            }
            else
            {
                TotalNodes.SetMatrix(0,i*this->DiscretY+j,2);
            }

            if(val2==this->PosY+this->SideY)          //Pertenece a la linea superior
            {
                TotalNodes.SetMatrix(1,i*this->DiscretY+j,2);
                //En el caso que pertenezca al contorno, se obtiene su normal, en este caso [0,1]
                TotalNodes.SetMatrix( 0,i*this->DiscretY+j,3);
                TotalNodes.SetMatrix( 1,i*this->DiscretY+j,4);
            }
            else
            {
                TotalNodes.SetMatrix(0,i*this->DiscretY+j,2);
            }
        }
    }
}


void Rectangle::ShowNodes()
{
    TotalNodes.ShowMatrix();
}


