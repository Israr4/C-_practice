#include"Smartpointer.h"
int main()
{
//Smart_Pointer p3("Umer",1212);
//p3.display();
Shared_Pointer p1("Ali",1212,12);
//p2.display();
Shared_Pointer p2(p1);  

Shared_Pointer p3(p2);
//p1.display();
//Shared_Pointer p3("Ahsan",12);
//p1=p2;
p1.display();
p2.display();
p3.display();
p1.use_count();


// Unique_Pointer pt2("Ali",1212,12);
// Unique_Pointer pt1(pt2);
// pt1.display();
// pt2.display();
return 0;
}