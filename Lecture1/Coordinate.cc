#include <iostream>
using std::cout;

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
    
    int getX() {
        return x;
    }

    int getY() {
        return y;
    }
    
    void setX(int xIn) {
        x = xIn;
    }

    void setY(int yIn) {
        y = yIn;
    }
    
    bool operator==(Coordinate other) {
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

class Journey {
    
protected:
    
    Coordinate start;
    Coordinate end;
    
    Coordinate origin;
    
public:
    
    Journey(Coordinate startIn, Coordinate endIn)
        : start(startIn),
          end(endIn),
          origin(0,0) {
    }
};

int main() {
    Coordinate a(3,2);

    cout << a.getX() << "\n";
    cout << a.getY() << "\n";
    
    Coordinate b = a;
    cout << b.getX() << "\n";
    cout << b.getY() << "\n";
    
    a.setX(9001);
    
    cout << a.getX() << "\n";
    cout << b.getX() << "\n";
    
    vector<Coordinate> coords;
    coords.push_back(Coordinate(4,4));
    
    Journey someJourney(a,b);

    Coordinate f(1,2);
    Coordinate g(1,2);
    
    if (f == g) {
        cout << "Java-style equals works here too\n";
    }
    
    Coordinate h = f + g;
    
    if (f - g) {
        // something silly
    }
    return 0;
}


