#include<iostream>

class Smart_Pointer
{
	public:
	virtual int display()=0;
	std::string name;
	std:: string* ptr=NULL;
	int data;
	int* ptr1=NULL;
	
	void pointer_initializer();
	Smart_Pointer();
	Smart_Pointer(std::string n,int d);
	~Smart_Pointer();
	
};

class Unique_Pointer : Smart_Pointer
{
	public:
		int *ptr=NULL;
		Unique_Pointer(std::string n,int d,int p);    //:SmartPointer(n,d);
		int display();
		Unique_Pointer(Unique_Pointer &obj);
};

class Shared_Pointer : Smart_Pointer
{
	public:
	int *ptr=NULL;
	int  count=0;
	void use_count();
	Shared_Pointer(std::string n,int d,int p);  //:SmartPointer(n,d);
	int display();
	Shared_Pointer(Shared_Pointer &obj);
};

//int Shared_Pointer::count=0;   //static member is always defined outside the class.