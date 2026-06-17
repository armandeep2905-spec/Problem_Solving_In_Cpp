#include<iostream>
using namespace std;

class Test {
    int x, y;   // two data members
public:
    // declare friend functions
    friend istream& operator>>(istream &in, Test &t);
    friend ostream& operator<<(ostream &out, Test &t);
};

// extract/input operator >>
istream& operator>>(istream &in, Test &t) {
    in >> t.x >> t.y;   // read into object
    return in;          // return stream to allow chaining
}

// insert/output operator <<
ostream& operator<<(ostream &out, Test &t) {
    out << "x = " << t.x << ", y = " << t.y;
    return out;
}

int main() {
    Test t;

    cin >> t;      // calls operator>>
    cout << t;     // calls operator<<
}
