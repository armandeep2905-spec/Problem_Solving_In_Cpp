#include<iostream>
using namespace std;
int a=9;
void fun(){
    cout<<a;
}
int main(){
a=7;
cout<<a;
fun();

    return 0;
}