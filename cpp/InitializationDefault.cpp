#include <iostream>

class C
{
	public:
		C()
		{
			std::cout << "C constructor called\n";
		};

	private:
};

class B
{
	public:
		B()
		{
			std::cout << "B constructor called\n";
		};

	private:
		C c;
};

class A
{
	public:
		A()
		{
			std::cout << "A constructor called\n";
		};

	private:
		B b;
};

int main()
{
	A a;
	return 0;
}
