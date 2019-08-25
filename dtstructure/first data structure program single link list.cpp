
#include<iostream>
using namespace std;
struct link
{
	int data;
	link *next;
};
class list
{
	public:
	link *first,*ptr;
	public:
	list()
	{
		first=NULL;
		ptr=NULL;
		}	
	void add(int a)
	{
		link *temp;
		temp=new link;
		temp->data=a;
		temp->next=NULL;
		if(first==NULL)
		{
			first =temp;
			ptr=first;
			
		}
		else 
		{
			ptr->next=temp;
			ptr=temp;
			
		}
		}
		void del(int d)
		{
			link *temp=first;
			if(first->data==d)
			{
				first=first->next;
				cout<<d<<"Deleted from data\n";
				return;
			}
			else 
			{
			
			while(temp!=NULL)
			{
				if(temp->data==d)
				{
					ptr->next=temp->next;
					delete temp;
					cout<<d<<"Delted from data\n";
					return;
				}
				ptr=temp;
				temp=temp->next;
			}}
			cout<<d<<"Not found \n";
			
			}	
			void show()
			{
				link *temp=first;
				cout<<"list of data  ";
				


				while(temp!=NULL)
				{
		
					cout<<temp->data<<"  ";
				
				temp=temp->next;
				}
				cout<<endl;
				
				
			}
};

int main()
{
	list l;
	l.add(50);
	l.add(12);
	l.add(13);
    l.show();
    l.del(12);
    l.show();
	return 0;
}

