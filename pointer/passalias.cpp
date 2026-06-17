#include<iostream>
using namespace std;
void swap(int &p,int &q){
int temp = p;
p=q;
q=temp;
return;
}
int main(){
    int a,b;
    cin>>a>>b;
    swap(a,b);
    cout<<a<<" "<<b;
}