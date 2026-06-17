#include<iostream>
using namespace std;
class Tem{ public:
    int m;
    int h;
    int s;
   
 
    Tem(int a=0,int b=0,int c=0){ 
        h=a;
        m=b;
        s=c;
    }
Tem operator +(Tem t1){
    Tem temp;
    temp.h = h+ t1.h;

    temp.s = s+ t1.s;
    temp.m = m+ t1.m;
    if(temp.s>=60){
        int m=temp.s/60;
        int r=temp.s%60;
        temp.m=temp.m+m;
        temp.s=r;
    }
    if(temp.m>=60){
        int m=temp.m/60;
        int r=temp.m%60;
        temp.h=temp.h+m;
        temp.m=r;
    }
    return temp;
}
};
int main(){
    Tem t1(1,20,30);
    Tem t2(4,80,60);
    Tem t3;
    t3=t1+t2;
    cout<<t3.h<<" "<<t3.m<<" "<<t3.s;

}