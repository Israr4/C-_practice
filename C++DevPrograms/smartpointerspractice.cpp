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
	
		
	void func()
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
		func();
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
   	    func();
		name=n;
		data=d;	
		ptr=&p;
	}
	void Display()
	{
		std::cout<<"Name=  "<<name<<"  Data= "<<data<<" pointer Value= "<<*ptr<<" pointer Address= "<<ptr<<std::endl;
	};
	
//	void reset()
//	{
//		name=
//	}
	UniquePointer (UniquePointer &obj)   //copy constructor
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
	UniquePointer (UniquePointer &obj)   //copy constructor
	{
		name!=obj.name;
		data!=obj.data;
		ptr=new int;
		*ptr=!*(obj.ptr);
		std::cout<<"Copy Constructor Executed"<<std::endl;
	}
};

//class SharedPointer:public SmartPointer
//{
//	public:
//	int *ptr=NULL;
//	int static count;
//	void use_count()
//	{
//		std::cout<<count<<std::endl;
//	}
//	SharedPointer(std::string n,int d,int p):SmartPointer(n,d)
//   	{
//   	    func();
//		name=n;
//		data=d;	
//		ptr=&p;
//		count++;
//	}
//		void Display()
//	{
//		std::cout<<"Name=  "<<name<<"  Data= "<<data<<" pointer Value= "<<*ptr<<" pointer Address= "<<ptr<<std::endl;
//	    
//	};
//	SharedPointer(SharedPointer &obj)   //copy constructor
//	{
//		name=obj.name;
//		data=obj.data;
//		ptr=new int;
//		*ptr=*(obj.ptr);
//		std::cout<<"Copy Constructor Executed"<<std::endl;
//		count++;
//	}
//	
//    
//};
//int SharedPointer::count=0;


int main()
{
//SmartPointer p3("Umer",1212);
//p3.Display();
//SharedPointer p1("Ali",1212,12);
////p2.Display();
//SharedPointer p2(p1);
////SharedPointer p3(p2);
////p1.Display();
////SharedPointer p3("Ahsan",12);
////p1=p2;
//p1.Display();
//p2.Display();
////p3.Display();
//p1.use_count();


UniquePointer p2("Ali",1212,12);
UniquePointer p1=p2;
p1.Display();
p2.Display();
}
