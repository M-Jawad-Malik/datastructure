#include<iostream>
using namespace std;
struct node
{
	int data;
	node *link;
};
class list
{
	private:
	node *first,*last;
	public:
	list();
	void insert(int);
	void remove(int);
	void show();
		
};
int main()
{
	list l;
	l.insert(5);
	l.insert(6);
	l.insert(7);
	l.insert(8);
	l.insert(9);
	l.insert(10);
	l.insert(20);
    l.insert(19);
    l.insert(18);
    l.insert(17);
    l.insert(16);
    l.insert(13);
    l.show();
    l.remove(5);
    l.remove(20);
    l.remove(7);
    l.remove(18);
    l.show();
    return 0;
    
}
list::list()
{
	first=NULL;
	last=NULL;
}
void list::insert(int n)
{
	node *temp=new node;
	temp->data=n;
	temp->link=NULL;
	
	if(first==NULL)
	{
		first=temp;
		last=first;
	}
	else 
	{
		last->link=temp;
		last=temp;
		last->link=first;
	}
	
}
void list::remove(int n)
{
	node *temp=first;
	if(first->data==n)
	{
		first=first->link;
		cout<<n<<" has been deleted "<<endl;
		return;
	}
	while(temp->link!=first)
	{
		if(temp->data==n)
		{
			last->link=temp->link;
			delete temp;
			cout<<n<<" has been deleted "<<endl;
			return;
		}
		last=temp;
		temp=temp->link;
	}
	
}
void list::show()
{
	node *temp=first;
	while(temp->link!=first)
	{
		temp=temp->link;
		cout<<temp->data<<" ";
		
	}
	cout<<endl;
}
