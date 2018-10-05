#include <vector>
using std::vector;

void someFunction(const vector<int> & foo) {
    for (int i = 0; i < foo.size(); ++i) {
        cout << foo[i] << "\n";
    }
}

int main() {
    vector<int> numbers{1,2,3,4,5};

    for (int i = 0; i < numbers.size(); ++i) {
        numbers[i] += 1;
    }
    
    someFunction(numbers);
}
