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
    }};

    class linkedlist{
        public:
int size;
node* head;
node* tail;
public:
linkedlist(){

    this->head=this->tail=NULL;
    this->size=0;
}
void display(){
    node *z=head;
while(z!=NULL){
    cout<<z->value<<" ";
    z=z->next;}}

    
void insertatend(int val){
    node *temp=new node(val);
    if(size>0){
        tail->next=temp;
        tail=temp;
        size++;
    }
    else {
        head=tail=temp;
        size++;
    }
}

    };

    int main(){


       
        linkedlist ll;
        ll.insertatend(10);
            ll.insertatend(20);   
             ll.insertatend(30);    
             ll.insertatend(40);   
              ll.insertatend(50);

              ll.display();
cout<<endl;
           ll.insertatend(21);
     ll.display();

       

    }