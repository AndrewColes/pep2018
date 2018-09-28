#include <iostream>
using std::cout;
using std::ostream;

#include <fstream>
using std::ofstream;

#include <vector>
using std::vector;

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

bool operator==(const Coordinate & a, const Coordinate & b) {
    return (a.getX() == b.getX() );
}

class Journey {
    
private:
    
    Coordinate start;
    Coordinate end;
    
    Coordinate origin;
    
public:
    
    Journey(Coordinate startIn, Coordinate endIn)
        : start(startIn),
          end(endIn),
          origin(0,0) {
    }
    
    Coordinate & getStart() {
        return start;
    }
};

void setXToZero(Coordinate & in) {
    in.setX(0);
}

void printX(const Coordinate & a) {
    cout << a.getX() << "\n";
}

int main() {
    Coordinate a(3,2);

    cout << a.getX() << "\n";
    cout << a.getY() << "\n";
    
    cout << a.getX() << "\n";
    cout << a.getY() << "\n";    
    
    Journey j(a,Coordinate(10,10));
    
    Coordinate startsAt = j.getStart();    
    printX(startsAt);

    cout << a << "\n";
    
    ofstream writer("written.txt");
    writer << a << "\n";
};

