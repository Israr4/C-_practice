#include<iostream>
#include"Smartpointersheaderfile.h"
int main()
{
//SmartPointer p3("Umer",1212);
//p3.Display();
SharedPointer p1("Ali",1212,12);
//p2.Display();
SharedPointer p2(p1);
SharedPointer p3(p2);
//p1.Display();
//SharedPointer p3("Ahsan",12);
//p1=p2;
p1.Display();
p2.Display();
p3.Display();
p1.reference_count();


UniquePointer pt2("Ali",1212,12);
UniquePointer pt1(pt2);
pt1.Display();
pt2.Display();
}
