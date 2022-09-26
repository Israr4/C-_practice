#include<iostream>
using namespace std;
template<class t>

class funny                    //we created our own smart pointer
{
	t* ptr;
	public:
		funny(t* p=NULL)
		{
			ptr=p;
		}
		~funny()
		{
			cout<<"Destructor Executed"<<endl;
			delete(ptr);
		} 
		
		
		t& operator * ()
		{
			return *ptr;
		}
		
		t* operator ->()   //not used
		{
			return ptr;
		}
		
};

int main()
		{
			funny<int> ptr(new int());  //syntax for template to make new pointer
			*ptr=20;
			cout<<*ptr<<endl;
			return 0;
		}
