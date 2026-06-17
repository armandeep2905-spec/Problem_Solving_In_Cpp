#include<iostream>
using namespace std;
int main(){
int power;
int b; float ans=1;
cout<<"enter base ";
cin>>b;
cout<<"enter power ";
cin>>power;
if(power<0){ power = -power;}
for(int i=1;i<=power;i++){
ans=ans*b;
}
cout<<"required ans is "<<ans;
    return 0;
}