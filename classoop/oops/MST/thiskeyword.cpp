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
    void print(int runs){             // function inside class
     cout<<this->name<<" "<<this->runs<<" "<<this->avg<<endl;
     
 }

 int matches(){
    return runs/avg;
 }
};

// void print(cricketer c){
//     cout<<c.name<<" "<<c.runs<<endl;
// }

int main(){

    cricketer c1("virat kohli",120000,15.2);
    cricketer c2("rohit sharma",110000,18.7);
    // cout<<c1.name<<" "<<c1.runs<<endl;
    // cout<<c2.name<<" "<<c2.runs<<endl;

    c1.print(5);
   c2.print(7);
   cout<<c1.matches()<<" "<<c2.matches()<<endl;
}