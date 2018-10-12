#include <iostream>

using std::cout;

int main() {

    double * numbers = new double[10];

    cout << numbers << "\n";
    
    numbers[0] = 17;
    numbers[1] = -11;
    
    cout << numbers[0] << "\n";
    cout << numbers[1] << "\n";

    cout << *numbers << "\n";
    
    cout << &(numbers[0]) << "\n";
    cout << &(numbers[1]) << "\n";
    
    double * copied = numbers;
    
    for (int i = 0; i < 10; ++i) {
        cout << *copied << "\n";
        ++copied;
    }
}

