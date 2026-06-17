#include<iostream>
using namespace std;

class rectangle{
public:
    int l;
    int b;
    int h;


    rectangle(){cout<<"bhag bsdk"<<endl;}
    rectangle(int l , int b,int h)
{
    
    this->l=l;
     this->b=b;
    this->h=h;
}
};


int main(){
//     int n;
//     cout<<"enter number of rectangles";
//  cin>>n;
    rectangle arr[3]={
        rectangle(2,3,5),

        rectangle(),

        rectangle(3,5,6)
    };
   
for(int i=0;i<3;i++){
cout<<"volume of rectangle"<<i+1<<" "<<arr[i].l*arr[i].b*arr[i].h <<endl;
    };

}