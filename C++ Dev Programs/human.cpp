#include<iostream>
#include<string>
using namespace std;

class human
{
	public:
		string name;
		int age;
	human(string n,int a)
	{
		name=n;
		age=a;
	}
	void display()
	{
		cout<<"Human Class Is Executed"<<endl;
		//cout<<"Enter Name"<<endl;
		cout<<name<<endl;
		//cout<<"Enter Age"<<endl;
		cout<<age<<endl<<endl;
	}
};
 class teacher:public human
 {
 	public:
 		string jdate;
 		string subject;
 		teacher(string j,string s,string n,int a):human(n,a)
 		{
 			jdate=j;
 			subject=s;
		 }
		 void display()
		 {
		 	cout<<"Teacher Class Is Executed"<<endl;
		 	cout<<name<<endl;
		 	cout<<age<<endl;
		 	//cout<<"Enter Joining Date"<<endl;
		 	cout<<jdate<<endl;
		 	//cout<<"Enter Subject"<<endl;
		 	cout<<subject<<endl<<endl;
		 }
 }; 
  class student:public human
 {
 	public:
 		int session;
 		int cursem;
 		student(int s,int c,string n,int a):human(n,a)
 		{
 			session=s;
 			cursem=c;
		 }
		 void display()
		 {
		 	cout<<"Student Class is Executed"<<endl;
		    cout<<name<<endl;
		 	cout<<age<<endl;
		 	//cout<<"Enter Session"<<endl;
		 	cout<<session<<endl;
		 	//cout<<"Enter Current Semester"<<endl;
		 	cout<<cursem<<endl<<endl;
		 }
 }; 
  class staff:public human
 {
 	public:
 		string jdate;
 		string type;
 		staff(string j,string t,string n,int a):human(n,a)
 		{
 			jdate=j;
 			type=t;
		 }
		 void display()
		 {
		 	cout<<"Staff Class Is Executed"<<endl;
		 	cout<<name<<endl;
		 	cout<<age<<endl;
		 	
		 	//cout<<"Enter Joining Date"<<endl;
		 	cout<<jdate<<endl;
		 	//cout<<"Enter Staff Type"<<endl;
		 	cout<<type<<endl<<endl;
		 }
 }; 
 
 
 int main()
 {
 	human h("Human",12);
    teacher t("5August","Math","Israr",20);
    student s(2022,8,"Ali",22);
    staff st("24 Feb","Clerk","Umer",24);
    h.display();
    t.display();
    s.display();
    st.display();
 	
 }
 
