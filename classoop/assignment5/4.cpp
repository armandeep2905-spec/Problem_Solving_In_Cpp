#include <iostream>
using namespace std;

class Student {
public:
    string name;
    int roll;

    Student(string n, int r) {
        name = n;
        roll = r;
    }

    // Pure virtual function → makes class abstract
    virtual void show() = 0;

    // Virtual destructor (good practice)
    virtual ~Student() {}
};

// ------------------- Derived Classes -------------------

class Science : public Student {
public:
    string project;

    Science(string n, int r, string p) : Student(n, r) {
        project = p;
    }

    void show() override {
        cout << "Science Student\n";
        cout << "Name: " << name << ", Roll: " << roll 
             << ", Project: " << project << endl << endl;
    }
};

class Art : public Student {
public:
    string specialization;

    Art(string n, int r, string s) : Student(n, r) {
        specialization = s;
    }

    void show() override {
        cout << "Art Student\n";
        cout << "Name: " << name << ", Roll: " << roll 
             << ", Specialization: " << specialization << endl << endl;
    }
};

class Commerce : public Student {
public:
    string subject;

    Commerce(string n, int r, string sub) : Student(n, r) {
        subject = sub;
    }

    void show() override {
        cout << "Commerce Student\n";
        cout << "Name: " << name << ", Roll: " << roll 
             << ", Subject: " << subject << endl << endl;
    }
};

// ------------------- MAIN -------------------

int main() {

    // Array of base class pointers
    Student* arr[3];

    arr[0] = new Science("Aman", 1, "Robotics");
    arr[1] = new Art("Riya", 2, "Painting");
    arr[2] = new Commerce("Karan", 3, "Accounts");

    // Process objects using base class pointer
    for (int i = 0; i < 3; i++) {
       arr[i]->show();
    }

    // Free memory
    for (int i = 0; i < 3; i++) {
        delete arr[i];
    }

    return 0;
}
