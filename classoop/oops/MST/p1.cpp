#include<iostream>
using namespace std;
class shoppingcart{
int id;
string name;

public:
shoppingcart(int id,string name){
    this->id=id;
    this->name=name;
   
   
}

void display(){
    cout<<"name is "<<name <<" " <<"id is"<<id<<endl;
}
};


int main(){
 
int n;
string naam;
int c;
cout<<"enter number of carts";
cin>>n;
shoppingcart *c1=new shoppingcart[c,naam];
for(int i=0;i<n;i++){
    cout<<"enter the id";
    cin>>c;
    cout<<"enter name";
    cin>>naam;
    shoppingcart *c1=new shoppingcart(c,naam);
 c1->display();
}




}