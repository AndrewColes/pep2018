#include <iostream>
#include <string>

using std::cout;
using std::string;

class IHazStringPtr {

private:
    string * s;

public:

    IHazStringPtr()
        : s(new string()) {
        
    }

    IHazStringPtr(const IHazStringPtr & other)
    {
        s = new string(*(other.s));
    }
    
    ~IHazStringPtr() {
        cout << "Destructing an object\n";
        delete s;
    }
    

    void addCharacter(const char c) {
        s->push_back(c);
    }

    void printIt() const {
        cout << *s << "\n";
    }
    
    IHazStringPtr & operator=(const IHazStringPtr & other) {
        
        if (this == &other) {
            return *this;
        }
        
        delete s;
        if (other.s != nullptr) {
            s = new string(*(other.s));
        } else {
            s = nullptr;
        }
        
        return *this;
    }
};

int main() {
    IHazStringPtr a;
    a.addCharacter('a');
    a.addCharacter('b');
    a.addCharacter('c');
    a.printIt();
    
    IHazStringPtr b;
    
    b = a;
    
    a.addCharacter('d');
    
    a.printIt();
    b.printIt();
    
    a = a;
    
    
}
