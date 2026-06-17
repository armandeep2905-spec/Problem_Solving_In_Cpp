//Make a class named Fruit with a data member to calculate the number 
//of fruits in a basket. Create two other class named Apples and
// Mangoes to calculate the number of apples and mangoes in the basket. 
//Print the number of fruits of each type and the total number of 
//fruits in the basket.

#include<iostream>
using namespace std;



class basket{
    public:
    static int count;

    basket(){count;}
};
int basket::count=0;
class mangoes:public basket{
    public:
    static int count1;

   mangoes(){count1++;}

};
int mangoes::count1=0;
class apples:public apples{
    public:
    static int count2;

   apples(){count2++;}
};
int apples::count2=0;
int main(){
mangoes m1,m2,m3,m4;
apples a1,a2,a4,a6;
cout<<basket::count<<endl<<mangoes::count1<<endl<<apples::count2;


}