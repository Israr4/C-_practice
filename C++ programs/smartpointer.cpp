#include<iostream>
#include"Smartpointer.h"

void Smart_Pointer::pointer_initializer()
{
	
		ptr=new std::string;
		ptr=&name;
		ptr1=new int;
		ptr1=&data;
}

Smart_Pointer::Smart_Pointer()
{
		name="";
		data=0;
}

Smart_Pointer::Smart_Pointer(std::string n,int d)
{
		pointer_initializer();
		name=n;
		data=d;
}

Smart_Pointer::~Smart_Pointer()
{
		std::cout<<"Destructor Executed"<<std::endl;
		delete(ptr,ptr1);
}

Unique_Pointer::Unique_Pointer(std::string n,int d,int p)//:Smart_Pointer(n,d)
{
   	    pointer_initializer();
		name=n;
		data=d;	
		ptr=&p;
}
	
void Unique_Pointer::display()
{
	std::cout<<"Name=  "<<name<<"  Data= "<<data<<" pointer Value= "<<*ptr<<" pointer Address= "<<ptr<<std::endl;
}

Unique_Pointer::Unique_Pointer(Unique_Pointer &obj)
{
	     name=obj.name;
		 obj.name="";
		 data=obj.data;
		 obj.data=0;
		 ptr=new int;
	     *ptr=*(obj.ptr);
		 obj.ptr=NULL;
		 std::cout<<"Copy Constructor Executed"<<std::endl;
}

void Shared_Pointer::use_count()
{
		std::cout<<"Counter References: "<<count<<std::endl;
}

Shared_Pointer::Shared_Pointer(std::string n,int d,int p):Smart_Pointer(n,d)
{
   	    pointer_initializer();
		name=n;
		data=d;	
		ptr=&p;
		count++;
}

void Shared_Pointer::display()
{
	std::cout<<"Name=  "<<name<<"  Data= "<<data<<" pointer Value= "<<*ptr<<" pointer Address= "<<ptr<<std::endl;
}

Shared_Pointer::Shared_Pointer(Shared_Pointer &obj)   //copy constructor
{
		name=obj.name;
		data=obj.data;
		ptr=new int;
		*ptr=*(obj.ptr);
		std::cout<<"Copy Constructor Executed"<<std::endl;
		count++;
}