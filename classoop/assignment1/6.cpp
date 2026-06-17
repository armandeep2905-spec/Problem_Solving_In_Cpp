#include<iostream>
#include <limits>
using namespace std;

class student{
private:
    string name;
    int rollno;
    string degree;
    char hostel;
    float cgpa;

public:
void adddetails(){
    cout<<"enter name";
    cin.ignore();
    getline(cin , name);
    cout<<"enter rollno.";
    cin>>rollno;
    cout<<"enter degree";
    cin>>degree;
    cout<<"enter hostel";
    cin>>hostel;
    cout<<"enter cgpa";
    cin>>cgpa;
    

}

void display(){
    cout << "student details" << endl;
        cout << "name:" << name << endl;
        cout << "rollno:" << rollno << endl;
        cout << "current cgpa:" << cgpa << endl;
        cout << "hostel:" << hostel << endl;
        cout << "degree:" << degree << endl;
}

void updatedetails(){
    cout<<"enter new name";
    cin.ignore();
    getline(cin , name);
    
    cout<<"enter new rollno.";
    cin>>rollno;
    cout<<"enter new degree";
    cin>>degree;
    cout<<"enter new hostel";
    cin>>hostel;
    cout<<"enter new cgpa";
    cin>>cgpa;

}

   void setname(string name){
        this->name=name;
    }
    string getname(){
        return name;
    }
void setrollno(int rollno){
        this->rollno=rollno;
    }
    int getrollno(){
        return rollno;
    }

void setdegree(string degree){
        this->degree=degree;
    }
    string getdegree(){
        return degree;
    }

void sethostel(char hostel){
        this->hostel=hostel;
    }
    char gethostel(){
        return hostel;
    }

void setcgpa(float cgpa){
        this->cgpa=cgpa;
    }
    float getcgpa(){
        return cgpa;
    }

};

int main(){

    student aru;
aru.adddetails();
aru.display();
aru.updatedetails();
cout<<"updated details"<<endl;
aru.display();

}