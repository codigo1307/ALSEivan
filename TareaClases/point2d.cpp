#include <iostream>
#include "src/point2d.cpp"
using namespace std;


int main() {
    point2d P1(3, 4), P2(1, 2);
    P1.display("P1");
    P2.display("P2");
    P1 = P1*10;
    cout << "P1 * 10 = " << P1 << endl;
    P1 = P1/10;
    cout << "P1 / 10 = " << P1 << endl;
    point2d P3 = P1 + P2;
    cout << "P1 + P2 = " << P3 << endl;
    cout << "P1 == P2: " << (P1 == P2) << endl;
    cout << "P1 != P2: " << (P1 != P2) << endl;
    cout << "P1.distance(P2): " << P1.distance(P2) << endl;
    cout << "P1.distance(P3.x, P3.y): " << P1.distance(P3.getx(), P3.gety()) << endl;
    cout << "P1.midpoint(P2): " << P1.midpoint(P2) << endl;
    cout << "P1.midpoint(P3.x, P3.y): " << P1.midpoint(P3.getx(), P3.gety()) << endl;
    cout << "P1.unitary(): " << P1.unitary() << endl;
    return 0;
}