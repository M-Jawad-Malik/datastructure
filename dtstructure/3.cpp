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
	{first=last=NULL;}
	void add(int v)
	{
		link *temp=new link;
		temp->data=v;
		temp->next=NULL;
		if(first==NULL)
		{
			first=temp;
			last=first;}
		else
		{
			last->next=temp;
			last=temp;}}	
	void remove(int v)
	{
		int i=0;
		link *temp=first;
		if(first->data==v)
		{
			first=first->next;
			cout<<v<<" has beeen deleted\n";
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
					cout<<v<<"has been deleted\n";
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
			cout<<v<<" Does not exist in list\n";
		}
			}
	void traverse()
	{
		link *temp=first;
		cout<<"\nData : ";
		while(temp!=NULL)
		{   cout<<temp->data<<" ";
			temp=temp->next;}}
	void reverse()
	{
		link *temp=first;
		link *pre,*n;
		while(temp!=NULL)
		{
			n=temp->next;
			temp->next=pre;
			pre=temp;
			temp=n;
			}	
			first=pre;
							
}};
int main()
{
	list l;
	int a[10]={1,2,3,4,5,6,7,8,9,10};
	int b[5]={10,8,5,3,11};
	for(int i=0;i<10;i++)
	{
		l.add(a[i]);
	}
	l.traverse();
	l.reverse();
	for(int i=0;i<5;i++)
	{
		l.remove(b[i]);
	}
	l.traverse();
	return 0;
}


