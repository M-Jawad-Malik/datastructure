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
			cout<<"Stack is full \n";
			
		}
		else 
		{
			arr[top++]=v;
		}
		
	}
	void pop()
	{
		if(top==-1)
		{
			cout<<"Stack is Full\n";
			
		}
		else
		{
		 	 arr[top--];
			
		}
	}
	void show()
	{
		int a=top;
		while(a!=-1)
		{
				a--;
			cout<<arr[a]<<"  ";
		
		}
		cout<<endl;
	}
};

int main()
{
	stack s;
	s.push(89);
	s.push(90);
	s.push(8);
	s.push(67);
	s.push(56);
	s.show();
	s.pop();
	s.pop();
	s.pop();
	s.push(200);
	s.push(300);
	s.show();
	return 0;
}
