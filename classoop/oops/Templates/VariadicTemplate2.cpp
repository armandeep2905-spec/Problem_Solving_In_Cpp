#include<iostream>
using namespace std;


template<typename...Args>
void func(Args...args){
    ((cout<<"the value is -> "<<args<<endl),...);
   
}
int main(){
    func(10,19,"arman"," ",16.8,89, 79.4);
}