void atlevel(node *root, int k)
{
    if(root==NULL)
        return;
    if(k==0)
        cout<<root->data<<" ";
    atlevel(root->left, k-1);
    atlevel(root->right, k-1);
}
