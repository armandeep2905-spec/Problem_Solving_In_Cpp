#include<iostream>
using namespace std;


#include <iostream>
using namespace std;

class Rectangle {
private:
    int length, width;

public:
    Rectangle(int l, int w) : length(l), width(w) {}


    int getArea() const {
        return length * width;  // does not modify members
    }

    
    void resize(int l, int w) {
        length = l;
        width = w;
    }
};

void printRectangle(const Rectangle &r) {
    // only const functions can be called here
    cout << "Area = " << r.getArea() << endl;
}

int main() {
    Rectangle r1(10, 5);

    printRectangle(r1); // safe: r1 is passed as const reference

    r1.resize(20, 10);  // allowed (modifies object)
    printRectangle(r1);

    return 0;
}
