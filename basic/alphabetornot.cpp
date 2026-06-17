#include<iostream>
using namespace std;
int main(){
char ch;
cout<<"enter your term";
cin>>ch;
if((int)ch >= 97 && (int)ch <=122)
{ cout<<"it is a LOWERcase character";}
if((int)ch >= 65 && (int)ch <=90)
{ cout<<"it is a UPPERcase character";}

    return 0;
}