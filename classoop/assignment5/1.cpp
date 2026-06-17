#include<iostream>
using namespace std;
class alpha{
int a;
public:
alpha(int x):a(x){
  

cout<<a<<endl;
}
};
class beta{
    int b;
    public:
    beta(int y):b(y){
        
        cout<<b<<endl;
    }
};
class gamma:protected alpha,protected beta{
   int c;
    public:
    gamma(int a , int b ,int d):alpha(a),beta(b),c(d){
        

cout<<c<<endl;
    }
};
int main(){
    gamma g(1,2,3);

}