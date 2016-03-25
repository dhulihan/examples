#include <iostream>

class Qux
{
        public:
                Qux() : _foo( "initialize foo to this!" ) { }
                // This is nearly equivalent to
                // Qux() { _foo = "initialize foo to this!"; }
                // but without the extra call to construct an empty string

        std::string _foo;
};

int main(){

	Qux q;
	std::cout << "q._foo is " << q._foo;
	return 0;
}

