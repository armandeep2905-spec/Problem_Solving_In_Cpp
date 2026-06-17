#include <iostream>
#include <string>   // Needed for std::string

using namespace std;

class student {
private:
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

    student(const student &s) {
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
    student s2(14, 10);
                        // parameterized constructor
    student s3 ( s1);     // copy constructor

    s1.display();
    s2.display();
    s3.display();

    return 0;
}
