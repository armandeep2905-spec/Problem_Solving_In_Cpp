#include<iostream>
using namespace std;
class base{};
class derived:public base{};
class derived2:public derived{};
int main(){
    base obj1;
   derived obj2;
   derived2 obj3;

    try{throw obj3;}



    
   
    catch(base obj){
cout<<"caught by base class";
    }
     catch(derived obj2){
    cout<<"caught by derived class";
    }

catch(derived2 obj3){
    cout<<"caught by derived class 2";
    }
   
}