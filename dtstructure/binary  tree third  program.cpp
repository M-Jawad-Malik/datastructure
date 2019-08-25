#include<iostream>
using namespace std;
struct node
{
	int data;
	node *left,*right;
	node(int n)
	{
		this->data=n;
		this->left=this->right=NULL;
		
	}
};
void PrintPostorder(node *n)
{
	if(n==NULL)
	return;
	PrintPostorder(n->left);
	PrintPostorder(n->right);
	cout<<n->data<<"  ";
	
}
void PrintPreorder(node *n)
{
	if(n==NULL)
	return;
	cout<<n->data<<" ";
	PrintPreorder(n->left);
	PrintPreorder(n->right);
	
}
void PrintInorder(node *n)
{
	if(n==NULL)
	return;
	PrintInorder(n->left);
	cout<<n->data<<"  ";
	PrintInorder(n->right);

}
int main()
{
	node *root;
	root=new node(13);
	root->left=new node(11);
	root->right=new node(20);
	root->left->left=new node(10);
	root->left->right=new node(12);
	root->right->left=new node(19);
	root->right->right=new node(21);
		cout << "\nPreorder traversal of binary tree is \n"; 
    PrintPreorder(root); 
  cout<<endl;
    cout << "\nInorder traversal of binary tree is \n"; 
    PrintInorder(root);  
  cout<<endl;
    cout << "\nPostorder traversal of binary tree is \n"; 
    PrintPostorder(root); 
  cout<<endl;
    return 0; 
	
	}
