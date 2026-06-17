#include<iostream>
using namespace std;
int main(){
int n;
// cout<<"enter the number of terms";
// cin>>n;
int a=100;
for(int i=0;i<n;i--){
    cout<<a<<endl;
    a=a-3;
if(a<0){break;}
}

    return 0;
}