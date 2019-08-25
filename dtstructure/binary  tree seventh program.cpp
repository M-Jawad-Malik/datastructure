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
	void findparent(int n,int &found,link* &parent)
	{
		link *q=p;
		found=0;
		parent=NULL;
		if(p==NULL)
		{
			return;
		}
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
				q=q->right;}}}	
	void insert(int v)
	{
		int found;
		link *parent;
		findparent(v,found,parent);
		link *t=new link;
		t->data=v;
		t->left=t->right=NULL;
		if(found==1)
		{
		 cout<<"Such Anode Exist\n";
		}
		else
	{
		if(parent==NULL)
		{
			p=t;
		}
	else
		
	parent->data>v?parent->left=t:parent->right=t;	
	}	}
	void PrintPreorder(link *q)
	{
		if(q==NULL)
		return;
		cout<<q->data<<" ";
		PrintPreorder(q->left);
		PrintPreorder(q->right);
	}
	void PrintPostorder(link *q)
	{
		if(q==NULL)
		{
			return;
		}
		PrintPostorder(q->left);
		PrintPostorder(q->right);
		cout<<q->data<<" ";}
	void PrintInorder(link *q)
	{
		if(q==NULL)
		{	return;
			
		}
		PrintInorder(q->left);
		cout<<q->data<<" ";
		PrintInorder(q->right);
	}
	void traverse()
	{int choice;
		a:cout<<"\n1.In Order Traverse\n2.Pre Order Traverse\n3.Post Order Traverse\nEnter Choice: ";
		cin>>choice;
		switch(choice)
		{
			
			case 1:
				PrintInorder(p);
				goto a;
				break;
			case 2:
			    PrintPreorder(p);
			    goto a;
			    break;
			case 3:
			    PrintPostorder(p);
			    goto a;
			    break;
			default:
			  cout<<"\nWronge Choice \n";
			  goto a;	}}
	link* min(link* &q)
	{
		while(q->left!=NULL)
		{
			q=q->left;
		}return q;}
	link* del(link* &q, int v)
	{
		if(q==NULL)
		{
			cout<<"\ntree is empty\n";
			return q;
		}
		else if(q->data>v)
		{
			q->left=del(q->left,v);
		}
		else if(q->data<v)
		{
			q->right=del(q->right,v);
		}
		else
		{
			if(q->left==NULL&&q->right==NULL)
			{
				delete q;
				q=NULL;
			}
			else if(q->left==NULL)
			{
				link *temp=q;
				q=q->right;
				delete temp;
			}
			else if(q->right==NULL)
			{
				link *temp=q;
				q=q->left;
				delete temp;
			}
			else
			{
				link *temp=min(q->right);
				q->data=temp->data;
				q->right=del(q->right,temp->data);
				
			}
		}
				return q;							  }			  							
};
int main()
{
	Binary t;
	int data[]={32,16,34,1,87,13,7,18,14,19,23,24,41,5,53};
	for(int i=0;i<15;i++)
	{
		t.insert(data[i]);
	}
	t.traverse();
    t.del(t.p,1);
    t.del(t.p,19);
    t.del(t.p,5);
    t.traverse();
    t.traverse();
    t.traverse();
	return 0;
}

