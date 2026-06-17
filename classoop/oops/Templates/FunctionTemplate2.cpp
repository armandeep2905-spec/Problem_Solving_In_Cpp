#include<iostream>
using namespace std;
template<typename T,int z>
class number{
    public:
T a;
number(T a){
    this->a=a;
    cout<<z<<endl;
};

};
int main(){
     number<float,100> obj1(100.29);
    
     //imp to use<typename> 
cout<<obj1.a;
}