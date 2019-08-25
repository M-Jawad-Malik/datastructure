#include<iostream>
using namespace std;
class stack
{
	private:
		int arr[5];
		int top;
	public:
	stack()
	{
		top=-1;
		
		}	
	void push(int v)
	{
		if(top==4)
		{
			cout<<" Stack is Full "<<endl;
			
		}
		else 
		{
			arr[top++]=v;
			cout<<" Data pushed successfully "<<endl;
		}
		}	
	void pop()
	{
		if(top==-1)
		{
			cout<<" Stack is Empty "<<endl;
			
		}
		else 
		{
			arr[top--];
			cout<<"Data pop out successfully\n";
		}
		}
	void show()
	{
		int s=top;
		while(s!=-1)
		{
			s--;
			cout<<arr[s]<<endl;
		
		}
			}		
};
int main()
{
	stack s;
	s.push(5);
	s.push(6);
	s.push(14);
	s.push(19);
	s.push(89);
	s.show();
	cout<<endl;
	s.pop();
	s.pop();
	s.pop();
	s.push(9);
	s.show();
	return 0;
}
