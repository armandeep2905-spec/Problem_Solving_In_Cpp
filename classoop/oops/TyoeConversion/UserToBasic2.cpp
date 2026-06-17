#include<iostream>
#include<iomanip>
using namespace std;

class Number {
  float  a;
public:
    // Number(int x) : a(x) {}
Number(float a) : a(a){};

    operator int () {   // CASTING OPERATOR
        return static_cast<int>(a);
        
    }
    operator float () {   // CASTING OPERATOR
        return a;
    \

    \
    \
    
    \
    
    
    }
};

int main() {
    Number n(5); // number n=5 and number n(5)-> both are same, but in case where implicit conversion is not allowed, number n=5 cant be used.
 Number y(8.9);
  float x = n;  float z=y;
   
    cout <<fixed <<setprecision(1);
    cout<<x;
   // normally c++ hides the.0 part, but using the above library and the above cout statement we can print the zeroes
   
}
