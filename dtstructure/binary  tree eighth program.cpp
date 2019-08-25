 #include<iostream>
using namespace std;
struct link
{
	int data;
	link *left,*right;
};
class tree
{
	public:
		link *p;
		int sum;
	tree();
	bool isEmpty();		
	void findparent(int n,int &found,link* &parent);
	void insert(int n);
	link* min(link *q);
	link* del(link* q,int n);
	void Inorder(link* q);
	void Postorder(link* q);
	void Preorder(link* q);
	void traverse();
	void Sum()
	{
		cout<<"Sum of Data of all Nodes : "<<sum<<endl;
			}
	int Max(link *q);				
};
int main()
{
	tree t;
	link *q;
	int data[]={32,16,34,1,5,13,7,18,14,19,23,24,41,87,53};
	for(int i=0;i<15;i++)
	{
		t.insert(data[i]);
	}
	t.Sum();
	t.traverse();
    t.del(t.p,1);
    t.del(t.p,19);
    t.del(t.p,5);
    t.traverse();
    t.traverse();
    t.traverse();
    cout<<"Max: "<<t.Max(t.p);
    q=t.min(t.p);
    cout<<" MIN: "<<q->data<<endl;
    
    
	return 0;
}
tree::tree()
{
	p=NULL;
	sum=0;
}
bool tree::isEmpty()
{
	if(p==NULL)
	return true;
	else
	return false;
}
link* tree::min(link* q)
{
	while(q->left!=NULL)
	{
		q=q->left;
	}
	return q;
}
void tree::findparent(int n,int &found,link* &parent)
{
	found=0;
	parent=NULL;
	link* q=p;
	if(isEmpty())
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
			q=q->right;
		}
	}
}
void tree::insert(int n)
{
	int found;
		link *t=new link;
			t->data=n;
			t->left=t->right=NULL;
	link *parent;
	link *q=p;
	findparent(n,found,parent);
	if(found==1)
	{
		cout<<"\nSuch a node exist\n";
		return;
	}
	else
	{
		
		 if(parent==NULL)
			{
				p=t;
				sum=sum+t->data;
			}
			else
			{
				sum=sum+t->data;
				parent->data>n?parent->left=t:parent->right=t;
			}
		
	}
}
void tree::Inorder(link *q)
{
	if(q==NULL)
	{
	return;}
	Inorder(q->left);
	cout<<q->data<<" ";
	Inorder(q->right);
}
void tree::Postorder(link *q)
{
	if(q==NULL)
	{
	return;}
	Postorder(q->left);
	Postorder(q->right);
	cout<<q->data<<" ";
}
void tree::Preorder(link *q)
{
	if(q==NULL)
	{
	return;}
	cout<<q->data<<" ";
	Preorder(q->left);
	Preorder(q->right);
}
void tree::traverse()
{
	int choice;
	cout<<"\n1.Pre Order\n2.Post order\n3.In order\nEnter Your Choice: ";
	cin>>choice;
	switch(choice)
	{
		case 1:
			Preorder(p);
			break;
		case 2:
		    Inorder(p);
		    break;
		case 3:
		    Postorder(p);
		    break;
		default:
		 cout<<"\nWronge choice\n";
		 break;			
	}
}
link* tree::del(link* q,int n)
{
	if(q==NULL)
	{
		return q;
	}
	else if(q->data>n)
	{
		q->left=del(q->left,n);
	}
	else if(q->data<n)
	{
		q->right=del(q->right,n);
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
			link* temp=q;
			q=q->left;
			delete temp;
		}
		else
		{
			link* temp=min(q->right);
			q->data=temp->data;
			q->right=del(q->right,temp->data);
		}
		
	}
	return q;
}
int tree::Max(link *q)
{
	while(q->right!=NULL)
	{
		q=q->right;
	}
	return q->data;
}
