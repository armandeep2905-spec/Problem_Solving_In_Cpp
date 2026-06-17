#include<iostream>
using namespace std;
class Hours{
    int hour;
    public:
    Hours(int h): hour(h){};
    int getTime(){
        return hour;
    };
};
 class Minutes{
    int min;
    public:
    Minutes(){};
    
   
    
   Minutes&  operator=(Hours obj){
        min=obj.getTime()*60;
       return *this;
    };
    int getMIN(){
    return min;
   }
 };
 int main(){
    Hours h1(19);
    Minutes m1;
    m1=h1;
    cout<<m1.getMIN();

 }