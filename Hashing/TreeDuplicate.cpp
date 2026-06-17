#include<iostream>
#include<unordered_set>
#include<vector>
using namespace std;
class node{public:
    int val;
    node *left;
    node *right;

    node(int v):val(v),right(NULL) ,left(NULL){};
};

bool checkDuplicates(node* root, unordered_set<int> &s) {
    if (root == NULL)
        return false;

    // If value already seen → duplicate found
    if (s.find(root->val) != s.end())
        return true;

    // Insert value into set
    s.insert(root->val);

    // Check left and right subtree
    return checkDuplicates(root->left, s) ||
           checkDuplicates(root->right, s);
}

int main(){
    unordered_set<int>s;
  node *a = new node(1);
    node *b = new node(2);
    node *c = new node(3);
    node *d = new node(4);
    node *e = new node(5);
    node *f = new node(6);
    a->left = b;
    a->right = c;
    b->left = d;
    b->right = e;
    c->right = f;

    if(checkDuplicates(a,s)){
        cout<<"duplicate found";
        
    }
    else cout<<"no duplication";
}