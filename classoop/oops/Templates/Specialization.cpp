#include<iostream>
using namespace std;
template<typename T>
class number{
    public:
    T a;
    number(){};
    number(T z):a(z){
        cout<<"the value for other types is "<<z<<endl;
    };
};
template<>
class number<bool>{
public:
    bool a;
    number(){};
    number(bool z):a(z){

        cout<<"the value for bool is "<<z;
    };
};
int main(){
    number<int> obj1(100);
    number<bool> obj2(-9);
}