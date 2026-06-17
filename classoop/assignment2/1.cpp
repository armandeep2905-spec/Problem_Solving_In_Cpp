#include<iostream>
using namespace std;


 float avg(int k1,int k2){
         float avg=(k1+k2)/2.0;
         return avg;
        }

class kid{
    private:
    int age;
    int height;
public:
    void setage(int age){this->age=age;}
    int getage(){return age;}
void setheight(int height){this->height=height;}
    int getheight(){return height;}




};
int main(){



  
  


kid k1,k2;
int i,j;
cin>>i>>j;
k1.setage(i);
k2.setage(j);

float a=avg(k1.getage(),k2.getage());
cout<<a;

}