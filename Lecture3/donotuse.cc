#include <iostream>
using std::cout;

class Foo {

public:

    int * a;

    Foo() : a(new int(42)) {}

    ~Foo(int x) {
        delete a;
        cout << "Bye bye\n";
    }

};

int main() {
    Foo x;
    x.~Foo(7);
}
