#include<iostream>
using namespace std;
struct link
{
	int data;
	link *next;
};
class list
{
	private:
		int count;
		link *first,*last;
	public:
	list();
	bool isEmpty();
	void insert(int);
	void remove(int);
	void modify(int,int);
	link* nth_node(int n);
	int nodeno();
	void show();	
};
list::list()
{
	first=NULL;
	last=NULL;
	count=0;
}
bool list::isEmpty()
{
	if(first==NULL)
	{
		return true;
	}
	else
	return false;
}
void list::insert(int v)
{
	link *temp=new link;
	temp->data=v;
	temp->next=NULL;
	if(isEmpty())
	{
		first=temp;
		last=first;
		count++;
	}
	else
	{
		last->next=temp;
		last=temp;
		count++;
	}

}
void list::remove(int v)
{
	int i=0;
	link *temp=first;
	if(first->data==v)
	{
		int i=0;
		first=first->next;
		cout<<v<<" has been deleted\n";
		count--;
		return;
	}
	else 
	{
		while(temp!=NULL)
		{
			if(temp->data==v)
			{
				last->next=temp->next;
				delete temp;
				count--;
				cout<<v<<"has been deleted \n";
				return;
				
			}
			else 
			{
				i=1;
			}
			last=temp;
			temp=temp->next;
			
		}
		
	}
	if(i==1)
	{
		cout<<v<<" does not exist in list\n";
	}
}
link* list::nth_node(int n)
{
	int c=0;
	link *node;
	
	link *temp=first;
	while(temp!=NULL)
	{
	c++;
	if(c==n)
	{
	node=temp;
	return node;	
	}
	temp=temp->next;
		}
	node->next=NULL;	
	count=c;

		
}
void list::modify(int nodeno,int n)
{
	int c=0;
	link *temp=first;
	while(temp!=NULL)
	{
		c++;
		if(c==nodeno)
		{
			
			temp->data=n;
		}
		
		last=temp;
		temp=temp->next;
		
	}
	
}
int list::nodeno()
{
	return count;
}
void list::show()
{
	link *temp=first;
	if(isEmpty())
	{
		cout<<"list is empty \n";
	}
	else 
	{
		cout<<" list : ";
		while(temp!=NULL)
		{
			cout<<temp->data<<" ";
			temp=temp->next;
		}
		
	cout<<endl;	
	}
}
int main()
{
	link *node;
	list l;
	int n;
	l.insert(13);
	l.insert(14);
	l.insert(17);
	l.insert(12);
	l.insert(10);
	l.insert(18);
	l.insert(32);
	l.show();
	cout<<"NO of Nodes = "<<l.nodeno()<<endl;
	l.remove(11);
	l.remove(13);
	l.remove(19);
	l.remove(10);
    l.show();	
    cout<<"NO of Nodes = "<<l.nodeno()<<endl;
	cout<<"Enter No of Node ";
	cin>>n;
	node=l.nth_node(n);
	cout<<n<<" th node has value =  "<<node->data<<endl;
	l.show();
	cout<<"Enter no of node to modify it : ";
	cin>>n;
	int value;
	cout<<"Enter value to add at "<<n<<" th node: ";
	cin>>value;
	l.modify(n,value);
	l.show();
}
