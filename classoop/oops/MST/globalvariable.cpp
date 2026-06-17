#include <iostream>
using namespace std;
int x=100;
class number{
    int value;

    public:
    void setvalue(){
       
       cout<<"enter the value of number";
        cin>>value;
    }
 int  display(){
       cout<<value;
        }

    };


int main(){


cout<<x;
x=90;
cout<<x;

}