#include<iostream>
using namespace std;
struct link 
{
	int data;
	link *left,*right;
};
class Binary
{
	public:
		link *p;
	Binary()
	{
		p=NULL;
		}	
	link* min(link* &q)
	{
		while(q->left!=NULL)
		{
			q=q->left;
		}
		return q;
		}	
	bool isEmpty()
	{
		if(p==NULL)
		return true;
		else
		return false;
		}	
	void findparent(int n,int &found,link* &parent)
	{
		found=0;
		parent=NULL;
		link* q=p;
		if(isEmpty())
		{
			return
		}
		else
		{
			while(q!=NULL)
			{
				if(q->data==n)
				{
					found=1;
					return;
				}
				else if(q->data>n)
				{
					parent=q;
					q=q->left;
				}
				else
				{
					parent=q;
					q=q->right;
				}
				
			}
		}
		
		}
	void push(int n)
	{
		link *parent,*q;
		int found;
		findparent(n,found,parent);
		if(found==1)
		{
			cout<<"\nSuch Data exist Already\n";
		}
		else
		{
			q=new link;
			q->data=n;
			q->left=q->right=NULL;
			if(isEmpty())
			{
				p=q;
			}
			else
			{
				parent->data>n?parent->left=q:parent->right=q;
			}
		}
			}
	link* del(int n)
	{
		
					}				
}
