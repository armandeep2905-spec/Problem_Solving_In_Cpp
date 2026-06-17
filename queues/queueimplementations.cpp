#include <iostream>
using namespace std;
class node
{
public:
    int value;
    node *next;

    node(int value)
    {
        this->value = value;
        this->next = NULL;
    }
};

class Stack
{
public:
    node *head;
    node *tail;

    Stack()
    {
        this->head = this->tail = NULL;
    }

    void insertatend(int data)
    {

        node *temp = new node(data);
        if (head == NULL)
        {
            head = tail = temp;
        }
        else

            tail->next = temp;
        tail = temp;
    }

    void pop()
    {
        // node *temp = head;
        head = head->next;
        // delete temp;
    }
    void display()
    {
        node *temp = head;
        while (temp != NULL)
        {
            cout << temp->value << " ";
            temp = temp->next;
        }
    }
};

int main()
{
    Stack s;
    s.insertatend(10);
    s.insertatend(20);
    s.insertatend(30);
    s.insertatend(40);
    s.display();
    s.pop();
    s.display();
}