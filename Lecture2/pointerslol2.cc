#include <string>
#include <iostream>

using std::cout;
using std::string;


int main() {
    string andrew = "andrew";
    
    cout << andrew << "\n";
    
    string * andrew_pointer = new string("andrew");
    
    cout << *andrew_pointer << "\n";
    
    string * anotherone = &andrew;
    
    int * foo = (int*) anotherone;
    
    cout << *foo << "\n";
}
