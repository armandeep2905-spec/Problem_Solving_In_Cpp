// Write a program to print out all Armstrong numbers between 1 and 500. If the sum of cubes of
//each digit of the number is equal to the number itself, then the number is called an Armstrong
//number.

#include<iostream>
using namespace std;
int main(){int n;
cout<<"enter the number";
cin>>n;
while(n>0){

int dig=n%10;
n=n/10;
}
    return 0;
}