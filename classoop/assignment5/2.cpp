#include<iostream>
#include<string>
using namespace std;
class X{
    char a[10];
public:
    X(const char a[10]){
        strcpy(this->a,a);
        cout<<a<<" ";
    }
};
class Y{
    char b[10];
    public:
    Y(const char b[10]){
        strcpy(this->b,b);
        cout<<b<<" ";
    }
};
class Z:public X,public Y{
    char c[20];
    public:
    Z(const char a[10],const char b[10],const char c[10]):X(a),Y(b){
        strcpy(this->c,c);
cout<<c;
    }
};
int main(){
    Z c("🫀you","and","I🫀");
}
