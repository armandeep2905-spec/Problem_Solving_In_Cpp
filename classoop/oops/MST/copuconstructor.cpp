#include <iostream>
#include <string>   

using namespace std;

class student {
public:
    string name;
    int marks;
    int fees;

public:
    student() {
        name = "Unknown";
        marks = 0;
        fees = 0;
    }

    student(int marks, int fees) {
        this->marks = marks;
        this->fees = fees;
        this->name = "NoName";
    }

    student( student &s) {
        this->marks = s.marks;
        this->fees = s.fees;
        this->name = s.name;
    }

    void display() {
        cout << "marks are " << marks << endl;
        cout << "fees is " << fees << endl;
    }
};

int main() {
    student s1;          // default constructor
    student s2(14, 10);  // parameterized constructor
    student s3 = s2;     // copy constructor

    s3.display();
    s3.marks=100;
   
    s3.display();
    s2.display();
    

    return 0;
}
