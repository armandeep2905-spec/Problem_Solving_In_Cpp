// If you redefine a static member function in derived class, all the other
// overloaded functions in base class are hidden.
#include <iostream>
using namespace std;

class A {
public:
 static void fun() {
        cout << "A::fun()" << endl;
    }
    static  void fun(int x) {       // overloaded function
        cout << "A::fun(int)" << endl;
    }
};

class B : public A {
public:
    static void fun() {           // redefined in derived class
        cout << "B::fun()" << endl;
    }
};

int main() {
    B obj1; A obj2;
    obj1.fun();      // OK → calls B::fun()
    obj2.fun(10);    // ERROR   (A::fun(int) is hidden)
}
