#include<iostream>
using namespace std;


class student // class is userdefined datatype  // class is blueprint
{
    public:
int marks;
string name;
float gpa;

};




int main(){
student a1;  // a1 is object which is instance of class student. 
a1.name="arman";
a1.marks=20;
a1.gpa=8.0;

student a2;
a2.name="joshna";
a2.marks=30;
a2.gpa=9.0;


cout<<a1.name<<" "<<a1.marks<<" "<<a1.gpa<<" "<<endl;
cout<<a2.name<<" "<<a2.marks<<" "<<a2.gpa;
}