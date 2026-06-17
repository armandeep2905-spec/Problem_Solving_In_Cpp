#include<iostream>
using namespace std;
// void swap(int a, int b){
//     int temp;
//     temp=a;
//     a=b;
//     b=temp;
//     return;
// }
// int main(){
//     int a,b;   // this is giving error.
// cin>>a>>b;
// swap(a,b);

//     cout<<a<<" "<<b;
// }


// USING POINTERS
void swap(int *p,int *q){
int temp = *p;
*p=*q;
*q=temp;
return;
}
int main(){
    int a,b;
    cin>>a>>b;
    swap(a,b);
    cout<<a<<" "<<b;
}