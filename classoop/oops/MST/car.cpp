#include<iostream>
using namespace std;


class car{
    public:
    string name;
    int seats;
    string type;
    int price;
};


void print(car c){  // this c is different than what we used as objects so no change occurs when we pass by value
    cout<<c.name<<" "<<c.price<<" "<<c.seats<<" "<<c.type;
};

void change(car c){        //this is pass by value so the name of car will not get changed.
    c.name="no car";       // here is c is shallow copy of c1, because no change gets made.
}
void change1(car &c){        //this is pass by reference so the name of car will be changed.
    c.name="no car";      // here is c is deep copy of c1 , because whatever change we made in c got changed in c1
}
int main(){


car c1;
c1.name="honda city";
c1.price=12;
c1.seats=5;
c1.type="sedan";

car c2;
c2.name="swift";
c2.price=7;
c2.seats=5;
c2.type="sedan";


car c3;
c3.name="fortuner";
c3.price=40;
c3.seats=7;
c3.type="suv";

print(c1);
cout<<endl;    
change1(c1);
print(c1);
// cout<<endl;
// print(c3);


}