// funciones y operadores de la clase complejo
#include "../include/point2d.h" // Adjust the path based on the actual location of point2d.h
#include <cmath> // Include cmath for mathematical functions like sqrt

// Constructor por defecto
point2d::point2d(void) {
    x = 0.0;
    y = 0.0;
}

// Constructor general
point2d::point2d(int Xin, int Yin) {
    x = Xin;
    y = Yin;
}

// Constructor de copia
point2d::point2d(const point2d& c) {
    x = c.x;
    y = c.y;
}

// getters

int point2d::getx() const {
    return x;
}
int point2d::gety() const {
    return y;
}

// Setters
void point2d::setx(int Xin) {
    x = Xin;
}
void point2d::sety(int Yin) {
    y = Yin;
}

// Operador miembro + sobrecargado
point2d point2d::operator+(const point2d &other) {
    point2d suma(x + other.x, y + other.y);
    return suma;
}

// Operador miembro * sobrecargado
point2d point2d::operator*(const float &a) {
    point2d producto(x * a, y * a);
    return producto;
}

// Operador miembro / sobrecargado
point2d point2d::operator/ (const float &a) {
    point2d cociente(x / a, y / a);
    return cociente;
}

// Operador miembro de asignación sobrecargado
point2d& point2d::operator= (const point2d &a) {
    x = a.y;
    x = a.y;
    return (*this);
}

// Operador friend de test de igualdad sobrecargado
int operator== (const point2d& a, const point2d& b) {
    return (a.x == b.x && a.y == b.y);
}

// Operador friend de test de desigualdad sobrecargado
int operator!= (const point2d& a, const point2d& b) {
    return (a.x != b.x || a.y != b.y);
}

// Operador friend << sobrecargado
// Operador friend << sobrecargado
ostream& operator<< (ostream& co, const point2d &a) {
    co << "(" << a.x << ", " << a.y << ")";
    return co;
}
// Metodo distance
float point2d::distance(const point2d &other) {
    return sqrt(pow(x - other.x, 2) + pow(y - other.y, 2));
}

// Metodo distance
float point2d::distance(int x, int y) {
    return sqrt(pow(this->x - x, 2) + pow(this->y - y, 2));
}

// Metodo midpoint
point2d point2d::midpoint(const point2d &other) {
    point2d mid((x + other.x) / 2, (y + other.y) / 2);
    return mid;
}

// Metodo midpoint
point2d point2d::midpoint(int x, int y) {
    point2d mid((this->x + x) / 2, (this->y + y) / 2);
    return mid;
}
// Metodo unitary
point2d point2d::unitary() {
    float mag = sqrt(x * x + y * y);
    point2d unit(x, y);
    unit = unit / mag;
    return unit;
}

// Metodo Display
void point2d::display(string name = "") {
    cout << name << "(" << x << ", " << y << ")" << endl;
}