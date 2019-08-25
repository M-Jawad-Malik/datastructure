#include<iostream>
using namespace std;
struct queue
{
		int arr[5];
		int count,last,first;};
	bool isFull(queue *q)
	{
		if(q->count>4)
		{
			return true;
		}
		else 
		return false;
		
			}		
	bool isEmpty(queue *q)
	{
		if(q->count<=0)
		{
			return true;
		}
		else 
		return false;
			}		
			
	void insert(queue *q,int v)
	{
		if(isFull(q))
		{
			cout<<"Queue is Full \n";
			
		}else 
		{
			if(q->last>4)
			{
				q->last=-1;
			}
			else
			{
			q->arr[q->last++]=v;
			q->count++;}
			
		}
		
		
		}	
	void remove(queue *q)
	{
		if(isEmpty(q))
		{
			cout<<"Queue is Empty \n";
			
		}
		else 
		{
			q->arr[q->first++]=NULL;
			q->count--;
		}
		
		}	
	void show(queue *q)
	{
		int s=q->first;
		while(s!=q->last-1)
		{s++;
			cout<<q->arr[s]<<"  ";
		}
		cout<<endl;
		
		}	
int main()
{
	queue q;
	q.count=0;
	q.first=-1;
	q.last=0;
	insert(&q,5);
	insert(&q,13);
	insert(&q,15);
	insert(&q,90);
	insert(&q,45);
	show(&q);
	cout<<q.arr[0];

	return 0;
}
