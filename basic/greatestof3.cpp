#include<iostream>
using namespace std;
int main(){
float a,b,c;
cout<<"enter the value of A";
cin>>a;
cout<<"enter the value of B";
cin>>b;
cout<<"enter the value of C";
cin>>c;
if(a>b && a>c){ cout<<"A is the greatest";}
if(b>a && b>c){ cout<<"B is the greatest";}
else { cout<<"C is the greatest";}
    return 0;
}