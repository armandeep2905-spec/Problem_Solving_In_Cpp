//implementation of stack using array

#include<iostream>
 
using namespace std;
#define MAX 5
class Stack{
int arr[MAX];
int top;

public:
Stack() { top =-1;}
void push(int x){
    if(isFull()){cout<<"stack overflow"<<endl;}

else{
    top++;
    arr[top]=x;
    cout<<x<<"pushed in the array"<<endl;
}
}
void pop(){
    if(isEmpty()){cout<<"nothing to pop"<<endl;}
    
    else{cout<<arr[top];
    top--;}
    }
    bool isEmpty(){
        return (top==-1);
    }

    bool isFull(){
        return(top==MAX -1);
    }

    void display(){
        if(isEmpty()){
            cout<<"nothing in the stack"<<endl;}
            else{
                cout<<"stack members are"<<endl;
                for(int i=top;i>=0;i--){
                    cout<<"bahr nikalo"<<" "<<arr[i]<<endl;
                }
                cout<<endl;
            }
        }
    void peek(){
        if(isEmpty()){
            cout<<"stack mei kuch nhi"<<endl;}
            else{
                cout<<"top element is"<<arr[top]<<endl;
            
        }
    }
};

int main(){
    Stack s;
    
    s.push(4);
    s.push(10);
    s.push(20);
    s.push(30);
    s.display();
    s.peek();
    s.pop();
    s.display();
}