#include <iostream>
using namespace std;
#include<string>
class Stack {
private:
    static const int MAX = 100;
    char arr[MAX];
    int top;

public:
    // Constructor
    Stack() {
        top = -1;
    }

    // Push function
    void push(char ch) {
        if (top == MAX - 1) {
            cout << "Stack overflow\n";
            return;
        }
        arr[++top] = ch;
    }

    // Pop function
    char pop() {
        if (top == -1) {
            cout << "Stack underflow\n";
            return '\0';
        }
        return arr[top--];
    }

    // Check if stack is empty
    bool isEmpty() {
        return top == -1;
    }
};

int main() {
    string word;
    cout << "Enter a word: ";
    cin >> word;
    
    Stack s;

    // Push all characters onto stack
    for (int i = 0; i < word.length(); i++) {
        s.push(word[i]);
    }

    // Pop characters to reverse the word
    cout << "Reversed word: ";
    while (!s.isEmpty()) {
        cout << s.pop();
    }
    cout << endl;

    return 0;
}
