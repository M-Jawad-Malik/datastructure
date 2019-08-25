#include<iostream>
using namespace std;
struct link 
{
	int data;
	link *pre;
	link *next;
	
};
class list 
{
	private:
		link *first,*last;
	public:
	list();
	void add(int n);
	void remove(int n);
	void show();
		
};
int main()
{
	list l;
	l.add(12);
	l.add(14);
	l.add(90);
	l.add(198);
	l.add(132);
	l.add(154);
	l.add(1423);
	l.show();
	l.remove(132);
	l.show();
	return 0;
}
list::list()
{
	first=NULL;
	last=NULL;
	
}
void list::add(int n)
{
	link *temp;
	temp=new link;
	temp->data=n;
	temp->pre=NULL;
	temp->next=NULL;
	if(first==NULL)
	{
		first=temp;
		last=first;
		return;
	}
	else 
	{
	
		last->next=temp;
		temp->pre=last;	
	last=temp;
		return;
	}
}
void list::remove(int n)
{
	link *temp;
	temp=first;
	int i=0;
	if(first->data==n)
	{
		first=first->next;
		
	    cout<<n<<" has been deleted  "<<endl;
		return;
		
	}
	else 
	{
		while(temp!=NULL)
		{
		
			
			if(temp->data==n)
			{
			temp->next->pre=last;	
			last->next=temp->next;
			
			cout<<n<<" has been deleted "<<endl;
			return;	
				
			}
			else
			{ 
			i=1;
			}	last=temp;
			temp=temp->next;}
	
	}
		if(i==1)
		{
			cout<<n<<" Not found "<<endl;
		}
}
void list::show()
{
	link *temp;
	temp=last;
	cout<<" Data: ";
	while(temp!=NULL)
	{
		cout<<temp->data<<"   ";
		temp=temp->pre;
		
	}
	cout<<endl;
}
