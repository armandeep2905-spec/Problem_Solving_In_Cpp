#include<iostream>
using namespace std;
int divide(int a, int b) {
    try {
        if (b == 0)
            throw 0;
        return a / b;   // return from try
    }
    catch (int e) {
    cout<<"error encountered";     
    return -1;// return from catch
    }
}
int main(){
   cout<<divide(100,0); 

}