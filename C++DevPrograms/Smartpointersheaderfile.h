#include<iostream>
#include<string>
class SmartPointer
{
	public:
	virtual void Display()=0;
	std::string name;
	std:: string* ptr=NULL;
	int data;
	int* ptr1=NULL;
	
		
	void PointerInitializer()
	{
		ptr=new std::string;
		ptr=&name;
		ptr1=new int;
		ptr1=&data;
	}
	SmartPointer()
	{
		name="";
		data=0;
	}
	
	SmartPointer(std::string n,int d)
	{
		PointerInitializer();
		name=n;
		data=d;
	}
	~SmartPointer()
	{
		std::cout<<"Destructor Executed"<<std::endl;
		delete(ptr,ptr1);
	}
};

class UniquePointer:public SmartPointer
{
	public:
		int *ptr=NULL;
//		std::string name;
//		int data;
   	UniquePointer(std::string n,int d,int p):SmartPointer(n,d)
   	{
   	    PointerInitializer();
		name=n;
		data=d;	
		ptr=&p;
	}
	void Display()
	{
		std::cout<<"Name=  "<<name<<"  Data= "<<data<<" pointer Value= "<<*ptr<<" pointer Address= "<<ptr<<std::endl;
	}

	
//	void reset()
//	{
//		name=
//	}
	
	UniquePointer(UniquePointer &obj)   //copy constructor
	{
		name=obj.name;
		 obj.name="";
		data=obj.data;
		 obj.data=NULL;
		ptr=new int;
		*ptr=*(obj.ptr);
		 obj.ptr=NULL;
		std::cout<<"Copy Constructor Executed"<<std::endl;
	}
};

class SharedPointer:public SmartPointer
{
	public:
	int *ptr=NULL;
	int static count;
	void use_count()
	{
		std::cout<<"Counter References: "<<count<<std::endl;
	}
	SharedPointer(std::string n,int d,int p):SmartPointer(n,d)
   	{
   	    PointerInitializer();
		name=n;
		data=d;	
		ptr=&p;
		count++;
	}
		void Display()
	{
		std::cout<<"Name=  "<<name<<"  Data= "<<data<<" pointer Value= "<<*ptr<<" pointer Address= "<<ptr<<std::endl;
	    
	};
	SharedPointer(SharedPointer &obj)   //copy constructor
	{
		name=obj.name;
		data=obj.data;
		ptr=new int;
		*ptr=*(obj.ptr);
		std::cout<<"Copy Constructor Executed"<<std::endl;
		count++;
	}
	
    
};
int SharedPointer::count=0;



