#include<iostream>
using namespace std;
struct leaf 
{
	int data;
	leaf *l,*r;
};
class tree
{
	public:
		leaf *p;
	public:
	tree();
	void findparent(int n,int &found,leaf* &parent);
	void add(int n);
	void In(leaf *q);
	void Pre(leaf *q);
	void Post(leaf *q);
	void transverse();
	void findfordel(int n,int &found,leaf* &parent,leaf* &x);
	void  del(int num);
	leaf* dele(leaf* &q,int n);
	leaf* min(leaf* &q);
};
int main()
{
	tree t;
	int data[]={32,16,34,14,17};
	for(int i=0;i<5;i++)
	{
		t.add(data[i]);
	}
	t.transverse();
	t.dele(t.p,16);
	t.transverse();
	t.transverse();
	return 0;
	
}
tree::tree()
{
	p=NULL;
}
void tree::findparent(int n,int &found,leaf* &parent)
{
	leaf *q;
	parent=NULL;
	found=0;
	if(p==NULL)
	{
		return;}
		q=p;
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
				q=q->l;
				
			}
			else
			{
				parent=q;
				q=q->r;}}}
void tree::add(int n)
{
	leaf *t,*parent;
	int found;
	findparent(n,found,parent);
	if(found==1)
	{
		cout<<"\nSuch a node exist\n";
	}
	else
	{
		t=new leaf;
		t->data=n;
		t->l=t->r=NULL;
		if(parent==NULL)
		{
			p=t;
		}
		else
		{
			
			parent->data>n?parent->l=t:parent->r=t;}}}
void tree::In(leaf *q)
{
	if(q==NULL)
	return;
	In(q->l);
	cout<<q->data<<"  ";
	In(q->r);
}
void tree::Pre(leaf *q)
{
	if(q==NULL)
	return;
	cout<<q->data<<"  ";
	Pre(q->l);
	Pre(q->r);
}
void tree::Post(leaf *q)
{
	if(q==NULL)
	return;
	Post(q->l);
	Post(q->r);
	cout<<q->data<<"  ";
}
void tree::transverse()
{
	int c;
	cout<<"\n1.In Order\n2.Pre Order\n3.Post Order\nEnter Choice:\n";
	cin>>c;
	switch(c)
	{
		case 1:
			In(p);
			break;
		case 2:
		    Pre(p);
		    break;
		case 3:
		    Post(p);
		    break;
		default:
		   cout<<"\nWronge Choice\n";			
	}
	cout<<endl<<endl;
}
void tree::findfordel(int n,int &found,leaf* &parent,leaf* &x)
{
	leaf *q;
	found=0;
	parent=NULL;
	if(p==NULL)
	{
		return;
	}
	q=p;
	while(q!=NULL)
	{
		if(q->data==n)
		{
			found=1;
			x=q;
			return;
		}
		else if(q->data>n)
		{
			parent=q;
			q=q->l;
		}
		else
		{
			parent=q;
			q=q->r;
		}
	}
}
void tree::del(int num)
{
	leaf *parent,*x,*xsucc;
	int found;
	if(p==NULL)
	{
		cout<<"\nTree does not exist\n";
		return;
	}
	parent=x=NULL;
	findfordel(num,found,parent,x);
	if(found==0)
	{
		std::cout<<"\nNode to be delted NOT FOUND\n ";
		return;
	}
	if(parent->l=NULL&&parent->r==NULL)
	{
	if(parent->l==x)
	{
		parent->l=NULL;
		delete x;
		return;
		}	
	else 
	{
		parent->r=NULL;
		delete x;
		return;
		}	
	}
	else if(parent->l!=NULL&&parent->r!=NULL)
	{
		parent=x;
		xsucc=x->r;
		while(xsucc!=NULL)
		{
			parent=xsucc;
			xsucc=xsucc->l;
		}
		x->data=xsucc->data;
		x=xsucc;
		
		
	}
	else if(parent->l!=NULL&&parent->r==NULL)
	{
		if(parent->l==x)
		{
			parent->l=x->l;
			delete x;
			return;
		}
		else
		{
			parent->r=x->l;
			return;
		}}
	else if(parent->l==NULL&&parent->r!=NULL)
	{
		if(parent->r==x)
		{
			parent->r=x->r;
			delete x;
			return;
		}
		else
		{
			parent->l=x->r;
			delete x;
			return;
		}
		}	
}
leaf* tree::min(leaf* &q)
{
	while(q->l!=NULL)
	{
		q=q->l;
	}
	return q;
}
leaf* tree::dele(leaf* &q,int n)
{
	if(q==NULL)
	{
		return q;
	}
	else if(q->data>n)
	{
		q->l=dele(q->l,n);
		
	}
	else if(q->data<n)
	{
		q->r=dele(q->r,n);
	}
	else
	{
		//No child//
		if(q->l==NULL&&q->r==NULL)
		{
			delete q;
			q=NULL;
		}
		else if(q->l==NULL)
		{
			leaf* temp=q;
			q=q->r;
			delete temp;
		}
		else if(q->r==NULL)
		{
			leaf* temp=q;
			q=q->l;
			delete temp;
		}
		else 
		{
			leaf* temp=min(q->r);
			q->data=temp->data;
			q->r=dele(q->r,temp->data);
		}
	}
	return q;
}


