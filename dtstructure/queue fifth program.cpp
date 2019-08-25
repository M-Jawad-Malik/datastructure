#include<iostream>
using namespace std;
struct link
{
	int data;
	link *pre,*next;
};
class queue 
{
	link *first,*last;
	public:
		queue()
		{
			first=last=NULL;
		}
	bool isEmpty()
	{
		if(first==NULL)
		{
			return true;
		}
		else
		{return false;
		}
		}	
	void insert(int n)
	{
		link *temp=new link;
		temp->data=n;
		temp->next=temp->pre=NULL;
		if(isEmpty())
		{
			first=temp;
			last=first;
		}
		else
		{
			temp->pre=last;
			last->next=temp;
			last=temp;
		}
		}
	void remove()
	{
		first=first->next;
		first->pre=NULL;
		return;
			}
	void show()
	{
		link *temp=first;
		cout<<"\nData: ";
		while(temp!=NULL)
		{
			
			cout<<temp->data<<" ";
			temp=temp->next;
		}
					}};
int main()
{
		queue q;
		int array[10]={1,32,45,43,21,65,87,98,23,19};
		for(int i=0;i<10;i++)
		{
			q.insert(array[i]);
		}
		q.show();
		q.remove();
		q.remove();
		q.remove();
		q.show();
		return 0;
									}								

