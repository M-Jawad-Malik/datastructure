#include<iostream>
using namespace std;
struct link
{
	int data;
	link *next;
};
class stack
{
	private:
		link *first,*last;
	public:
	stack()
	{
		first=last=NULL;
			}		
	void push(int n)
	{
		link *temp=new link;
		temp->data=n;
		temp->next=NULL;
		if(first==NULL)
		{
			first=temp;
			last=first;
			cout<<"Data pushed successfully\n";
		}
		else
		{
			last->next=temp;
			last=temp;
			cout<<"Data Pushed successfully\n";
		}
			}
	void pop()
	{
		link *temp=first;
		while(temp!=NULL)
		{
			if(temp->next==last)
			{
			last=temp;
			cout<<"\n";
			cout<<temp->next->data<<"has been deleted\n";
			last->next=NULL;
			delete temp->next;	
			}
			else if(last==first)
			{
				cout<<"\n"<<last->data<<" has been deleted \n";
				delete last;
				first=NULL;
				return;
			}
			temp=temp->next;
			
		}
					}
	void show()
	{
		link *temp=first;
	
		if(temp==NULL)
		{
			cout<<"\nStack is Empty\n";
		}
		else
		{
			cout<<"Data : ";
		while(temp!=NULL)
		{
			
			cout<<temp->data<<" ";
			temp=temp->next;
		}
		}							}								
};
int main()
{
	stack s;
	int a[5]={1,2,3,4,5};
	int b[5]={101,109,108,105,104};
	for(int i=0;i<5;i++)
	{
		s.push(a[i]);
	}
	s.show();
	s.pop();
	s.pop();
	s.pop();
	s.pop();
	s.pop();
	s.pop();
	s.show();
	for(int i=0;i<5;i++)
	{
		s.push(b[i]);
	}
	s.show();
	s.pop();
	s.show();
	return 0;
}

