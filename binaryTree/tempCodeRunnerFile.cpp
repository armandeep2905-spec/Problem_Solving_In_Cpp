void displaytree(node *root)
{
    if (root == NULL)
        return;
    cout << root->val << " ";
    displaytree(root->left);
    displaytree(root->right);
};