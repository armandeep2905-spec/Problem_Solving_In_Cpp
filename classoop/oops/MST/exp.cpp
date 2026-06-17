#include <iostream>
using namespace std;

class Student {
public:
    static int totalStudents;  // static member
    Student() { totalStudents++; }  // increment for every new object
};

// Define static variable outside the class
int Student::totalStudents = 0;

int main() {
    Student s1, s2, s3;
    cout << "Total students: " << Student::totalStudents << endl;
}
