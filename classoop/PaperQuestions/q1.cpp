#include <iostream>
using namespace std;

/* Base class */
class shape {
protected:
    double val1, val2;

public:
    void get_data();
    virtual void display_area() = 0;   // pure virtual function
};

/* Derived class: Rectangle */
class rectangle : public shape {
public:
    void display_area();
};

/* Derived class: Triangle */
class triangle : public shape {
public:
    void display_area();
};

/* Definition of base class member function */
void shape::get_data() {
    cout << "Enter two values: ";
    cin >> val1 >> val2;
}

/* Definition of rectangle member function */
void rectangle::display_area() {
    cout << "Area of Rectangle = " << val1 * val2 << endl;
}

/* Definition of triangle member function */
void triangle::display_area() {
    cout << "Area of Triangle = " << 0.5 * val1 * val2 << endl;
}

/* Main function */
int main() {
    shape* s[2];        // array of base class pointers
    rectangle r;
    triangle t;

    s[0] = &r;
    s[1] = &t;
r.get_data();
    cout << "Rectangle:\n";
    s[0]->get_data();
    s[0]->display_area();

    cout << "\nTriangle:\n";
    s[1]->get_data();
    s[1]->display_area();

    return 0;
}
