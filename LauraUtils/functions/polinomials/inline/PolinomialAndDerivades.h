#ifndef POLINOMIALANDDERIVADES_H
#define POLINOMIALANDDERIVADES_H

#include<cmath>
#include <functional>


inline float Polinomial1(float *c, float x,float y)
{
    return c[0]*x+c[1]*y+c[2];
}
std::function<float(float*,float,float)> Polinomial1func = Polinomial1;


inline float Polinomial1DerX(float *c, float x,float y)
{
    return c[0];
}
std::function<float(float*,float,float)> Polinomial1DerXfunc = Polinomial1DerX;


inline float Polinomial1DerY(float *c, float x,float y)
{
    return c[1];
}
std::function<float(float*,float,float)> Polinomial1DerYfunc = Polinomial1DerY;


inline float Polinomial1DerXX(float *c, float x,float y)
{
    return 0.0;
}
std::function<float(float*,float,float)> Polinomial1DerXXfunc = Polinomial1DerXX;


inline float Polinomial1DerYY(float *c, float x,float y)
{
    return 0.0;
}
std::function<float(float*,float,float)> Polinomial1DerYYfunc = Polinomial1DerYY;


inline float Polinomial1DerXY(float *c, float x,float y)
{
    return 0.0;
}
std::function<float(float*,float,float)> Polinomial1DerXYfunc = Polinomial1DerXY;


//2sd degree
inline float Polinomial2(float *c, float x,float y)
{
    return c[0]*pow(x,2)+c[1]*pow (y,2) + c[2]*x*y
          +c[3]*x + c[4]*y + c[5];
}
std::function<float(float*,float,float)> Polinomial2func = Polinomial2;


inline float Polinomial2DerX(float *c, float x,float y)
{
    return 2*c[0]*x + c[2]*y +c[3];
}
std::function<float(float*,float,float)> Polinomial2DerXfunc = Polinomial2DerX;


inline float Polinomial2DerY(float *c, float x,float y)
{
    return 2*c[1]*y + c[2]*x + c[4];
}
std::function<float(float*,float,float)> Polinomial2DerYfunc = Polinomial2DerY;


inline float Polinomial2DerXX(float *c, float x,float y)
{
    return  2*c[0];
}
std::function<float(float*,float,float)> Polinomial2DerXXfunc = Polinomial2DerXX;


inline float Polinomial2DerYY(float *c, float x,float y)
{
    return  2*c[1];
}
std::function<float(float*,float,float)> Polinomial2DerYYfunc = Polinomial2DerYY;



inline float Polinomial2DerXY(float *c, float x,float y)
{
    return c[2] ;
}
std::function<float(float*,float,float)> Polinomial2DerXYfunc = Polinomial2DerXY;


inline float Polinomial3(float x,float y,float *c)
{          //c0*x^3      +   c1*y^3      +  c2*x^2       +    c3*y          +c4*x           +c5*y^2      + c6*x^2
    return c[0]*pow(x,3) + c[1]*pow(y,3) + c[2]*pow(x,2) + c[3]*pow(y,1) + c[4]*pow(x,1) + c[5]*pow(y,2) +c[6]*pow(x,2) + c[7]*pow(y,2) + c[8]*x*y +c[9]*x + c[10]*y  +c[11];
}

inline float Polinomial3DerX(float x,float y,float *c)
{
    return 3*c[0]*pow(x,2) + 2*c[2]*x +  + c[4] + 2*c[6]*pow(x,2) + c[7]*pow(y,2) + c[8]*x*y
          +c[9]*x + c[10]*y  +c[11];
}



inline float Polinomial4(float x,float y,float *c)
{
    return  c[0 ]*pow(x,4) + c[1 ]*pow(y,4) + c[2 ]*pow(x,3) + c[3 ]*pow(y,1) + c[4 ]*pow(x,2) + c[5 ]*pow(y,2) + c[6]*pow(x,1)+ c[7]*pow(y,3)
           +c[8 ]*pow(x,3) + c[9 ]*pow(y,3) + c[10]*pow(x,2) + c[11]*pow(y,1) + c[12]*pow(x,1) + c[13]*pow(y,2)
           +c[14]*pow(x,2) + c[15]*pow(y,2) + c[16]*x*y
           +c[17]*x + c[18]*y + c[19];
}

inline float Polinomial5(float x,float y,float *c)
{
    return  c[0 ]*pow(x,5) + c[1 ]*pow(y,5) + c[2 ]*pow(x,4) + c[3 ]*pow(y,1) + c[4 ]*pow(x,3) + c[5 ]*pow(y,2)
           +c[6 ]*pow(x,2) + c[7 ]*pow(y,3) + c[8 ]*pow(x,1) + c[9 ]*pow(y,4)
           +c[10]*pow(x,4) + c[11]*pow(y,4) + c[12]*pow(x,3) + c[13]*pow(y,1) + c[14]*pow(x,2) + c[15]*pow(y,2) + c[16]*pow(x,1) + c[17]*pow(y,3)
           +c[18]*pow(x,3) + c[19]*pow(y,3) + c[20]*pow(x,2) + c[21]*pow(y,1) + c[22]*pow(x,1) + c[23]*pow(y,2)
           +c[24]*pow(x,2) + c[25]*pow(y,2) + c[26]*x*y
           +c[27]*x+c[28]*y+c[29];
}

inline float Polinomial6(float x,float y,float *c)
{
    return  c[0 ]*pow(x,6) + c[1 ]*pow(y,6) + c[2 ]*pow(x,5) + c[3 ]*pow(y,1) + c[4 ]*pow(x,4) + c[5 ]*pow(y,2)
           +c[6 ]*pow(x,3) + c[7 ]*pow(y,3) + c[8 ]*pow(x,2) + c[9 ]*pow(y,4) + c[10]*pow(x,1) + c[11]*pow(y,5)
           +c[12]*pow(x,5) + c[13]*pow(y,5) + c[14]*pow(x,4) + c[15]*pow(y,1) + c[16]*pow(x,3) + c[17]*pow(y,2)
           +c[18]*pow(x,2) + c[19]*pow(y,3) + c[20]*pow(x,1) + c[21]*pow(y,4)
           +c[22]*pow(x,4) + c[23]*pow(y,4) + c[24]*pow(x,3) + c[25]*pow(y,1) + c[26]*pow(x,2) + c[27]*pow(y,2) + c[28]*pow(x,1) + c[29]*pow(y,3)
           +c[30]*pow(x,3) + c[31]*pow(y,3) + c[32]*pow(x,2) + c[33]*pow(y,1) + c[34]*pow(x,1) + c[35]*pow(y,2)
           +c[36]*pow(x,2) + c[37]*pow(y,2) + c[38]*x*y
           +c[39]*x+c[40]*y+c[41];
}






#endif // POLINOMIALANDDERIVADES_H
