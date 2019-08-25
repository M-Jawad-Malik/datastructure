#include<iostream>
using namespace std;
class stack
{
	private:
	int a[5];
	int top;
	public:
	stack()
	{
		top=-1;
		}	
	void push(int n)
	{
		if(top>=5)
		{
			cout<<"\nstack is full\n";
		}
		else
		{
			a[top+=1]=n;
			cout<<"\nData Pushed Successfully\n";
			
		}
		}	
	void pop()
	{
		if(top==-1)
		{
			cout<<"\nstack is empty\n";
		}
		else
		{
			
			a[top--]=NULL;
			cout<<"\nData Pop out Successfully\n";
			return;
		}
		}	
	void show()
	{
		cout<<"\Data: ";
		for(int i=0;i<5;i++)
{
	cout<<a[i]<<" ";
		}	
		cout<<endl;	}	
};
int main()
{
	stack s;
	s.push(5);
	s.push(6);
	s.push(8);
	s.push(9);
	s.push(13);
	s.show();
	s.pop();
	s.pop();
	s.pop();
	s.show();
	return 0;
}
