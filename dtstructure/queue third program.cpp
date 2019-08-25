#include<iostream>
using namespace std;
struct link
{
	int data;
	link *next,*pre;
};
class queue
{
	private:
		link *first,*last;
	public:
	queue()
	{
		first=NULL;
		last=NULL;
		
		}
	void insert(int v)
	{
		 link *temp=new link;
		 temp->data=v;
		 temp->next=NULL;
		 temp->pre=NULL;
		if(first==NULL)
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
		
		
			}	
	void show()
	{
		link *temp=last;
		while(temp!=NULL)
		{
			cout<<temp->data<<"  ";
			temp=temp->pre;
			
		}
			cout<<endl;
				}			
 }; 
int main()
{
	queue q;
	q.	insert(15);
	q.insert(17);
	q.insert(18);
	q.insert(19);
	q.insert(20);
	q.insert(21);
	q.insert(22);
	q.insert(23);
	q.show();
	q.remove();
	q.show();
	q.remove();
	q.show();
	q.insert(15);
	q.insert(17);
	q.show();
	return 0;
}
