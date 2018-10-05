#include <string>
#include <iostream>

using std::cout;
using std::string;

void myFunction(const string * s) {
    cout << s->size() << "\n";
    
}

int main() {
    string * myString = nullptr;
    myFunction(myString);
}
