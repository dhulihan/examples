#include <iostream>
#include <memory>
struct Foo {
	std::string bar;
	Foo() {
		std::cout << "Constructor called\n";
		bar = "defined";
	}
};

class Qux
{
        public:
                //Qux() : _foo(std::make_shared<Foo>()) { }
                Qux() : _foo() { }
                //Qux() : _foo(new Foo()) { }
                // This is nearly equivalent to
                // Qux() { _foo = "initialize foo to this!"; }
                // but without the extra call to construct an empty string

        std::shared_ptr<Foo> _foo;
        //Foo * _foo;
};

int main(){

	Qux q;
	//std::cout << "q._foo is " << *q._foo;
	std::cout << "q->_foo->bar is " << q._foo->bar;
	return 0;
}

