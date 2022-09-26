#include<iostream>
using namespace std;
class A
{
	public:
	A(int x)
	{
		cout<<"A"<<x<<endl;
	}
};

class B:public A
{
	public:
		B(int x)
	{
		cout<<"B"<<x<<endl;
	}
};

int main()
{
	B b(10);
	return 0;
}
