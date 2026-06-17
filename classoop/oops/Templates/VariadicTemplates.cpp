#include<iostream>
using namespace std;

void func(){};// base case is necessary
template<typename T,typename...Rest>
void func(T first,Rest...rest){
    cout<<"the value is -> "<<first<<endl;
    func(rest...);
}
int main(){
    func(10,19,"arman"," ",16.8);
}