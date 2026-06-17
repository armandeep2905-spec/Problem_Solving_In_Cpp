

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
    int n;
    cout<<"enter no. of elements in array";
    cin>>n;
    rectangle *r=new rectangle[n];
   for (int i = 1; i < n; i++)
   {
   for(int i=1;i<n;i++){
    if(i==1){
    r[i]=rectangle(5,2);}
    if(i==2){
    r[i]=rectangle(8);}
   }}
   
    
   

   
    for(int i=0;i<3;i++){
        cout<<"area of rectangle "<<i+1<<" "<<r[i].area()<<endl;
    }

    return 0;
    delete[] r;
}