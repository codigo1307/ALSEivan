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
    point2d(void);
    point2d(int x = 0, int y = 0);
    point2d(const point2d&);

    // Getter & Setter
    int getx() const;
    void setx(int x);
    int gety() const;
    void sety(int y);

    // Overloaded operators
    point2d operator+(const point2d& other);
    point2d operator*(const float& other);
    point2d operator/(const float& other);

    // Overloaded assignment operator
    point2d& operator=(const point2d& other);

    // Overloaded comparison operator
    friend int operator!=(const point2d& a, const point2d& b);
    friend int operator==(const point2d& a, const point2d& b);


    // Sobrecarga del operador de inserción en el flujo de salida
    friend ostream& operator<< (ostream&, const point2d&);
    // Class methods

    float distance(const point2d& other = point2d(0, 0));
    float distance(int x, int y);
    point2d midpoint(const point2d& other = point2d(0, 0));
    point2d midpoint(int x, int y);
    point2d unitary();


    // Virtual method for displaying info
    void display(string name);
};

#endif // VEHICLE_H