#include<iostream>
using namespace std;
struct Node
{
	int data;
	Node *left;
	Node *right;
	Node(int data)
{
	this->data=data;
	this->left=this->right=NULL;
}
};
void  PrintPostorder(Node* n)
{
	if(n==NULL)
	return;
	PrintPostorder(n->left);
	PrintPostorder(n->right);
	cout<<n->data<<"  ";
	
}
void PrintPreorder(Node *n)
{
	if(n==NULL)
	return;
	cout<<n->data<<"  ";
	PrintPreorder(n->left);
	PrintPreorder(n->right);
	
}
void PrintInorder(Node *n)
{
	if(n==NULL)
	{
		return;
	}
	PrintInorder(n->left);
	cout<<n->data<<"  ";
	PrintInorder(n->right);
	
	
}
int main()
{
	Node *root=new Node(12);
	root->left=new Node(9);
	root->right=new Node(15);
	root->left->left=new Node(8);
	root->left->right=new Node(10);
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
