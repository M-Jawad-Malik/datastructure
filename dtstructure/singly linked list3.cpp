#include<iostream>
using namespace std;
struct link
{
	int data;
	link* next;
};
class list
{
	private:
		link *first,*last;
	public:
	list();
	void add(int);
	void remove(int);
	void show();	
};

int main()
{
	system("color 80");
list l;
l.add(132);
l.add(142);
l.add(90);
l.add(32);
l.add(89);
l.show();
l.remove(31);
l.remove(90);
l.remove(32);
l.show();
return 0;
	
}
list::list()
{
	first=NULL;
	last=NULL;
	
}
void list::add(int no)
{
	link *temp;
	temp=new link;
	temp->data=no;
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
void list::remove(int no)
{
	link *temp;
	temp=first;
	int i=0;
	if(first->data==no)
	{
		first=first->next;
		cout<<"     "<<no<<" has beeen deleted "<<endl;
		return;
	}
	else
	while(temp!=NULL)
	{
		if(temp->data==no)
		{
			last->next=temp->next;
			delete temp;
			cout<<"     "<<no<<" has been deleted "<<endl;
			return;
		}
		else 
		{
			i=1;
		}
		last=temp;
		temp=temp->next;
	}
	if(i==1)
	{
		cout<<no<<"  NO not found "<<endl;
	}
	
}
void list::show()
{
	link *temp;
	temp=first;
	cout<<"     Data : ";
	while(temp!=NULL)
	{
		cout<<temp->data<<"    ";
		temp=temp->next;
	}
	cout<<endl;
}
