#include<iostream>
using namespace std;

class Student
{
    string name;
    int roll_no;
    string degree;
    string hostel;
    float CGPA;

    void Details()
    {
        cout << "Enter name ";
        getline(cin,name);
        cout << endl;
        cout << "Enter roll no ";
        cin >> roll_no ;
        cin.ignore();
        cout << endl;
        cout << "Enter degree ";
        getline(cin,degree);
        cout << endl;
        cout << "Enter hostel ";
        getline(cin,hostel);
        cout << endl;
        cout << "Enter cgpa ";
        cin >> CGPA ;
    }
    void enteredDetails()
    {
        cout << name <<endl;
        cout << roll_no <<endl;
        cout << degree <<endl;
        cout << hostel << endl;
        cout << CGPA <<endl;

    }
    void updatedetails()
    {
        degree = "BE";
        roll_no = 48;
    }
    void updateCGPA()
    {
        CGPA = 8;

    }
    void updateHostel()
    {
        hostel = "D";

    }public:
    void displaydetails()
    {
        cout << name <<endl;
        cout << roll_no <<endl;
        cout << degree <<endl;
        cout << hostel << endl;
        cout << CGPA <<endl;

    }
};


int main(){
    
    Student a;
    a.Details();
    a.enteredDetails();
    a.updatedetails();
    a.updateCGPA();
    a.updateHostel();
    a.displaydetails();

    return 0;
}