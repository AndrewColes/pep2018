#include <iostream>
using std::cout;

class SomeClass {

private:
    int x;
    int y;
public:
    
    SomeClass(const int xIn, const int yIn)
        : x(xIn), y(yIn) {
            // constructor body can be empty
    }
    
    SomeClass(const SomeClass & other)
        : x(other.x), y(other.y) {
        cout << "I have copied a SomeClass object\n";
    }
    
    SomeClass() = default;
    
    SomeClass & operator=(const SomeClass & other) {
        x = other.x;
        y = other.y;
        
        cout << "I have assigned to a SomeClass object\n";
        
        return *this;
    }
};

void myFunction(SomeClass foo) {
    
}

int main() {
    SomeClass a(4,7);
    SomeClass b(1,2);
    
    myFunction(a);
    
    b = a;
    
    SomeClass f;
    SomeClass g;
    
    g = f = a;
}
