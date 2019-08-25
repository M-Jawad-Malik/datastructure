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
	list()
	{
		first=NULL;
		last=NULL;
		}
	void add(int number)
	{
		link *temp;
		temp = new link;
		temp->data=number;
		temp->next=NULL;
		if(first==NULL)
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
	void display()
	{
		link *temp=first;
		cout<<"List: ";
		while(temp!=NULL)
		{
			cout<<temp->data<<" ";
			temp=temp->next;
			
		}
					}
	void del(int num)
	{int i=0;
		link *temp=first;
if(first->data==num)
{
	first=first->next;
	cout<<num<<"has been deleted\n";
	return;
	}	
	else
	{
	
		while(temp!=NULL)
{
						
			if(temp->data==num)
			{
			
			last->next=temp->next;
			delete temp;	
		     cout<<num<<" Deleted "<<endl;
			return;}
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
	cout<<num<<" does not exist in list\n";
}}
};
int main()
{
	list l;
	l.add(12);
	l.add(31);
	l.add(90);
	l.add(321);
	l.add(34);
	l.display();
	l.del(31);
	l.del(34);
	l.display();
	return 0;
}
