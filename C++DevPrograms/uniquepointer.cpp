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
		
		int area()
		{
			return length*width;
		}
};

int main()
{
	unique_ptr<rectangle> p1(new rectangle(10, 5));
    //std::unique_ptr<rectangle> p1 = make_unique<rectangle>(10,5);
	cout<<p1->area()<<endl;
	unique_ptr<rectangle> p2;
    //p2=p1;
    p2=move(p1);
	cout<<p2->area()<<endl;
	cout<<p1->area()<<endl;   //nothing print there because we move them to p2
}
