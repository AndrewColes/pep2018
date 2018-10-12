#include <iostream>
using std::cout;
using std::endl;

class double_array {

private:
    double * elements;
    int arraySize;
    
public:
    
    double_array(const int s)
        : elements(new double[s]),
          arraySize(s) {
    }
    
    ~double_array() {
        delete [] elements;
    }
    
    const double & operator[](const int i) const {
        return elements[i];
    }
    
    double & operator[](const int i) {
        return elements[i];
    }
    
    int size() const {
        return arraySize;
    }
    
};

void readFromIt(const double_array & something) {
    cout << something[0] << "\n";
    double a = something[0];
    a = 11;
}

int main() {
    double_array x(10);
    x[0] = 42;
    cout << x[0] << "\n";
    cout << "Size is " << x.size() << "\n";
    readFromIt(x);
    
}



