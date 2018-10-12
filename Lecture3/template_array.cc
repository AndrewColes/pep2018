#include <iostream>
using std::cout;
using std::endl;

#include <utility>

template<typename T>
class template_array {

private:
    T * elements;
    int arraySize;
    
public:
    
    template_array(const int s)
        : elements(new T[s]),
          arraySize(s) {
    }
    
    ~template_array() {
        delete [] elements;
    }
    
    const T & operator[](const int i) const {
        return elements[i];
    }
    
    T & operator[](const int i) {
        return elements[i];
    }
    
    int size() const {
        return arraySize;
    }
    
};

void readFromIt(const template_array<int> & something) {
    cout << something[0] << "\n";
    int a = something[0];
    a = 11;
}

class JourneyInfo {
  
private:
    int changes;
    int journeyTime;
    
};

int main() {
    template_array<int> x(10);
    x[0] = 42;
    cout << x[0] << "\n";
    cout << "Size is " << x.size() << "\n";
    readFromIt(x);
    
    template_array<double> y(14);
    y[0] = 17.3;
    cout << y[0] << "\n";
    
    std::pair<int,int> foo(1,19);
    
    cout << foo.first << "\n";
    cout << foo.second << "\n";

    
}



