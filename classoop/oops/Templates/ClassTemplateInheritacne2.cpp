#include<iostream>
using namespace std;
template<typename T>
class Base{
    public:
Base(){};
    T a;

    Base(T a){
        cout<<"value in the base class is "<<a<<endl;
    }

};

template<typename T1,typename J>
class Derived:public Base<T1>{
    public: 
    T1 a;
J b;
Derived(T1 b,J z){
    cout<<"value in the derived class is "<<b<<" "<<z<<endl;
}
};
int main(){
    Base<int> obj1(100);
    Derived<float,int> obj2(10.6,89);
}