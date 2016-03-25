#include <iostream>
#include <memory>
#include <string>
#include <algorithm>

class A
{
	std::string name;

	public:
		A();
		A(std::string nameu);
		A& operator=(A other);
};

A::A()
{
	std::cout << "Constructor called!\n";
	name = "undefined";
}

A::A(std::string name):
name(name)
{
}

A & A::operator=(A other)
{
	std::cout << "operator= called!\n";
	return *this;
}

int main()
{
    A a1;
    A a2 = a1; // does not call copy assignment
    //A a3(a1);
	//A a4;
	//a4 = a1; // user-defined copy assignment
}
