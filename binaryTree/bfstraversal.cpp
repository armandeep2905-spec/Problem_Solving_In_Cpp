#include <iostream>
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
{
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
    Leveldisplay(a);
}