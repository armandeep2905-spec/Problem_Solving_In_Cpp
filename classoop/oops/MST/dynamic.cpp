#include<iostream>
using namespace std;
class cricketer{


    public:
    string name;
    int runs;
    float avg;

    cricketer(string name, int runs,float avg){
     this->name=name;
     this->runs=runs;
     this->avg=avg;
    }

    void change(cricketer *p){
        //(*p).avg=88;
        p->avg=88;
    }
};

int main(){

    cricketer c1("virat kohli",120000,15.2);
    cricketer* c2=new cricketer("rohit sharma",110000,18.7);
    cout<<c2->name;
    int *ptr =new int[10];  //stored in heap memory
    
    cout<<*ptr;               

  




    }
