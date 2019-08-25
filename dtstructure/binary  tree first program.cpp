#include<iostream>
using namespace std;
struct node
{
	int data;
	node *leftnext,*rightnext;
};
class binarytree
{
	private:
		node *base,*last;
	public:
	binarytree()
	{
		base=NULL;
	    last=NULL;
		}	
	bool isEmpty()
	{
		if(base==NULL)
		{return true;
		}
		else
		return false;
	}
	void insert(int v)
	{
		node *temp;
		temp=new node;
		temp->data=v;
		temp->leftnext=NULL;
		temp->rightnext=NULL;
		if(isEmpty())
		{
			base=temp;
			last=base;
		}
		else 
		{
			if(temp->data<last->data)
			{
				last->leftnext=temp;
				last=temp;
			}
			else if(temp->data>last->data)
			{
				last->rightnext=temp;
				last=temp;
			}
		}
		}
	void show()
	{
		node *temp=base;
		while(temp!=NULL)
		{
			cout<<temp->data<<"   ";
			temp=temp->leftnext;
			
		}
		
		cout<<endl;
		while(temp!=NULL)
		{
			cout<<temp->data<<"  ";
			temp=temp->rightnext;
			
		}
		cout<<endl;
			}	
				
};
int main()
{
	binarytree b;
	b.insert(14);
	b.insert(13);
	b.insert(12);
	b.insert(18);
	b.show();
	return 0;
}

