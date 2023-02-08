#include<iostream>    //dependant
using namespace std;

class A
{
	public:
	int a;int b;int* ptr;
	A(int x,int y,int p)
	{
		a=x;
		b=y;
		ptr=&p;
		
	}
	 	A(A &obj)
	{
		a=obj.a;
		b=obj.b;
		ptr=obj.ptr;
	}
	
	void update()
	{
		a=a+1;
		b=b+1;
		*ptr=*ptr+1;
	}
	
	void display()
	{
		cout<<"Value of A is "<<a<<endl;
		cout<<"Value of B is "<<b<<endl;
		cout<<"Value of pointer p is "<<*ptr<<endl;
		cout<<"Address of pointer p is"<<ptr<<endl;
		cout<<endl;
	}
	
};

int main()
{
	A a(10,20,12);
	a.display();
    A a1(a);
    
	a.display();
	a1.display();
	
	a.update();
	a.display();
	a1.display();
	
}
