#include <iostream>
using namespace std;

class Queue {
    int *arr;     // array to store queue
    int front;    // points to front element
    int rear;     // points to last element
    int capacity; // maximum size

public:
    // constructor
    Queue(int size) {
        capacity = size;
        arr = new int[capacity];
        front = -1;
        rear = -1;
    }

    // check if queue is empty
    bool isEmpty() {
        return (front == -1 && rear == -1);
    }

    // check if queue is full
    bool isFull() {
        return (rear == capacity - 1);
    }

    // enqueue = insert element
    void enqueue(int x) {
        if (isFull()) {
            cout << "Queue Overflow\n";
            return;
        }
        if (isEmpty()) {
            front = rear = 0;
        } else
        arr[++rear] = x;
    }

    // dequeue = remove element
    void dequeue() {
        if (isEmpty()) {
            cout << "Queue Underflow\n";
            return;
        }
        if (front == rear) {
            // only one element left
            front = rear = -1;
        } else {
            front++;
        }
    }

    // peek = get front element
    int peek() {
        if (isEmpty()) {
            cout << "Queue is empty\n";
            return -1;
        }
        return arr[front];
    }

    // display all elements
    void display() {
        if (isEmpty()) {
            cout << "Queue is empty\n";
            return;
        }
        cout << "Queue: ";
        for (int i = front; i <= rear; i++) {
            cout << arr[i] << " ";
        }
        cout << endl;
    }

    // destructor to free memory
    ~Queue() {
        delete[] arr;
    }
};

// test in main
int main() {
    Queue q(5); // queue of size 5

    q.enqueue(10);
    q.enqueue(20);
    q.enqueue(30);
    q.display();  // 10 20 30

    cout << "Front element = " << q.peek() << endl; // 10

    q.dequeue();
    q.display();  // 20 30

    q.enqueue(40);
    q.enqueue(50);
    q.enqueue(60);
    q.display();  // 20 30 40 50 60

    q.enqueue(70); // overflow
}
