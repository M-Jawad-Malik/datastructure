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
	void insert(int);
	void remove(int);
	void show();
	bool isEmpty();
	int Nodes();
	void  n_thnode(int);
		
};
void  list::n_thnode(int n)
	{
		
	 link *temp=first;
	 link* node;
		int c=0;
	 while(temp!=NULL)
	 {
	 	c++;
	 	if(c==n)
	 	{
	 		node=temp;
		 }
		 temp=temp->next;
	
	 }
	 cout<<n<<"th node is "<<node->data<<endl;
	}
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
	}
	else
	{
		last->next=temp;
		last=temp;
	}
	
	
}
void list::remove(int v)
{
	link *temp=first;
	int i=0;
	if(first->data==v)
	{
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
				cout<<v<<" has been deleted\n";
					count--;
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
void list::show()
{
	int n=0;
	link* temp=first;
	cout<<" list : ";
	while(temp!=NULL)
	{
		cout<<temp->data<<"  ";
		temp=temp->next;
		n++;
	}
	count=n;
	cout<<endl<<endl;
}
int list::Nodes()
{
	return count;
}
int main()
{
	int n;
	list l;
	l.insert(13);
	l.insert(14);
	l.insert(17);
	l.insert(12);
	l.insert(10);
	l.insert(18);
	l.insert(32);
	l.show();
	cout<<"NO of Nodes = "<<l.Nodes()<<endl;
	l.remove(11);
	l.remove(13);
	l.remove(19);
	l.remove(10);
l.show();	
cout<<"NO of Nodes = "<<l.Nodes()<<endl;
	cout<<"Enter No of Node ";
	cin>>n;
	l.n_thnode(n);
	
	return 0;
	
}

