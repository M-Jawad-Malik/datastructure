#include<iostream>
using namespace std;
class queue
{
	int s[5];
	int top,last;
	public:
		queue()
		{
			top=-1;
			last=-1;
		}
	void insert(int n)
	{
		if(top==4)
		{
			cout<<"\nQueue is Full\n";
		}
		else
		{
			s[top+=1]=n;
			return;
		}
		}	
	void remove()
	{
		if(top==-1)
		{
			cout<<"\nQueue is Empty\n";
		}
		else
		{
			s[last+=1]=NULL;
			return;
		}
	}
	void show()
	{
		if(top==-1)
		{
			cout<<"\nQueue is Empty\n";
		}
		else
		{
		
		cout<<"\Data : ";
		for(int i=0;i<5;i++)
		{
			cout<<s[i]<<" ";
		}
		cout<<endl;
	}
	}
};
int main()
{
	queue q;
	int a[5]={11,21,31,41,51};
	for(int i=0;i<5;i++)
	{
		q.insert(a[i]);
	}
	q.show();
	q.remove();
	q.remove();
	q.show();
	return 0;
}
