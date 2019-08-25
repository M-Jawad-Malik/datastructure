#include<iostream>
#include<math.h> 
using namespace std;
struct link
{
	int data;
	link *pre,*next;};
class list
{
	private:
	link *first,*last;
	public:
	list();
	bool isEmpty();
	void add(int v);	
	void remove(int v);
	void traverseforward();
	void traversereverse();
	int Nodesforward();
	int NodesReverse();
	void nth_node(int n);
	int Sum();
	float Average();
	int Multiply();
	int Max();
	int Min();	};
																																																																																				
int main()
{
		list l;
	int choice;
	int data[10]={12,14,2,5,7,8,9,5,10,19};
	int data1[]={19,12,9,7};
	int n;
a:	cout<<"\n1.Add Data\n2.Remove Data\n3.Traverse Data Forward\n4.Traverse Data Reverse\n5.Finding Nth_Node\n6.Nodes of Linked List Forward\n7.Nodes of Linked List Revese\n8.Sum of Data\n9.Average of Data\n10.Multiplication of Data\n11.Max Of Data\n12.Min of Data\nEnter Chioce:\t";
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
	
	for(int i=0;i<4;i++)
	{
		l.remove(data1[i]);
	}
	goto a;
	break;
	case 3:
	l.traverseforward();
	goto a;
	break;
	case 4:
	l.traversereverse();
	goto a;
	break;	
	case 5:
	cout<<"\n Enter No of Node to Find it's data\t";
	cin>>n;
	l.nth_node(n);	
	goto a;
	break;
	case 6:
	cout<<"\nTotal Nodes in Linked list Forward: "<<l.Nodesforward()<<endl;
    goto a;
	break;
	case 7:
	cout<<"\nTotal Nodes in Linked list Reverse: "<<l.NodesReverse()<<endl;
	goto a;
	break;
	case 8:
	cout<<"\nSum Of Data Of Linked list : "<<l.Sum()<<endl;
	
	goto a;
	break;
	case 9:
   cout<<"\n Average of Data of Linked List: "<<l.Average()<<endl;
	goto a;
	break;
	case 10:
	cout<<"\nMultiplication of Data of Lnked List: "<<l.Multiply()<<endl;
	goto a;
	break;
	case 11:
	cout<<"\n Maximum of Data of Linked List: "<<l.Max()<<endl;
	goto a;
	break;	
	case 12:
	cout<<"\n Minimum of Data of Linked List: "<<l.Min()<<endl;
    goto a;
	break;
	default:
		cout<<"\nWronge Choice \n";
		goto a;
		break;
	}
	return 0;
		}
list::list()
{
	first=last=NULL;}
bool list::isEmpty()
{
	if(first==NULL)
	return true;
	else 
	return false;
	}	
void list::add(int v)
{
	link *temp=new link;
	temp->data=v;
	temp->next=temp->pre=NULL;
	if(isEmpty())
	{
		first=temp;
		last=first;
	}
	else
	{
		
		last->next=temp;
		temp->pre=last;
		last=temp;
	}
	}	
void list::remove(int v)
{
	int i=0;
	link *temp=first;
	if(first->data==v)
	{
		first=first->next;
		first->next->pre=first->pre;
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
				temp->next->pre=last;
				delete temp;
				cout<<v<<" has been deleted \n";
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
		cout<<"\n Data Does Not Exist\n";
	}
	}
void list::traverseforward()
{
	link *temp=first;
	cout<<"\t Doubly Linked List Forward Order: ";
	while(temp!=NULL)
	{
		cout<<temp->data<<" ";
		temp=temp->next;}}
void list::traversereverse()
{
	link *temp=last;
	cout<<"\t Doubly Linked List in Reverse Order : ";
	while(temp!=NULL)
	{
		cout<<temp->data<<" ";
		temp=temp->pre;}}
int list::Nodesforward()
{
	int count=0;
	link *temp=first;
	while(temp!=NULL)
	{
		count++;
		temp=temp->next;
	}
	return count;}
int list::NodesReverse()
{
	int count=0;
	link *temp=last;
	while(temp!=NULL)
	{
		count++;
		temp=temp->pre;}
		return count;
							}
void list::nth_node(int n)
{
	link *node;
	link *temp=first;
	int c=0;
	while(temp!=NULL)
	{
		c++;
		if(c==n)
		{
			node=temp;
		}
		temp=temp->next;
	}
	cout<<n<<"th node has value: "<<node->data<<"\n";
														}	
int list::Sum()
{
	int sum=0;
	link* temp=last;
	while(temp!=NULL)
	{
		sum=sum+temp->data;
		temp=temp->pre;
	}
	return sum;	}	
float list::Average()
{
	int avg=Sum()/Nodesforward();}
int list::Multiply()
{
	int mul=1;
	link *temp=last;
	while(temp!=NULL)
	{
		mul=mul*temp->data;
		temp=temp->pre;
		
	}return mul;}
int list::Max()
{
	int max=last->data;
	link *temp=last;
	while(temp!=NULL)
	{
		if(max<temp->data)
		{
			max=temp->data;
		}
		temp=temp->pre;
	}
	return max;
																												}
int list::Min()
{
	int min=first->data;
	link *temp=first;
	while(temp!=NULL)
	{
		if(min>temp->data)
		{
			min=temp->data;
		}
		temp=temp->next;
	}
	return min;}				
