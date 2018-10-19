#include <iostream>
using std::cout;
using std::ostream;

#include <fstream>
using std::ofstream;

#include <vector>
using std::vector;

#include "my_unique_ptr.h"

class Coordinate {

protected:
    
    int x;
    int y;
    
public:
    
    Coordinate(int xIn, int yIn)
        : x(xIn),
          y(yIn) {
              
        cout << "X was set to " << x << "\n";
        cout << "Y was set to " << y << "\n";
    }
    
    /*Coordinate()
        : x(0), y(0) {
    }*/
    
    int getX() const {
        return x;
    }

    int getY() const {
        return y;
    }
    
    void setX(int xIn) {
        x = xIn;
    }

    void setY(int yIn) {
        y = yIn;
    }
    
    bool operator==(const Coordinate & other) const {
        return (x == other.x && y == other.y);
    }
    
    Coordinate operator+(Coordinate other) {
        return Coordinate(x + other.x,
                          y + other.y);
    }
    
    bool operator<(Coordinate other) {
        return (x < other.x && y < other.y);
    }
    
    
};

ostream & operator<<(ostream & o, const Coordinate & rhs) {
    o << rhs.getX() << "," << rhs.getY();
    return o;
}


unique_ptr<Coordinate> someFunction() {
    return unique_ptr<Coordinate>(new Coordinate(3,4));
}

int main() {
    unique_ptr<Coordinate> b(new Coordinate(4,2));
    unique_ptr<Coordinate> a;
    
    a = someFunction();
    
    a = b;
    
    
};

