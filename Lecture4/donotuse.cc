#include <iostream>
using std::cout;

class Foo {

public:

    int & someFunction() {
        int x = 10;
        return x;
    }

};

void increment(const double & i) {
    i = i + 1;
}

int main() {

    int x = 7;
    increment(x);
    cout << x << "\n";
    
}
