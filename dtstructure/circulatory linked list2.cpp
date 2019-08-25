#include<iostream>
using namespace std;
struct link
{
	int data;
	link *next;
};
class list
{
	link *first,*last;
	public:
		list()
		{
			first=last=NULL;
		}
		void insert(int n)
		{
			link *node=new link;
			node->data=n;
			node->next=NULL;
			if(first==NULL)
			{
				first=node;
				last=first;
			}
			else
			{
			
				last->next=node;
				last=node;
				last->next=first;
			}
		}
		void remove(int n)
		{
			link *node=first;
			int i=0;
			if(first->data==n)
			{
				first=first->next;
				cout<<n<<" has been deleted \n";
				return;
			}
			else
			{
				while(node->next!=first)
				{
					if(node->data==n)
					{
						last->next=node->next;
						delete node;
						cout<<n<<" has been deleted\n";
						return;
					}
					else
					{
						i=1;
					}
					last=node;
					node=node->next;
				}
				if(node->next==first)
				{
					if(node->data==n)
					{
						last->next=node->next;
						delete node;
						cout<<n<<" has been deleted\n";
						return;
					}
					last=node;
					node=node->next;
				}
			}
			if(i==1)
			{
				cout<<n<<" does not present in list\n";
			}
		}
		void show()
		{
			link *node=first;
			while(node->next!=first)
			{
				cout<<node->data<<" ";
				node=node->next;
			}
			if(node->next==first)
			{
				cout<<" "<<node->data<<" ";
				node=node->next;
			}
		}
};
int main()
{
	list l;
	l.insert(5);
	l.insert(10);
	l.insert(12);
	l.insert(16);
	l.insert(19);
	l.show();
	l.remove(10);
	l.remove(19);
	l.show();
	l.insert(20);
	l.insert(21);
	l.show();
	return 0;
}
