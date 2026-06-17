#include<iostream>
using namespace std;
class A{
    int arr[10];
    public:
    A(int i=0,int j=0,int k =0){
        arr[0]=i;
     arr[1]=j;
      arr[2]=k;}
    int operator[](int i){
        return arr[i];
    }
};
int main(){
    A obj1(10,20,20);
    cout<<obj1[2];

}