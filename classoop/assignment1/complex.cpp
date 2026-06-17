#include <iostream>
using namespace std;

class complex
{
    int real;
    int img;
public:
void set()
{
    cout << "Enter Real part ";
    cin >> real;
    cout << endl;
    cout << "Enter Imaginary part ";
    cin >> img;

}
void display()
{
   
       
    cout<<real<<" "<<"+"<<" "<<"i"<<img<<endl;

}
 
 
friend void sum();


};

void sum(){
    complex c3;
    c3.real=c8.real+c9.real;
    c3.img=c8.img+c9.img;

   return c3;}

int main(){
complex c1,c2,c4;
c1.set();
c1.display();
c2.set();
c2.display();
 c4=c1.sum(c1,c2);
 c4.display();






}
    

