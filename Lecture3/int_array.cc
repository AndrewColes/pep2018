#include <iostream>
using std::cout;
using std::endl;

class int_array {

private:
    int * elements;
    int arraySize;
    
public:
    
    class iterator {
        
    private:
        
        int * current;
        
    public:
        
        iterator(int * currentIn) : current(currentIn) {}
        
        int & operator*() {
            return *current;
        }
        
        iterator & operator++() {
            ++current;
            return *this;
        }
        
        iterator operator++(int) {
            iterator toReturn = *this;
            ++current;
            return toReturn;
        }
        
        bool operator!=(const iterator & other) const {
            return (current != other.current);
        }
        
        bool operator==(const iterator & other) const {
            return (current == other.current);
        }
    };
    
    int_array(const int s)
        : elements(new int[s]),
          arraySize(s) {
    }
    
    ~int_array() {
        delete [] elements;
    }
    
    const int & operator[](const int i) const {
        return elements[i];
    }
    
    int & operator[](const int i) {
        return elements[i];
    }
    
    int size() const {
        return arraySize;
    }
    
    iterator begin() {
        return iterator(elements);
    }
    
    iterator end() {
        return iterator( &(elements[size()]) );
    }
};

void readFromIt(const int_array & something) {
    cout << something[0] << "\n";
    int a = something[0];
    a = 11;
}

int main() {
    int_array x(10);
    x[0] = 42;
    x[1] = 11;
    cout << x[0] << "\n";
    cout << "Size is " << x.size() << "\n";
    readFromIt(x);
    
    int_array::iterator itr = x.begin();
    cout << *itr << "\n";    
    ++itr;
    cout << *itr << "\n";
    
    auto itrEnd = x.end();
    
    for (; itr != itrEnd; ++itr) {
        cout << *itr << "\n";
    }
    
    ++itr;
    ++itr;
    ++itr;
    
    cout << *itr << "\n";
    
    ++itr;
}



