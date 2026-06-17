#include<iostream>
using namespace std;
class human{
protected:
    int weight;
    int age;
    int height;


  
    int getage(){
        return age;
    }

    void setage(int age){
        this->age=age;
    }
};

class male: private human{
    public:
    string color;
 string getcolor(){
        return color;
    }

    void setcolor(string color){
        this->color=color;
    }


    void sleep(){
        cout<<"mard ded";
    }
};



int main()
{
    human h1;
    male m1;
    // m1.weight=123;
    h1.setage(19);
cout<<h1.getage()<<endl;
m1.setcolor("brown");
cout<<m1.getcolor();
// cout<<m1.weight<<endl;
m1.sleep();


}