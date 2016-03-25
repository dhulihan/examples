#include <iostream>
#include <memory>
struct Foo {
	std::string bar;
};
class Qux
{
	public:
		//Qux() : _foo(std::make_shared<Foo>()) { }
		Qux() : _foo(new Foo()) { }
		std::shared_ptr<Foo> _foo;

};

int main(){

	Qux q;
	//std::cout << "q._foo is " << *q._foo;
	std::cout << "q->_foo->bar is " << q._foo->bar;
	return 0;
}

