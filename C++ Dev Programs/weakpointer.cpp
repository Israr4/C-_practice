#include<iostream>
#include<memory>

class Team
{
	std::shared_ptr<Person> obj1;
	~Team()
	{
		std::cout<<"Destructor Execuetd"<<std::endl;
	}
};

class Person
{
	std::shared_ptr<Team> obj2;
	~Person()
	{
		std::cout<<"Destructor Executed"<<std::endl;
	}
};

int main()
{
	auto a=make_shared<Team>();
	auto b=make_shared<Person>();
	a->obj1=b;
	b->obj2=a;
}
