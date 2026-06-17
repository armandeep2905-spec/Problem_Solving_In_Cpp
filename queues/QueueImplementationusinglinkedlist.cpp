#include<iostream>
using namespace std;
class node{
    public:
    int value;
    node* next;

    node(int value){
        this->value=value;
        this->next=NULL;
    }
};

class Queue{public:
    node *head;
    node *tail;
    int size=0;

    Queue(){
        this->head=this->tail=NULL;
        this->size=0;
    }
void insertatstart(int data){
node* temp=new node(data);

temp->next=head;
head=temp;


}
void pop(){
    node *temp=head;
    head=head->next;
    delete temp;
}
void display(){
    node *temp=head;
    while(temp!=NULL){
        cout<<temp->value<<" ";
        temp=temp->next;
    }
}
};

int main(){
    Queue s;
    s.insertatstart(10);
    s.insertatstart(20);
    s.insertatstart(30);
    s.insertatstart(40);
    s.display();
    s.pop();
    cout<<endl;
s.display();
}