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
	void insert_first(int);
	void insert_last(int);
	void remove_first();
	void remove_last();
	void show();
		
};
int main()
{
	list l;
	l.insert_first(5);
	l.insert_first(6);
	l.insert_first(7);
	l.insert_first(8);
	l.insert_first(9);
	l.insert_first(10);
	l.show();
	l.insert_last(20);
    l.insert_last(19);
    l.insert_last(18);
    l.insert_last(17);
    l.insert_last(16);
    l.show();
    cout<<endl;
    l.remove_first();
    l.show();
    cout<<"\n";
    l.remove_last();
    l.show();
    return 0;
    
}
list::list()
{
	first=NULL;
	last=NULL;
}
void list::insert_first(int n)
{
	if(first==NULL)
	{
		first=new node;
		first->data=n;
		first->link=NULL;
		last=first;
		return;
		
	}
	node *ptr=new node;
	ptr->data=n;
	ptr->link=first;
	first=ptr;
	last->link=first;
	
}
void list::insert_last(int n)
{
if(first==NULL)
{
	first=new node;
	first->data=n;
	first->link=first;
	last=first;
	return;
	
}
node *ptr=new node;
last->link=ptr;
last=ptr;
last->data=n;

	
}
void list::remove_first()
{
	if(first==NULL)
	{
		cout<<"No value to display ";
		return;
	}
	if(first->link==first)
	{
		delete first;
		last=NULL;
		return;
	}
	node* ptr=first;
	first=first->link;
	last->link=first;
	delete ptr;
}
void list::remove_last()
{
	if(first==NULL)
	{
		cout<<"No value to display ";
		return;
	}
	if(first->link==first)
	{
		delete first;
		last=NULL;
		return;		
	}
	node *ptr=first;
	while(ptr->link!=last)
	{
		ptr=ptr->link
;
ptr->link=first;
delete last;
last=ptr;
	
}

}
void list::show()
{
	if(first==NULL)
	{
		cout<<"No value to dispaly";
		return;
		
	}
	node *ptr=first;
	while(ptr!=first)
	{cout<<ptr->data<<" ";
	ptr=ptr->link;
		
		
	}
}
