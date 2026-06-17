#include<iostream>
using namespace std;
class vehicle{
    string a;
    public:
    vehicle(string a): a(a){cout<<"the name of the vehicle is "<<a<<endl;}
   string getvehicle(){
return a;
    }
};
class brand{
    string s;
    public:
brand(vehicle z):s(z.getvehicle()){cout<<"the name of the brand is "<<z.getvehicle();}
};
int main(){
vehicle v1("arman");
brand b1(v1);

}