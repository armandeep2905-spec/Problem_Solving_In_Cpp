#include <iostream>
#include <string>
using namespace std;

class student
{
    string name;
    int rollno;
    float cgpa;
    string hostel;
    string degree;
public:
    void adddetails()
    {
        cout << "enter name";
        getline(cin, name);
        cout << "enter rollno";
        cin >> rollno;
        cin.ignore();
        cout << "enter degree";
        getline(cin, degree);
       
        cout << "enter cgpa";
        cin >> cgpa;
        cin.ignore();
        // getline is used to input stream( spaces can also be entered)
        cout << "enter hostel";
        getline(cin, hostel);
        cout<<endl;
    }public:
    void updatedetails()
    {
        cout<<"enter new details";
        cout<<endl;
    adddetails();
    }
    void displaydetails()
    {
        cout << "student details" << endl;
        cout << "name:" << name << endl;
        cout << "rollno:" << rollno << endl;
        cout << "current cgpa:" << cgpa << endl;
        cout << "hostel:" << hostel << endl;
        cout << "degree:" << degree << endl;
    }
};
int main()
{
    student s1;
    s1.adddetails();
    s1.updatedetails();
    cout << "updating details........." << endl<<endl;
    s1.displaydetails();
    return 0;
}
