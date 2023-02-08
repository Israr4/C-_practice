#include <iostream>

class Base
{
	public:
	int a,b,*ptr;
	Base()
	{
		ptr = new int;
	}

	void getdata(int x,int y,int z)
	{
		a = x;
		b = y;
		*ptr = z;
	}

	void display()
	{
		std::cout<<a<<std::endl;
		std::cout<<b<<std::endl;
		std::cout<<ptr<<std::endl;
	}

	Base(Base &obj)
	{
		a = obj.a;
		b = obj.b;
		ptr = new int;
		*(ptr) = *(obj.ptr);
		std::cout<<"Copy Constructor Executed"<<std::endl;
	}
};

int main()
{
	Base b;
	b.getdata(10,20,30);
	Base b1(b);
	b.display();
	b1.display();
}
