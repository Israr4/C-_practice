#include<iostream>
#include<vector>
#include<string>
using namespace std;

class A
{
	public:
	void func()
	{
	int* p;
	cout<<"Value of:"<<p<<endl;        //print garbage value as we not initialized it.
	cout<<"Address of:"<<&p<<endl;     //Address of its own(pointer).
	p=0;
	cout<<"Value of:"<<p<<endl<<endl;        //Now we initialized it
	
	}
};

class B 
{
	public:
	void display()
	{
	double high_temp=1000.36;
	double low_temp=234663.26;
	double* ptr;
	ptr=NULL;
	ptr=&high_temp;
	ptr=&low_temp;
	cout<<"Address is:"<<ptr<<endl; //it show address of low_temp only and you see that it vary from one variale to other
	}
};

class C
{
	public:
		void show()
		{
			vector <string> stooges= {"Ali","Umer","Akbar"};
			vector<string>*ptr;
			ptr= &stooges;
			cout<<"First Stooges   "<<stooges.at(0)<<endl;
			
			for(auto stoog
			:*ptr)
			{
				cout<<stoog<<" "<<endl;
			}
			
			
		}
};

class D
{
	public:
		void Dynamicmemory()
		{
			int* ptr=0 ;
			cout<<&ptr<<endl;
			cout<<ptr<<endl;
		    ptr=new int;
		    cout<<&ptr<<endl;
		    *ptr=100;
		    cout<<ptr<<endl;
		    cout<<*ptr;
		    delete ptr;
		}
};

class E
{
	public:
	void arraypointer()
	{
		int array[]={1,2,3,4};
		cout<<"value of array score is:  "<<array<<endl;    //Array by default show address of first element 
		int *ptr={array};
		cout<<"value is same as above is "<<ptr<<endl<<endl;      //becausre we simply pass array in  pointer as its address
	    cout<<"Array Subscript Notation-----------------"<<endl;
	    cout<<array[0]<<endl;
	    cout<<array[1]<<endl;
	    cout<<array[2]<<endl;
	    cout<<array[3]<<endl;
	    cout<<"Pointer Subscript Notation---------------"<<endl;
	    cout<<ptr[0]<<endl;
	    cout<<ptr[1]<<endl;
	    cout<<ptr[2]<<endl;
	    cout<<ptr[3]<<endl;
	    cout<<"Array Offset Notation-----------------"<<endl;
	    cout<<*(array)<<endl;
	    cout<<*(array+1)<<endl;
	    cout<<*(array+2)<<endl;
	    cout<<*(array+3)<<endl;
	    cout<<"Pointer Offset Notation---------------"<<endl;
	    cout<<*(ptr)<<endl;
	    cout<<*(ptr+1)<<endl;
	    cout<<*(ptr+2)<<endl;
	    cout<<*(ptr+3)<<endl;
	
	}
};

class F
{
	public:
	void function(int* ptr)
	{
		*ptr*=2;
	}
	
	void function1()
	{
		int value=10;
		int* ptr=NULL;
		cout<<"Value Is:"<<value<<endl;
		function(&value);
		cout<<"Value Is:"<<value<<endl;
		
		cout<<"-----------------"<<endl;
		ptr=&value;
		function(ptr);
		cout<<"Value Is:"<<value<<endl;
	}
};

class G
{
	public:
		void swap(int* ptr1,int* ptr2)
		{
			int temp;
			temp=*ptr1;
			*ptr1=*ptr2;
			*ptr2=temp;
		}
		
		void display()
		{
		   int x=110;
		   int y=11000;
		   cout<<x<<" "<<y<<endl;
		   swap(&x,&y);
		   cout<<x<<" "<<y<<endl;	
		}
};

class H
{
	public:
		int* large(int *ptr1,int *ptr2)
		{
			if(*ptr1>*ptr2)
			{
				return ptr1;
			}
			else
			{
			return ptr2;
		    }
		}
		
		int man()
		{
			int a=100;
			int b=200;
			int* lptr=NULL;
			//lptr=large(&a,&b);
			cout<<*large(&a,&b)<<endl;
		}
};

class I
{
	int* function(int size,int value=0)
	{
		int* heapstorage=NULL;
		heapstorage=new int[size];  
	}
};

int main()
{
	
	//A a;
	//a.func();
	//B b;
	//b.display();
	//C c;
	//c.show();
	//D d;
	//d.Dynamicmemory();
	//E e;
	//e.arraypointer();
    //F f;
    //f.function1();
    //G g;
    //g.display();
    //H h;
    //h.man();
    I i;
    i.nevereturnptr();
}
