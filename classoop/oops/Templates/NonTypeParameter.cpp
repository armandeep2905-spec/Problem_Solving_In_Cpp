#include<iostream>
using namespace std;
template<typename T, int j>
void print(T a){
    cout<<a<<" "<<j;
}
int main(){
    print<int,20>(100);
}