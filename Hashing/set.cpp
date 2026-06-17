#include <iostream>
#include <unordered_set>
using namespace std;

class Node { public:
    int data;
    Node* next;
    Node(int val) : data(val), next(NULL) {}
};

// Function to detect loop using unordered_set
bool detectLoop(Node* head) {
    unordered_set<Node*> visited;   // stores addresses of visited nodes

    Node* curr = head;
    while (curr != NULL) {
        // If node already seen → loop exists
        if (visited.find(curr) != visited.end())
            return true;

        visited.insert(curr);  // mark node as visited
        curr = curr->next;
    }
    return false; // no loop found
}

int main() {
    // Creating nodes
    Node* n1 = new Node(1);
    Node* n2 = new Node(2);
    Node* n3 = new Node(3);
    Node* n4 = new Node(4);

    // Creating linked list: 1 → 2 → 3 → 4
    n1->next = n2;
    n2->next = n3;
    n3->next = n4;

    // Creating a loop: node 4 → node 2
     n4->next = n2;

    if (detectLoop(n1))
        cout << "Loop detected!" << endl;
    else
        cout << "No loop!" << endl;

    return 0;
}
