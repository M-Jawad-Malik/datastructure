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
		link *first,*last;
	public:
	list();
	void insert(int);
	void remove(int);
	void show();
		
};
int main()
{
	list l;
	l.insert(12);
	l.insert(15);
	l.insert(16);
	l.insert(19);
	l.insert(114);
	l.show();
	l.remove(17);
	l.remove(187);
	l.remove(19);
	l.remove(15);
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
	link *temp;
	temp=new link;
	temp->data=n;
	temp->next=NULL;
	if(first==NULL)
	{
		last=temp;
		first=last;
	}
	else
	{
		last->next=temp;
		last=temp;
	}
	
	}	
void list::remove(int n)
{
	int i=0;
	link *temp=first;
	if(first->data==n)
	{
		first=first->next;
		cout<<n<<" has been delted \n";
		return;
		
	}
	else 
	{
		while(temp!=NULL)
		{
			if(temp->data==n)
			{
				last->next=temp->next;
				delete temp;
				cout<<n<<" has been deleted \n";
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
		cout<<"NO not found \n";
		
	}
	}	
void list::show()
{
	link *temp=first;
	cout<<" Data: ";
	while(temp!=NULL)
	{
		cout<<temp->data<<"  ";
		temp=temp->next;
	}
	cout<<endl<<endl;
	
	}	
