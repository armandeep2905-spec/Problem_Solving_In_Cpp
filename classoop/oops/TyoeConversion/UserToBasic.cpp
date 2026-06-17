#include<iostream>
using namespace std;

class Number {
    int a;
public:
    // Number(int x) : a(x) {}
Number(int a){this->a=a;};
    operator int() {   // CASTING OPERATOR
        return a;
    }
};

int main() {
    Number n(5); // number n=5 and number n(5)-> both are same, but in case where implicit conversion is not allowed, number n=5 cant be used.

    int x = n;   // calls operator int()
    cout << x;
}
