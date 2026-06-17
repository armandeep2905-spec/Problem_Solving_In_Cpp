#include <iostream>
#include<vector>
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

void preorder(node *root,vector<int> &arr,int &i){
    if(root==NULL ) return ;
    root->val=arr[i++];
    preorder(root->left, arr, i);
    preorder(root->right, arr,i);
}
void inorder(node *root,vector<int> &arr){
    if(root==NULL) return;
    inorder(root->right,arr);
   arr.push_back(root->val);
   inorder(root->left, arr);
}
void print(vector<int>arr){
for(int i=0;i<arr.size();i++){
    cout<<arr[i]<<" ";
}cout<<endl;
}
int levels(node *root)
{
    if (root == NULL)
        return 0;
    return 1 + max(levels(root->left), levels(root->right));
}
void displaytree(node *root, int CurLevel, int ReqLevel)
{
    if (root == NULL)
        return;
    if (CurLevel == ReqLevel)
    {
        cout << root->val << " ";
        return; // this return statement optimises the code,lesser recursion depth,faltu calculations are avoided.
    }
    displaytree(root->left, CurLevel + 1, ReqLevel);
    displaytree(root->right, CurLevel + 1, ReqLevel);
};
void Leveldisplay(node *root)
{
    int n = levels(root);
    for (int i = 1; i <= n; i++)
    {
        displaytree(root, 1, i);
        cout << endl;
    }
}
    

int main()
{vector<int> arr;
    node *a = new node(10);
    node *b = new node(5);
    node *c = new node(16);
    node *d = new node(1);
    node *e = new node(8);
    node *f = new node(12);
    node *g = new node(20);
    a->left = b;
    a->right = c;

    b->left = d;
    b->right = e;

    c->left = f;
    c->right = g;
    inorder(a,arr);
    print(arr);
    int i=0;
    preorder(a,arr,i);
Leveldisplay(a);
}