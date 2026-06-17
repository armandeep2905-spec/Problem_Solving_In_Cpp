#include <iostream>
using namespace std;

class Student {
private:
    string name;
    int rollNo;

public:
    Student(string n, int r) {
        name = n;
        rollNo = r;
    }

    // Const member function (cannot modify class members)
    void display() const {
        cout << "Name: " << name << endl;
        cout << "Roll No: " << rollNo << endl;
       
    }

    // Non-const member function
    void changeRoll (int newRoll) {
        rollNo = newRoll;  // allowed
    }
};

int main() {
    Student s1("Arjun", 101);

    s1.display();   // calls const function
    s1.changeRoll(202);  
    s1.display();   // still works, but changeRoll modified rollNo

    return 0;
}
