#include<iostream>
using namespace std;
template<typename T>
void number(T a){
    cout<<a;
};
template<>
void number<bool>(bool a){
    cout<<"for bool "<<a<<endl;
}
int main(){
    bool obj1=2;
    int obj2=100;
    number(obj1);
    number(obj2);
}