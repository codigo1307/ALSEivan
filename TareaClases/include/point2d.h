#ifndef POINT2D_H
#define POINT2D_H

#include <iostream>
using namespace std;

class point2d {
private:
    int x;  // Protected: Accessible by derived classes
    int y;     // Private: Cannot be accessed directly by derived classes

public:
    // Constructor
    point2d(int x = 0, int y = 0);

    // Getter & Setter
    int getx() const;
    void setx(int x);
    int gety() const;
    void sety(int y);

    // Virtual method for displaying info
    void display();
};

#endif // VEHICLE_H