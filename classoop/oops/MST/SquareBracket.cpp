#include <iostream>
using namespace std;

class Array {
    int arr[10];
public:
    int& operator[](int index) {
        if(index < 0 || index >= 10) {
            cout << "Array index out of bounds!" << endl;
            exit(1);
        }
        return arr[index];   // return reference
    }
};

int main() {
    Array A;

    A[2] = 50;        // calls operator[]
    cout << A[2]<<endl;     // calls operator[]

    A[15] = 10;    // Error — checked by operator[]
}
