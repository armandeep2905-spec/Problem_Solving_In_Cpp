#include <iostream>
#include <stack>

using namespace std;

// Function to check if opening and closing brackets match
bool isMatching(char open, char close) {
    if((open == '(' && close == ')') ||
           (open == '{' && close == '}') ||
           (open == '[' && close == ']')){
    return true;}
    else return false;
}

// Function to check balanced parentheses
bool isBalanced(string expr) {
    stack<char> s;
    char ch;

    for (int i=0;i<expr.length();i++) {
        if (ch == '(' || ch == '{' || ch == '[') {
            s.push(ch); // push opening brackets
        } else if (ch == ')' || ch == '}' || ch == ']') {
            if (s.empty() || !isMatching(s.top(), ch)) {
                return false; // unbalanced
            }
            s.pop(); // matched, remove opening bracket
        }
    }

//     return s.empty(); // if stack empty, all matched
 }

int main() {
    string expr;
    cout << "Enter expression: ";
    getline(cin, expr); // allow spaces in input

    if (isBalanced(expr)) {
        cout << "Expression is balanced." << endl;
    } else {
        cout << "Expression is NOT balanced." << endl;
    }

    return 0;
}
