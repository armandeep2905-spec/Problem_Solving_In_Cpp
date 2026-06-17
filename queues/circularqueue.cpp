#include <iostream>
using namespace std; // Use the standard namespace

#define MAX_SIZE 5 // Using a small size for demonstration

class CircularQueue {
public:
    // All members are public
    int items[MAX_SIZE];
    int front;
    int rear;

    // Constructor
    CircularQueue() {
        front = -1;
        rear = -1;
    }

    // Checks if the queue is full
    bool isFull() {
        return (rear + 1) % MAX_SIZE == front;
    }

    // Checks if the queue is empty
    bool isEmpty() {
        return front == -1;
    }

    // Adds an element to the rear of the queue
    void enqueue(int value) {
        if (isFull()) {
            cout << "Queue is full. Cannot enqueue " << value << endl;
            return;
        }
        if (isEmpty()) {
            front = 0; // If it's the first element
        }
        // Calculate the new rear position in a circular way
        rear = (rear + 1) % MAX_SIZE;
        items[rear] = value;
        cout << value << " enqueued to queue." << endl;
    }

    // Removes an element from the front of the queue
    int dequeue() {
        if (isEmpty()) {
            cout << "Queue is empty. Cannot dequeue." << endl;
            return -1; // Error value
        }
        int dequeuedValue = items[front];
        
        // If this is the last element in the queue
        if (front == rear) {
            front = -1;
            rear = -1;
        } else {
            // Move front to the next position in a circular way
            front = (front + 1) % MAX_SIZE;
        }
        cout << dequeuedValue << " dequeued from queue." << endl;
        return dequeuedValue;
    }
void display(){
    while(front!=rear){
        cout<<""

    }
}
    // Returns the front element without removing it
    int peek() {
        if (isEmpty()) {
            cout << "Queue is empty." << endl;
            return -1;
        }
        return items[front];
    }
};

int main(){
    CircularQueue c;
    c.enqueue(10);
    c.enqueue(20);
    c.enqueue(30);
    c.enqueue(40);
    c.enqueue(50);

}