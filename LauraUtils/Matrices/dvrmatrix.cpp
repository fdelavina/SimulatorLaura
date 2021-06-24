#include <iostream>
#include "dvrmatrix.h"

DVRMatrix::DVRMatrix()
{
    SetParameters(1,1,"undefined");

    IniZeros();
}

DVRMatrix::DVRMatrix(unsigned int R,unsigned int C,std::string n)
{
    SetParameters(R,C,n);

    IniZeros();
}

void DVRMatrix::IniZeros()
{
    this->Matriz = new float [this-> Size ];

    for(unsigned int i=0;i<Size;i++)
    {
        this->Matriz[i]=0.0;

    }

}

void DVRMatrix::SetParameters(unsigned int R,unsigned int C,std::string n)
{

    this-> Rows     = R   ;
    this-> Columns  = C   ;
    this-> Size     = R*C ;
    this-> Name     = n   ;

}

void DVRMatrix::ShowParameters(bool showMatrix)
{

    std::cout << "My name is "      <<this->Name    <<" and "
              << "I got "           <<this->Rows    <<" rows "
              << "and "             <<this->Columns <<" columns "
              << "with a total of " <<this->Size    <<" components." <<"\n\n";

    if (showMatrix==true)
    {
        ShowMatrix();
    }


}

unsigned int DVRMatrix::getNumberColumns()
{
    return Columns;
}

unsigned int DVRMatrix::getNumberRows()
{
    return Rows;
}

unsigned int DVRMatrix::getSize()
{
    return Size;
}

float *DVRMatrix::getMatrix()
{
    return Matriz;
}

void DVRMatrix::ShowMatrix()
{

    std::cout<<"The matrix called "<<this->Name<<" has the next components \n";
    for    (unsigned int i=0;i<this->Rows   ;i++)
    {
        for(unsigned int j=0;j<this->Columns;j++)
        {
            if (j==(this->Columns)-1)
            {
                if(i==(this->Rows)-1)
                {
                    std::cout<<this->Matriz[this->Columns*i+j]<<"\n\n";
                }
                else
                {
                    std::cout<<this->Matriz[this->Columns*i+j]<<"\n";
                }


            }
            else
            {

                std::cout<<this->Matriz[this->Columns*i+j]<<" ";
            }
        }
    }
}

void DVRMatrix::SetMatrix(float number,unsigned int ChosenColumn,unsigned int ChosenRow)
{
    this->Matriz[this->Columns*ChosenColumn+ChosenRow]=number;

}
