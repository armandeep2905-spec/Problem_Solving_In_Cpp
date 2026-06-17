#include <iostream>
using namespace std;

class A {
protected:
    int a;
public:
    A() {
        cout << "Enter value for A: ";
        cin >> a;
    }

    void showA() {
        cout << "A = " << a << endl;
    }
};

// B and C virtually inherit A
class B : virtual public A {
protected:
    int b;
public:
    B() {
        cout << "Enter value for B: ";
        cin >> b;
    }

    void showB() {
        cout << "B = " << b << endl;
    }
};

class C : virtual public A {
protected:
    int c;
public:
    C() {
        cout << "Enter value for C: ";
        cin >> c;
    }

    void showC() {
        cout << "C = " << c << endl;
    }
};

// D inherits B and C
class D : public B, public C {
    int d;
public:
    D() {
        cout << "Enter value for D: ";
        cin >> d;
    }

    void showAll() {
        showA();
        showB();
        showC();
        cout << "D = " << d << endl;
    }
};

int main() {
    D obj;
    cout << "\nDisplaying all values:\n";
    obj.showAll();
    return 0;
}
