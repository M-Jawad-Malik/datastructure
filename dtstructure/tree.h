#include<iostream>
struct leaf

{
	int data;
	leaf *l,*r;
	
};
class tree
{
	private:
	leaf *p;
	public:
	tree();
	void destruct(leaf *q);
	void findparent(int n,int &found,leaf* &parent);
	void add(int n);
	void in(leaf* q);
	void pre(leaf* q);
	void post(leaf* q);
	void transverse();
    void findfordel(int n,int &found,leaf* &parent,leaf* &x);
	void del(int n);
};
tree::tree()
{
	p=NULL;
}
void tree::destruct(leaf *q)
{
	if(q!=NULL)
	{
		destruct(q->l);
		del(q->data);
		destruct(q->r);
		
	}
	
}

void tree::findparent(int n,int &found,leaf* &parent)
{
	leaf* q;
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
		}
	
}}
void tree::add(int n)
{
	int found;
	leaf *t,*parent;
	findparent(n,found,parent);
	if(found==1)
	{
		std::cout<<" such a node exists\n";
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
			parent->data>n?parent->l=t:parent->r=t;
		
	}}
void tree::in(leaf* q)
{
	if(q==NULL)
	return;
		in(q->l);
		std::cout<<"\t"<<q->data<<"  ";
		in(q->r);
		
	
}
void tree::pre(leaf* q)
{
	if(q==NULL)
	return;
		std::cout<<"\t"<<q->data<<"  ";
		pre(q->l);
		pre(q->r);
		
	}

void tree::post(leaf* q)
{
	if(q==NULL)
	return;
		post(q->l);
		post(q->r);
		std::cout<<"\t"<<q->data<<"  ";
	}
void tree::transverse()
{
	int c;
	std::cout<<"\n1.In Order\n2.Pre Oreder\n3.Post Order\nChoice: ";
	std::cin>>c;
	switch(c)
	{
		case 1:
			in(p);
		break;	
		case 2:
		    pre(p);
		break;    
		case 3:
		   post(p);
		break;
		default:
		std::cout<<" Wronge choice: ";
		   
		   		
	}
	
	}	
	


void tree::findfordel(int n,int &found,leaf* &parent,leaf* &x)
{
	leaf* q;
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
		std::cout<<"\nTree is Empty\n";
		return;
	}
	parent=x=NULL;
	findfordel(num,found,parent,x);
	if(found==0)
	{
		std::cout<<"\nNode to be delted NOT FOUND\n ";
		return;
	}
	if(x->l!=NULL&&x->r!=NULL)
	{
		parent=x;
		xsucc=x->r;
		while(xsucc->l!=NULL)
		{
			parent=xsucc;
			
		}
		x->data=xsucc->data;
		x=xsucc;
		
	}
	if(x->l==NULL&&x->r==NULL)
	{
		if(parent->r==x)
		{
			parent->r=NULL;}
			else
		{
				
			parent->l=NULL;
			delete x;
			return;
		}}
	if(x->l!=NULL&&x->r==NULL)
	{
		if(parent->l==x)
		{
			parent->l=x->l;
			
		}
		else
		{
			parent->r=x->l;
			delete x;
			return;
		}
		
		}
		if(x->r!=NULL&&x->l==NULL)
	{
		if(parent->l==x)
		{
			parent->l=x->r;
			
		}
		else
		{
			parent->r=x->r;
			delete x;
			return;
		}
		
		}
		
			
	}

