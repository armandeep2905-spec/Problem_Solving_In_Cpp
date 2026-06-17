#include<iostream>
using namespace std;
class node{
   public:
    node* next;
    int value;

     public:
    node(int value){
        this->value=value;
        this->next=NULL;
    }
  void display(node *a){
while(a!=NULL){
    cout<<a->value<<" ";
    a=a->next;}}
    

    // void insertatend(node *a,int val){  // passed head node as paramter
    //     node *t=new node(70);
    //     while(a->next!=NULL){
    //     if(a->next=NULL){
    //         a->next=t;}
    //         a=a->next;
        
    // }
        

    };

  

int main(){
    node *a= new node(10);
    node *b= new node(20);
    node *c= new node(30);
    node *d= new node(40);
    node *e= new node(50);
a->next=b;
b->next=c;
c->next=d;
d->next=e;

a->display(a); cout<<endl; // remember to use arrow operator.
// a->insertatend(a,90);
a->display(a);
}