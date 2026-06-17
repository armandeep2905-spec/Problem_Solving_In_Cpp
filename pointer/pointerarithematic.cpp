#include<iostream>
using namespace std;
int main(){

    int x=5;
    int *p=&x;
    int *ptr=&x+1;
    cout<<p<<endl<<p+1<<endl<<ptr;
}z