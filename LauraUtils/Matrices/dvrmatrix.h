#ifndef DVRMATRIX_H
#define DVRMATRIX_H
#include <string>
#include <QString>
class DVRMatrix
{
private:
    std::string     Name             ;
    unsigned int    Columns          ;
    unsigned int    Rows             ;
    unsigned int    Size             ;
    float*          Matriz           ;

public:

    DVRMatrix(unsigned int R,unsigned int C,std::string n);

    void SetParameters     (unsigned int R, unsigned int C, std::string   ) ;
    void SetMatrix         (float number, unsigned int m,unsigned int n   ) ;
    void ShowMatrix        (                            ) ;
    void ShowParameters    (bool showMatrix             ) ;
    void IniZeros          (                            );

};

#endif // DVRMATRIX_H
