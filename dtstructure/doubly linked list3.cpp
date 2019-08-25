#include<iostream>
using namespace std;
struct link
{
	int data;
	link *pre,*next;
	
};
class list
{
	private:
		link *first,*last;
	public:
	list();
	void insert(int n);
	void remove(int n);
    void showforward();
	void showbackward();
		
};
int main()
{
	list l;
	l.insert(5);
	l.insert(6);
	l.insert(7);
	l.insert(8);
	l.insert(12);
	l.insert(14);
	l.remove(8);
	l.showforward();
	l.showbackward();

	return 0;
	
}
list::list()
{
	first=NULL;
	last=NULL;
}
void  list::insert(int n)
{
	link *node=new link;
	node->data=n;
	node->next=node->pre=NULL;
	if(first==NULL)
	{first=node;
	last=first;}
	else
	{
		node->pre=last;
		last->next=node;
		last=node;
	}
}
void list::remove(int n)
{
	link *temp=first;
	int i=0;
	if(first->data==n)
	{
		first->next->pre=first->pre;
		first=first->next;
		cout<<n<<" has been deleted\n";
		return;	}
	else
	{
		while(temp!=NULL)
		{
				temp=temp->next;
			if(temp->data==n)
			{
				
				last->next=temp->next;
				last->pre=temp->pre;
				
				delete temp;
				cout<<n<<" has been deleted\n";
				return;}
			else
			{
				i=1;
				}	
				last=temp;
			
				
		}
		
		}
	if(i==1)
	{
		cout<<n<<" has not been found\n";
			}		
}
void list::showforward()
{
	link *p;
	p=first;
	while(p!=NULL)
	{
		cout<<p->data<<" ";
		p=p->next;
	}
	cout<<endl;
}
void list::showbackward()
{
	link *p;
	p=last;
	while(p!=NULL)
	{
		cout<<p->data<<" ";
		p=p->pre;
		 
	}
	cout<<endl;
}
