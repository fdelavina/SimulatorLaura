#ifndef POLINOMIALANDDERIVADES_H
#define POLINOMIALANDDERIVADES_H

#include<cmath>
#include <functional>

inline float suma(float x,float y)
{
    return x+y;
}
std::function<float(float,float)> sumafuncion1 = suma;


inline float suma2(float x,float y)
{
    return 2*x+2*y;
}
std::function<float(float,float)> sumafuncion2 = suma2;

inline float Polinomial1(float x,float y,float *c)
{
    return c[0]*x+c[1]*y+c[2];
}

inline float Polinomial1DerX(float *c)
{
    return c[0];
}
inline float Polinomial1DerY(float *c)
{
    return c[1];
}
inline float Polinomial1DerXX()
{
    return 0.0;
}
inline float Polinomial1DerYY()
{
    return 0.0;
}
inline float Polinomial1DerXY()
{
    return 0.0;
}
inline float Polinomial2(float x,float y,float *c)
{
    return c[0]*pow(x,2)+c[1]*pow (y,2) + c[2]*x*y
          +c[3]*x + c[4]*y + c[5];
}

inline float Polinomial2DerX(float x,float y,float *c)
{
    return 2*c[0]*pow(x,1) + c[2]*y +c[3];
}

inline float Polinomial3(float x,float y,float *c)
{
    return c[0]*pow(x,3) + c[1]*pow(y,3) + c[2]*pow(x,2) + c[3]*pow(y,1) + c[4]*pow(x,1) + c[5]*pow(y,2)
          +c[6]*pow(x,2) + c[7]*pow(y,2) + c[8]*x*y
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
