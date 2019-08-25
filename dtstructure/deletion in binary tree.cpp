leaf* min(leaf *root)
{
	while(root->l!NULL)
	{
		root=root->left;
	}
	return root;
};
leaf* delete(leaf* root,int n)
{
	if(root==NULL)
	{
		return root;
	}
	else if(roots->data>n)
	{
		root->left=delete(root->left,n)
	}
	else if(root->data<n)
	{
		root->Right=delete(root->Right,n);
	}
	else
	{
		//no child//
		if(root->left==NULL&&root->Right==NULL)
		{
			delete root;
			root=NULL;
		}
		else if(root->left==NULL)
		{
			leaf *temp=root;
			root=root->Right;
			delete temp;
		}
		else if(root->Right==NULL)
		{
			leaf* temp=root;
			root=root->left;
			delete temp;
			
		}
		else
		{
			leaf* temp=min(root->Right);
			root->data=temp->data;
			root->Right=delete(root->Right,Temp->data);
			
			
		}
	}
	return root;
}
