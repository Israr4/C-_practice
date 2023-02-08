#include<iostream>
#include<gtest/gtest.h>

class Rectangle
{
    public:
    int rectanglefun(int a,int b,int c)
    {
        if(a<0||b<0||c<0)
        {
            return -1;
        }
    }
};