#include <iostream>
using namespace std;

class Shape
{
    public:
    virtual void area()
    {
        cout << "Shape area";
    }
};

class Circle : public Shape
{

    void area() override
    {
        cout << "Circle Area " << endl;
    }

};

class Rectangle : public Shape
{

    void area() override
    {
        cout << "Rectangle Area " << endl;
    }

};

class Triangle : public Shape
{

    void area() override
    {
        cout << "Triangle Area" << endl;
    }

};



int main() {

    Shape *s;

    Circle c;
    Rectangle r;
    Triangle t;

    s = &c;
    s->area();

    s = &r;
    s->area();

    s = &t;
    s->area();

    
    return 0;
}