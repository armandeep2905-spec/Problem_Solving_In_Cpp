#include<iostream>
using namespace std;
class pen{
    char color;
public:
    void setcolor(char color){ this->color=color;}
    char getcolor(){return color;}
};
int main(){

    
pen *ptr=new pen[6];
char a='a';
// ptr->setcolor('b');
// cout<<ptr->getcolor();
for(int i=0;i<6;i++){
ptr[i].setcolor(a);
a++;
cout<<ptr[i].getcolor()<<endl;
}
delete[] ptr;
}