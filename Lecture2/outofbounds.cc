#include <iostream>

using std::cout;
using std::endl;

#include <vector>

using std::vector;

void bigNumber() {
    cout << "Wow, it's really big!\n";
}

int main() {
 
    vector<int> numbers{1,2,3,4,5};
    
    int biggest;
    
    for (int i = 0; i < 5; ++i) {
        cout << numbers[i] << "\n";
        cout << biggest << "\n";
        
        if (numbers[i] > biggest) {
            biggest = numbers[i];
        }        
    }
    
    cout << biggest << "\n";
    
    return 0;
}
