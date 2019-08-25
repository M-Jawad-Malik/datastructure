#include<iostream>
using namespace std;
struct leaf
{
	int data;
	leaf *l,*r;};
class tree 
{
	public:
		leaf *p;
    tree();
	void findparent(int n,int &found,leaf* &parent);
	void add(int n);
	void In(leaf *q);
	void Pre(leaf *q);
	void Post(leaf *q);
	void transverse();
	void findfordel(int n,int &found,leaf* &parent,leaf* &x);
	leaf* min(leaf* q);
	leaf* del(leaf* &q,int n);
};
int main()
{
	tree t;
	int data[]={32,16,34,1,87,13,7,18,14,19,23,24,41,5,53};
	for(int i=0;i<15;i++)
	{
		t.add(data[i]);
	}
	t.transverse();
    t.del(t.p,1);
    t.del(t.p,19);
    t.del(t.p,5);
    t.transverse();
    t.transverse();
    t.transverse();
	return 0;
}
tree::tree()
{
	p=NULL;}
void tree::findparent(int n,int &found,leaf* &parent)
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
		}}}
void tree::add(int n)
{
	leaf *parent,*t;
	int found;
	parent=NULL;
	findparent(n,found,parent);
	if(found==1)
	{
		cout<<"\nSuch Node Exist Already\n";
		return;
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
			parent->data>n?parent->l=t:parent->r=t;
		}}}
void tree::In(leaf *q)
{
	if(q==NULL)
	return;
	In(q->l);
	cout<<q->data<<"  ";
	In(q->r);}
void tree::Pre(leaf *q)
{
	if(q==NULL)
	return;
	cout<<q->data<<"  ";
	Pre(q->l);
	Pre(q->r);}
void tree::Post(leaf *q)
{
	if(q==NULL)
	return;
	Post(q->l);
	Post(q->r);
	cout<<q->data<<"  ";	}
void tree::transverse()
{
	int c;
	cout<<"\n1.In Order Transverse\n2.Pre Order Transverse\n3.Post Order Transverse\nEnter Choice: ";
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
		  cout<<"\n Wronge Choice Entered\n";}}
void tree::findfordel(int n,int &found,leaf* &parent,leaf* &x)
{
	leaf *q;
	found=0;
	if(p==NULL)
	{
		cout<<"\nTree Does Not Exist\n";
	    return;
	}
	parent=x=NULL;
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
			}	}}	
leaf* tree::min(leaf* q)
{
	while(q->l!=NULL)
	{
		q=q->l;
	}
	return q;
			}			
leaf* tree::del(leaf* &q,int n)
{
	if(q==NULL)
	{
		return q;
	}
	else if(q->data>n)
	{
		q->l=del(q->l,n);
		
	}
	else if(q->data<n)
	{
		q->r=del(q->r,n);
	}
	else
	{
		//no child//
		if(q->l==NULL&&q->r==NULL)
		{
			delete q;
			q=NULL;
		}
		else if(q->l==NULL)
		{
			leaf *temp=q;
			q=q->r;
			delete temp;
		}
		else if(q->r==NULL)
		{
			leaf *temp=q;
			q=q->l;
			delete temp;
		}
		else 
		{
			//two child//
			leaf *temp=min(q->r);
			q->data=temp->data;
			q->r=del(q->r,temp->data);}}
			return q;
			}				  								
