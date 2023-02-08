#include <iostream>
   

   // Compile time polymorphism(default)
// class Base
// {
// 	public:
// 	void show()
// 	{
// 		std::cout<<"Hello Base Class"<<std::endl;
// 	}
// };

// class Derived : public Base
// {
// 	public:
// 	void show()
// 	{
// 		std::cout<<"Hello Derived Class"<<std::endl;
// 	}
// };
//     void greeting(Base &obj)
//     {
//         std::cout<<"Greeting";
//         obj.show();
//     }

// int main()
// {
// 	Base a;
// 	Derived b;
// 	a.show();
// 	b.show();
// 	Base *ptr = new Derived();  // thats the issue in compile time polymorphism that it show base in it to over come this problem we use run time polymorphism
// 	ptr -> show();
//     greeting(a);
//     greeting(b);

// }



      //Runtime polymorphism to avoid the problem of base class matlab agar base class ka pointer banaya jaya to wo sirf base class ko hi show karta tha is sa bachna ka 
      // lia hum na virtual keyword ko use kia ha

      class Base
{
	public:
	virtual void show()
	{
		std::cout<<"Hello Base Class"<<std::endl;
	}
};

class Derived : public Base
{
	public:
	void show()
	{
		std::cout<<"Hello Derived Class"<<std::endl;
	}
};

class Derived1 : public Derived
{
	public:
	void show()
	{
		std::cout<<"Hello Derived1 Class"<<std::endl;
	}
};

class Derived2 : public Derived1
{
	public:
	void show()
	{
		std::cout<<"Hello Derived2 Class"<<std::endl;
	}
};
    

int main()
{
	Base a;
	Derived  b;
    Derived1 c;
    Derived2 d;

	Base *ptr = new Base();  // thats the issue in compile time polymorphism that it show base in it to over come this problem we use run time polymorphism
	Base *ptr1 = new Derived();
    Base *ptr2 = new Derived1();
    Base *ptr3 = new Derived2();
    ptr  -> show();
    ptr1 -> show();
    ptr2 -> show();
    ptr3 -> show();
    // greeting(a);
    // greeting(b);

}