int height(node *root)
{
	if(root==NULL)
		return 0;
	return 1+max(height(root->left),height(root->right));
}

bool isbalance(node *root)
{
    int rh=0,lh=0;
    if(root==NULL)
        return true;
    rh = height(root->right);
    lh = height(root->left);
    
    if(abs(rh-lh)<=1 && isbalance(root->right) && isbalance(root->left))
        return true;
    else
        return false;
}
