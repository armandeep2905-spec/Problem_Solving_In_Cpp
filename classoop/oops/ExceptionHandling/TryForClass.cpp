

#include<iostream>
using namespace std;
class dividebyzero{
    int a;
    int b;

    public:
    dividebyzero(int a, int b){
        if(b==0) throw 0;
        
        cout<<"ans is "<<a/b;
    }
};
int main(){
    try{
    dividebyzero obj1(0,9);
    }
    catch(int e){
        cout<<"invalid";
        
    }
}
