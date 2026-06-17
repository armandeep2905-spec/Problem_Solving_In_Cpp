#include<iostream>
using namespace std;
int main(){
    int a,b;
    cout<<"enter a"; 
    cin>>a;
    cout<<"enter b";
    cin>>b;
    if (a>6 && b>6) cout<<"not valid";
    if (a<6 && b<6 && a+b!=10) cout<<"not valid";
    if (a<6 && b<6 && a+b==10) cout<<a<<b; 
    return 0;
}