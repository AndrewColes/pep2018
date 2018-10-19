#include <vector>
using std::vector;

#include <iostream>
using std::cout;

int main() {

    vector<int> lotsOfNumbers(1000000);
    cout << lotsOfNumbers.size() << "\n";
    
    
    vector<int> a(std::move(lotsOfNumbers));

    cout << lotsOfNumbers.size() << "\n";
    cout << a.size() << "\n";
}
