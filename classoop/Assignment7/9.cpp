#include<iostream>
#include<math.h>
using namespace std;

class Cartesian;  // forward declaration

class Polar {
    float r, a;   // r = radius, a = angle in degrees
public:
    Polar(float radius = 0, float angle = 0) {
        r = radius;
        a = angle;
    }
    float getR() { return r; }
    float getA() { return a; }
};

class Cartesian {
    float x, y;
public:
    Cartesian() {}  

    // UDT → UDT conversion constructor
    Cartesian(Polar p) {
        float rad = p.getA() * 3.14159 / 180;  // convert degree → radian
        x = p.getR() * cos(rad);
        y = p.getR() * sin(rad);
    }

    void show() {
        cout << "x = " << x << ", y = " << y << endl;
    }
};

int main() {
    Polar p(10, 30);    // radius=10, angle=30 degrees

    Cartesian c = p;    // Conversion happens here
    c.show();
}
