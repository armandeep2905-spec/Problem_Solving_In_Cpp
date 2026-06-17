// Write a program to swap private values of two classes using a friend
//  function.

#include <iostream>
using namespace std;


class B;
class A
{
    int a;

public:
    void seta(int a) { this->a = a; }

    int geta() { return a; }

    friend void swap(A &n1, B &n2);
};


class B
{
    int b;

public:
    void setb(int b) { this->b = b; }
    int getb() { return b; }

       friend void swap(A &n1, B &n2);
};
void swap(A &n1, B &n2){
int temp = n1.a;
n1.a=n2.b;
n2.b=temp;
}




int main()
{
   A a;
   B b;
   a.seta(10);
   b.setb(15);
   cout<<a.geta()<<" "<<b.getb();

   swap(a,b);

    cout<<a.geta()<<" "<<b.getb();
}






