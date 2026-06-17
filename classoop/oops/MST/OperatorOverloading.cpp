#include<iostream>
using namespace std;
class arman{
    public:
    int a;

    int b;

    

    void operator/( arman x){
        cout<<this->a<<"+"<<x.a<<"="<<this->a+x.a;
        cout<<endl<<this->b;
    }
};

int main(){
    arman obj1,obj2;
    obj1.a=100;
    obj2.a=200;
    obj1/obj2;
}