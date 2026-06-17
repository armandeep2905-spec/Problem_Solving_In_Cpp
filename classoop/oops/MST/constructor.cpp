#include<iostream>
using namespace std;


class student 
{
    public:
int marks;
string name;
float gpa;

student(){}


student(string n ,int m, float g)
{
    name = n;        // we created default constructor.
    marks=m;
    gpa=g;
}
};




int main(){
student a1("arman",40,8.4);
// a1.name="arman";
// a1.marks=20;
// a1.gpa=8.0;

student a2("josh",50,8.9);
// a2.name="josh";
// a2.marks=30;
// a2.gpa=9.0;

student a6=a1;
a6.name="aru"; // deep copy

student a7(a1); // copy constructor
a7.name="not aru"; //shallow copy
cout<<a1.name<<" "<<a1.marks<<" "<<a1.gpa<<" "<<endl;
cout<<a2.name<<" "<<a2.marks<<" "<<a2.gpa<<endl;
cout<<a6.name<<" "<<a6.marks<<" "<<a6.gpa<<" "<<endl;
cout<<a7.name<<" "<<a7.marks<<" "<<a7.gpa<<" "<<endl;

}