#include <iostream>
using std::cout;

#include <string>
using std::string;

int main() {
    string * s = new string("Hello");
    
    cout << *s << "\n";
    
    delete s;
    
    cout << *s << "\n";
    
    string t;
    
    delete &t; // don't do this
}
