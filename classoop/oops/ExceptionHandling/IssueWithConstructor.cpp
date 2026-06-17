/* if any of the fun() is a constructor then you have to use if-else in the
constructor to handle the error since it cannot return anything, which
is not neat practice. */



#include <iostream>
using namespace std;

class me {
    int a;
public:
    me(int val) : a(val) {
        if (a < 0)
            throw 1;
    }
};

// void input(int val) {
//     me obj1(val);   // constructor may throw
//     cout << "Object created successfully\n";
// }

int main() {
    int val;

    while (true) {
        try {
            cout << "Enter the required value: ";
            cin >> val;

            me obj1(val);   // may throw
            break;        // success → exit loop
        }
        catch (...) {
            cout << "Invalid value, try again\n";
        }
    }
}
