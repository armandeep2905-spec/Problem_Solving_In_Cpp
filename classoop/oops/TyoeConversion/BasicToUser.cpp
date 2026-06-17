//type conversion using operator overloadig.
#include<iostream>
using namespace std;
class number{
    int square;
    int cube;

    public:
number(){};
   number &operator+(int a){
      square=a*a;
      cube=square*a; 
      return *this;
    }

    void display(){
        cout<<this->square<<" "<<this->cube;
    }
};
int main(){
number n1;
int m=9;
n1+m;
n1.display();


}