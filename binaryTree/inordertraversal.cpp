#include<iostream>
using namespace std;
class node
{
public:
    int val;
    node *left;
    node *right;

    node(int val)
    {
        this->val = val;
        this->left = this->right = NULL;
    }
};

void inorder(node *root){
if(root==NULL) return;
inorder(root->left);
cout<<root->val<<" ";
inorder(root->right);

}

int main()
{
    node *a = new node(10);
    node *b = new node(5);
    node *c = new node(15);
    node *d = new node(2);
    node *e = new node(8);
    node *f = new node(11);
    a->left = b;
    a->right = c;
    b->left = d;
    b->right = e;
    c->right = f;
   inorder(a);

   return 69;
}