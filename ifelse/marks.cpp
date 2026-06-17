#include<iostream>
using namespace std;
int main(){
int n;
cout<<"enter marks"<<endl;
cin>>n;
if(n<=100 && n>=91){
    cout<<"excellent";
}
if(n<=90 && n>=81){
    cout<<"very good";
}if(n<=80 && n>=71){
    cout<<"good";
}if(n<=70 && n>=61){
    cout<<"can do better";
}if(n<=60 && n>=51){
    cout<<"average";
}if(n<=50 && n>=41){
    cout<<"below average";
}if(n<=40){
    cout<<"FAIL";
}
    return 0;
}