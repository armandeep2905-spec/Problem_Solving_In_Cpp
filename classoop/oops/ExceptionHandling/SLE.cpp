#include <iostream>
#include <exception>
using namespace std;

int divide(int a, int b) {
    if (b == 0)
        throw runtime_error(" ");
    return a / b;
}

int main() {
    try {
        cout << divide(10, 0);
    }
    catch (const exception& e) {
     cout<<e.what();
    }
}
