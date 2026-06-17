#include<iostream>
using namespace std;
class cricketer{


    public:
    string name;
    int runs;
    float avg;
public:
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
    cricketer c2("rohit sharma",110000,18.7);
    // cout<<c1.name<<" "<<c1.runs<<endl;
    // cout<<c2.name<<" "<<c2.runs<<endl;

  cricketer *p1=&c1;
    cout<<p1->runs<<endl;
c1.change(p1);
cout<<(*p1).avg<<endl<<p1->avg;
//    (*p1).avg=77;
//    cout<<(*p1).avg;




    }
