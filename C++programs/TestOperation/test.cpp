#include<iostream>
#include<gtest/gtest.h>
#include "newfile.h"



TEST(newtestcategory , testcategoryname)  //for rectangle functions
{
    Rectangle obj;
    ASSERT_EQ(-1,obj.rectanglefun(10,20,-30));
}


