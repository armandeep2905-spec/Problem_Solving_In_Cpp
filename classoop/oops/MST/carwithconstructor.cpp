#include<iostream>
using namespace std;


class car{
    public:
    string name;
    int seats;
    string type;
    int price;

    car(){}

    car (string n,int s,string t,int p){ // parameterized constructor

        name=n;
        seats=s;
        type=t;
        price=p;
    }

    car(string n, int p){ //here we created different constructors in a class
        name = n;
        price =p;
    }
};


void print(car c){  // this c is different than what we used as objects so no change occurs when we pass by value
    cout<<c.name<<" "<<c.price<<" "<<c.seats<<" "<<c.type;
}

void change(car c){        //this is pass by value so the name of car will not get changed.
    c.name="no car";
}
void change1(car &c){        //this is pass by reference so the name of car will be changed.
    c.name="no car";
}
int main(){


car c1("honda city",5,"sedan",12);
// c1.name=;
// c1.price=12;
// c1.seats=;
// c1.type="sedan";

car c2("swift",5,"sedan",7);
// c2.name="swift";
// c2.price=7;
// c2.seats=5;
// c2.type="sedan";


car c3;
c3.name="fortuner";
c3.price=40;
c3.seats=7;
c3.type="suv";



car c4("fortuner",20);
print(c1);
cout<<endl;  
change(c1);
print(c1);
cout<<endl;  
change1(c1); // only here the the car name changes because we pass by reference
print(c1);
cout<<endl;
print(c2);
cout<<endl;
print(c4);


}