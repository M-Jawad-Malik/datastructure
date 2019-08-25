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
		first=NULL;
		last=NULL;
		
		}
	void push(int v)
	{
		link *temp;
		temp=new link;
		temp->data=v;
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
	void pop()
	{
		link *temp=first;
		if(first==NULL)
		{
			cout<<"Stack is Empty n";
			
		}
		else 
		{
			while(temp!=NULL)
			{
				if(temp->next==last)
				{
					last=temp;
					temp->next=NULL;
				return;	
				}
				temp=temp->next;
				
			}
		}
					}	
		void show()
		{
			link *temp=first;
			while(temp!=NULL)
			{
				cout<<temp->data<<"  ";
				temp=temp->next;
			}
								}						
};
int main()
{
		stack s;
	s.push(5);
	s.push(20);
	s.push(14);
	s.push(19);
	s.push(89);
	s.push(14);
	s.show();
	s.pop();
	s.pop();
	s.pop();
	s.pop();
	cout<<endl;
	s.show();
	
	return 0;
}



