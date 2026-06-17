#include<iostream>
using namespace std;
class test{
    public:
    int a;

    test(int a){
        this->a=a;
    }
};
int main(){
    float x=9.8;
    test obj1(x);
    cout<<obj1.a;
}