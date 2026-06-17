#include<iostream>
#include<queue>
using namespace std;
class node{
    public:
    int val;
    node *left =NULL; node *right=NULL;
node(int v):val(v){};
};

bool condition1(node *root){
    if(root == NULL){ return true;}
    if(root->left!=NULL && root->left->val>root->val){return false;}
    if(root->right!=NULL && root->right->val>root->val){return false;}
return condition1(root->left) && condition1(root->right);


}
int treesize(node *root){
    if(root==NULL){return 0;}
    return 1+treesize(root->left)+treesize(root->right);


}
bool condition2(node *root){
    int size=treesize(root);
    queue<node *>q;
    int count=0;
    q.push(root);
    while(count<size){
        node* temp=q.front();
        q.pop();
        count++;
        if(temp!=NULL){
            q.push(temp->left);
              q.push(temp->right);
        }
    }
    if(q.size()>0){
        node *temp=q.front();
        if(temp!=NULL){return false;}
        q.pop();
    }
    return true;
}
int main(){
    node *a = new node(6);
    node *b = new node(58);
    node *c = new node(32);
    node *d = new node(42);
    node *e = new node(23);
    node *f = new node(12);
    node *g = new node(10);
    a->left = b;
    a->right = c;

    b->left = d;
    b->right = e;

    c->left = f;
    c->right = g;
if(condition1(a) && condition2(a)){
    cout<<"maxheap";
}
else cout<<"not a maxheap";
    
}