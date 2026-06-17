//printing the fractional part of the float
#include<iostream>
using namespace std;
int main(){
    float y;
    cin>>y; 
   int a= (int)y;
   if(a<0) a=a-1;  //here we put condition on the integer value because while calculating fractional part, we need greatest integer
    
   float b= (float)y;
    float c;
      c=b-a;
   cout<<c;


return 0;

}