#include <iostream>

class polygon {
protected:
    double width, height;

public:
    void set_value(double w, double h) {
        width = w;
        height = h;
    }

    virtual double calculate_area() = 0; 
};

class Rectangle : public polygon {
public:
    double calculate_area() override {
        return width * height;
    }
};

class Triangle : public polygon {
public:
    double calculate_area() override {
        return (width * height) / 2.0; 
    }
};

int main() {
    Rectangle rect;
    Triangle tri;

    polygon* poly_rect;
    polygon* poly_tri;

    poly_rect = &rect;
    poly_tri = &tri;

    poly_rect->set_value(10, 5);
    poly_tri->set_value(10, 5);

    std::cout << "Area of Rectangle: " << poly_rect->calculate_area() << std::endl;
    std::cout << "Area of Triangle: " << poly_tri->calculate_area() << std::endl;

    return 0;
}