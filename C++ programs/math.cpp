#include<iostream>
#include "math.h"
#include <gtest/gtest.h> 

float maxnum(float x,float y)
{
     
     if(x>y)
     return x;
     else 
     return y;
}

float minnum(float x,float y)
{
     if(x>y)
     return y;
     else 
     return x;
}


float abs(float x)
{
     if(x>0)
     return x;
     else
     return x*-1;
}

float sin(float x)
{
     float y;
     float z;
     y=4*x*(180-x);
     z=40500-x*(180-x);
     x=y/z;
     return x;
}

float cos(float x)
{
     float y;
     float z;
     y=(x*x)-4*(x*x);
     z=(x*x)+(x*x);
     x=y/z;
     return x;
}


float tan(float x)
{
     x= sin(x) / cos(x);  //agar in ko void karta han to wo to kuch return hi ni kara raha islia error deta ha void ma
     return x;
}

float acos(float x)
{
     x= 1/cos(x);
     return x;
}

float asin(float x)
{
     x= 1/sin(x);
     return x;
}

float atan(float x)
{
     x= 1/tan(x);
     return x;
}

float cbrt(float x)
{
     float cube=0;
     for(int i=0;i<=1000;i++)
     {
          cube=i*i*i;
          if(cube==x)
          {
               return i;
          }
          else if(cube>x)
          {
               break;
          }
     
     }
}

float cosh(float x)
{
     float z=1;
     float j=1;
     float a=0;
     float b=0;
     float c=0;
     for(int i=0;i<x;i++)
     {
          z=z*2.7182;
     }  
     a=z;

     for(int i=0;i<x;i++)
     {
          j=j*(-2.7182);
     }  
     b=j;
     
     c=(a+b)/2;
     return c;
}

float sinh(float x)
{
     float z=1;
     float j=1;
     float a=0;
     float b=0;
     float c=0;
     for(int i=0;i<x;i++)
     {
          z=z*2.7182;
     }  
     a=z;

     for(int i=0;i<x;i++)
     {
          j=j*(-2.7182);
     }  
     b=j;
     
     c=(a+b)/2;
     return c;
}

float tanh(float x)
{
     x=sinh(x)/cosh(x);
     return x;
}

float pow(float x,float y)
{
     float z=1;
     for(int i=0;i<y;i++)
     {
          z=z*x;
     } 

     return z;
}

float factorial(float x)
{
     int fact=1;
     for(int i=x;i<=1;i--)
     {
          fact=fact*i;
     }
     return fact;
}