#include <iostream>
using std::cout;

#include <utility>

#include <vector>
using std::vector;

#include <list>
using std::list;

template<typename T>
const T & max(const T & a, const T & b) {
    if (a < b) {
        return b;
    } else {
        return a;
    }
}

template<typename T>
void swap(T & a, T & b) {
    T c = a;
    a = b;
    b = c;
}

std::pair<int,double> returnSomething() {
    int x = 3;
    double y = 4.0;
    
    return std::make_pair(x,y);
}

template<typename T>
class less {
    bool operator()(const T & a, const T & b) const {
        return a < b;
    }
};

template<typename T>
void printIt(const T & p) {
    for (auto & element : p) {
        cout << element << "\n";
    }
};

int main() {
    int x = 3;
    int y = 4;
    int z = max(3,4);
    
    swap(x,y);
    
    vector<int> numbers;
    
    numbers.push_back(42);
    numbers.push_back(11);
    
    std::pair<int,double> foo = returnSomething();

    printIt(numbers);
 
    list<double> moarNumbers{1.0,2.0,3.0};
    printIt(moarNumbers);
    
    int tryThis = 9000;
    printIt(tryThis);
}
