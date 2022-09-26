#include<iostream>
#include<memory>
using namespace std;

class rectangle
{
	int length;
	int width;
	
	public:
		
		rectangle(int l,int w)
		{
			length=l;
			width=w;
		}
//		~rectangle()
//	    {
//	    	delete(length);
//			delete(width);
//		}
		
		int area()
		{
			return length*width;
		}
};

int main()
{
	shared_ptr<rectangle> p1 (new rectangle(10, 5));
//	std::unique_ptr<rectangle> p1 = make_unique<rectangle>(10,5);
	cout<<p1->area()<<endl;
	shared_ptr<rectangle> p2;
	shared_ptr<rectangle> p3;
    p2=p1;
    p3=p2;
	cout<<p2->area()<<endl;
	cout<<p1->area()<<endl;
	cout<<p3->area()<<endl;
	cout<<p1.use_count()<<endl;
	cout<<p2.use_count()<<endl;
	cout<<p3.use_count()<<endl;
}
