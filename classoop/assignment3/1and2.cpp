#include<iostream>
using namespace std;

class rectangle{
    int length, breadth;

public:
rectangle(){
    length=0;
    breadth=0;
    
}


rectangle(int i,int j){
    length=i;
    breadth=j;
   

}
rectangle(int a){
    length=breadth=a;
    
}


int area(){
    return length*breadth;
}
~rectangle(){
    cout<<"destroying the universe hahahaha"<<endl;
}
};


int main(){
    rectangle r[3]={
    rectangle (),
    
    rectangle(6,2),  //here if instead of array we just use different r like r1 r2 r3, it will be solution of ques 1
 
    rectangle (4)};

   
    for(int i=0;i<3;i++){
        cout<<"area of rectangle "<<i+1<<" "<<r[i].area()<<endl;
    }
    return 0;
}