#ifndef DVRMATRIX_H
#define DVRMATRIX_H
#include <string>
#include "globalLib/Global/globalLib.h"

/* *********************CLASS DVRMatrix************************
   ***********************************************************
   ***********************************************************

   This class defines a matrix from a float pointer and its characteristics:

     - Row.
     - Column


  It assumes every material have a mechanic, electric and thermal
  behavior

 *
 *
 */

class LAURAUTILSSHARED_EXPORT DVRMatrix
{
private:
    std::string   Name    ;
    unsigned int  Columns ;
    unsigned int  Rows    ;
    unsigned int  Size    ;
    float*        Matriz  ;

public:

    DVRMatrix();

    DVRMatrix(unsigned int R,unsigned int C,std::string n);



    void SetParameters  (unsigned int R    ,
                         unsigned int C    ,
                         std::string  name );

    void SetMatrix      (float        number,
                         unsigned int m     ,
                         unsigned int n     );

    void ShowMatrix     ()                ;
    void ShowParameters (bool showMatrix) ;

    unsigned int getNumberColumns();
    unsigned int getNumberRows();
    unsigned int getSize();
    float*       getMatrix();
private:
    void IniZeros();

};

#endif // DVRMATRIX_H
