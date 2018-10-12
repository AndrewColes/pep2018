#include <list>
using std::list;


#include <iostream>
using std::cout;

int main() {
    list<int> numbers{2,4,6,8};

    list<int>::iterator itr = numbers.begin();
    cout << *itr << "\n";

    ++itr;
    cout << *itr << "\n";

    ++itr;
    cout << *itr << "\n";

    itr = numbers.insert(itr, 5);
    
    cout << "\n";
    for (auto & element : numbers) {
        cout << element << "\n";
    }
    
    cout << "\n";
    numbers.erase(numbers.begin());
    
    for (auto & element : numbers) {
        cout << element << "\n";
    }
    
}
