#include <iostream>
using namespace std;

class Base {
    int arman;
public:
    // Base() {
    //     cout << "Base default constructor called\n";
    // }
Base (int x): arman(x){ cout<<arman<<x;};};
int main(){
    Base obj1(100);
   
} 


