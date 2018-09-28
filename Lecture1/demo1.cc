#include <vector>
using std::vector;

#include <iostream>
using std::cout;

int main() {
    
    vector<int> numbers{17,11,200,-4,1};
    //numbers[0] = 17;
    //numbers[1] = 11;
    //...
    
    for (int i = 0; i < numbers.size(); ++i) {
        for (int j = 0; j < numbers.size() - 1; ++j) {
            if (numbers[j] < numbers[j+1]) {
                int temp = numbers[j];
                numbers[j] = numbers[j+1];
                numbers[j+1] = temp;                
            }
        }
    }
    
    for (int i = 0; i < numbers.size(); ++i) {
        cout << numbers[i] << "\n";
    }
    
    
    return 0;
}
