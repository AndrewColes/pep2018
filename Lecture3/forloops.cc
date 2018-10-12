#include <vector>
using std::vector;

#include <iostream>
using std::cout;

#include <string>
using std::string;

int main() {
    const vector<int> numbers{1,2,3,4,5};
    
    for (int i = 0; i < 5; ++i) {
        const int & elem = numbers[i];
        
        cout << elem << "\n";
    }
    
    for (auto & elem : numbers) {
        cout << elem << "\n";
    }
}
