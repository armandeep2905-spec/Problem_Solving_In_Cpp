#include<iostream>
using namespace std;
int main(){
cout<<"enter the value"<<endl;
char n;
cin>>n;
if (n<=122 && n>=97 || n<=90 && n>=65){ 
     if(n==97||n==101||n==105||n==111||n==117||n==65||n==69||n==73||n==79)
     cout<<"Its is a vowel";
     else cout<<"it is a consonant";}

else {cout<<"invalid input";}
    return 0;
}