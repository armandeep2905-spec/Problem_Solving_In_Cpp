#include<iostream>
using namespace std;
class aru{
private:
    int v;
    static int count;
public:
aru(){cout<<"default constructor is called"<<endl;
count++;}
// cout<<"value of count"<<count<<endl;}
aru(int v){
    this->v=v;
}


static void Count(){
    cout<<"no. of constructors called: "<<count;
}

};
 int aru::count=0;
int main(){
aru b(8);
aru::Count();
aru c;
aru::Count();
 aru d;
 aru::Count();
aru e;
aru::Count();
    
}