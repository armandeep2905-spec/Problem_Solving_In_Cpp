// function overriding or method overriding using virtual keyword.

#include<iostream>
using namespace std;
class A{public:
    int a;
A(){};
 
    A(int a){
        this->a=a;
    }

    virtual void display(){
   cout<<"base class"<<endl;
    }
};
class B:public A{

    public:
    int a;
    B(int a): A(a){  //either do this or create base class default constructor
        this->a=a;
    }
    void display(){
        cout<<"derived class "<<endl<<a;
    }
};
int main(){


    A *dptr=new B(15);
A obj1;
obj1.display();
    dptr->display();



}