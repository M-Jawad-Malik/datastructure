#include<iostream> 
#include<math.h>         //Linked list Program
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
	bool isEmpty();
	void add(int v);
	void remove(int v);
	void traverse();
	void nth_node(int n);
	int  Nodes();
	int Sum();
	int Multiply();
	float Average();
	int Max();
	int Min();
};
int main()
{
	list l;
	int choice;
	int data[10]={12,14,2,5,7,8,9,5,10,19};
	int data1[6]={19,12,9,7,16,17};
	int n;
a:	cout<<"\n1.Add Data\n2.Remove Data\n3.Traverse Data\n4.Finding Nth_Node\n5.Nodes of Linked List\n6.Sum of Data\n7.Multiplication of Data\n8.Average of Data\n9.Max Of Data\n10.Min of Data\nEnter Chioce:\t";
	cin>>choice;
	switch(choice)
	{
	case 1:
	for(int i=0;i<10;i++)
	{
		l.add(data[i]);
	}
	goto a;
	break;
	case 2:
	
	for(int i=0;i<6;i++)
	{
		l.remove(data1[i]);
	}
	goto a;
	break;
	case 3:
	l.traverse();
	goto a;
	break;
	case 4:
	cout<<"\n Enter No of Node to Find it's data\t";
	cin>>n;
	l.nth_node(n);
	goto a;
	break;
	case 5:
	cout<<"\nTotal Nodes in Linked list : "<<l.Nodes()<<endl;
	goto a;
	break;
	case 6:
	cout<<"\nSum Of Data Of Linked list : "<<l.Sum()<<endl;
	goto a;
	break;
	case 7:
	cout<<"\nMultiplication of Data of Lnked List: "<<l.Multiply()<<endl;
	goto a;
	break;
	case 8:
	cout<<"\n Average of Data of Linked List: "<<l.Average()<<endl;
	goto a;
	break;
	case 9:
	cout<<"\n Maximum of Data of Linked List: "<<l.Max()<<endl;
	goto a;
	break;
	case 10:
	cout<<"\n Minimum of Data of Linked List: "<<l.Min()<<endl;
	goto a;
	break;
	default:
		cout<<"\nWronge Choice \n";
		goto a;
		break;
	}return 0;
	
}
list::list()
{
	first=last=NULL;
}
bool list::isEmpty()
{
	if(first==NULL)
	{
	return true;	
	}
	else
	{
		return false;
	}
}
void list::add(int v)
{
  link *temp=new link;
  temp->data=v;
  temp->next=NULL;
  if(isEmpty())
  {
  	first=temp;
  	last=first;
  }
  else
  {
  	last->next=temp;
  	last=temp;}}
void list::remove(int v)
{
	link *temp=first;
	if(isEmpty())
	{
		cout<<"\n List is Empty\n";
		return;
	}
	else
	{
		if(first->data==v)
		{
			first=first->next;
			cout<<v<<" has been deleted\n";
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
					cout<<v<<" has been deleted \n";
					return;
				}
				last=temp;
				temp=temp->next;
			}
				}		
	}
	  }  
void list::traverse()
{
	link *temp=first;
	if(isEmpty())
	{
		cout<<"\n List is Empty\n";
		return;
	}
	while(temp!=NULL)
	{
		cout<<temp->data<<"  ";
		temp=temp->next;}}
int list::Nodes()
{
	int count=0;
	link *temp=first;
	while(temp!=NULL)
	{
		count++;
		temp=temp->next;
	}
	return count;}
void list::nth_node(int n)
{
	int c=0;
	link *node;
	link *temp=first;
	while(temp!=NULL)
	{
		c++;
		if(c==n)
		{
			node=temp;
		}
		temp=temp->next;
				 }		
	cout<<"\n"<<n<<" th node's Data is : "<<node->data<<"\n";}
int list::Sum()
{
	link *temp=first;
	int sum=0;
	while(temp!=NULL)
	{
		sum=sum+temp->data;
		temp=temp->next;
	}
	return sum; }
int list::Multiply()
{
	int mul=1;
	
	link *temp=first;
	while(temp!=NULL)
	{
		mul=mul*temp->data;
		temp=temp->next;
	}
	return mul;}						 
float list::Average()
{
	float avg;
	avg=Sum()/Nodes();
	return avg;
		   } 	
int list::Max()
{
	int max=first->data;
	link *temp=first;
	while(temp!=NULL)
	{
		if(max<temp->data)
		{
			max=temp->data;
		}
		temp=temp->next;
	
	}
		return max;}
int list::Min()
{
	int min=first->data;
	link* temp=first;
	while(temp!=NULL)
	{
		if(min>temp->data)
		{
			min=temp->data;
		}
		temp=temp->next;
		
	}
	return min;
					 }			     	
