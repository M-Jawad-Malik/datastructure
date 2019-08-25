#include<iostream>
using namespace std;
const int size=10;
class queue 
{
	private:
	
		int arr[size];
			int first,last,count;
	public:
	queue()
	{
		first=0;
		last=-1;
		count=0;
		}	
	void insert(int v)
	{
		if(last>=size)
		{
			cout<<"Queue is Full \n";
			return;
		}
		if(last>size)
		{
			last=-1;
		}
		arr[last++]=v;
		}	
	int remove()
	{
	if(last<=-1)
	{
		cout<<"Queue is Empty\n";
		}
		
	arr[last++];
	cout<<"Deleted Successfully\n";
	
		}
	void show()
	{
		for(int i=-1;i<9;i++)
		{
			cout<<arr[i]<<"  ";
		}
		cout<<endl;
			}		
};
int main()
{
	queue q;
	q.insert(20);
	q.insert(10);
	q.insert(30);
     q.insert(40);
	q.insert(50);
	q.insert(60);
	q.insert(70);
	q.insert(80);
	q.insert(90);
	q.insert(100);
	q.insert(110);
	q.remove();
	q.remove();

	q.show();
	
	return 0;
}
