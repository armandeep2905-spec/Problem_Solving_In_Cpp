// THIS IS FUNCTION OVERRIDING BUT NOT RUNTIME POLYMORPHISM.
#include<iostream>
using namespace std;
 class animal{
    public:
    virtual void  speak(){
        cout<<"speak"<<endl;
    }
};

class dog: public  animal{
    public:
void speak(){
    cout<<"bark"<<endl;
}
};

int main(){
    animal *a;   // base class pointer
    dog d;

    a = &d;      // point to derived object
    a->speak();  // bark (runtime polymorphism)
}


// FOR RUNTIME POLYMORPHISM USAGE OF VIRTUAL IS MANDATORY I.E MAKE BASE CLASS
// VIRTUAL