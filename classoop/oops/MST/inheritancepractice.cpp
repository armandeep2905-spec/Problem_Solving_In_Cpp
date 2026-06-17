#include<iostream>
using namespace std;
class human{
    char gender;
    int age;

    public:
    human(){
        cout<<"default constructor "<<endl;
    };
    human(char gender,int age){
        this->gender=gender;
        this->age=age;
        cout<<"paramter wala constructor"<<endl;
    }

    human(const human &obj){
        this->gender=obj.gender;
        this->age=obj.age;
    cout<<"copy cat called"<<endl;
    }

~human(){
    cout<<"tabah"<<endl;
}

};


class black:protected human{
private:
int dih;

public:
black(){cout<<"default black constructor is called"<<endl;}
black(int dih,int a,char b):human(a,b){
    this->dih=dih;
    cout<<"black parameter wala"<<endl;
}
~black(){
    cout<<"kaale tabah"<<endl;
}
};

int main(){
    
    black b;
    human h;

    black(6,7,'e');
    }