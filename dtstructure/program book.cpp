#include<iostream>
using namespace std;
class daytype
{
	private:
	string	day;
	public:
	daytype();	
	void setday(string);
	string printday();
	string returnday();
	string returnnext();
	string returnprevious();
	void calday(int);
	
		
};
int main()
{
	daytype d;
	d.setday("Friday");
	cout<<"today is : ";
	cout<<d.printday();
	cout<<endl;
	cout<<"Tommorow is : ";
	cout<<d.returnnext();
	cout<<endl;
	cout<<"yesterday was : ";
	cout<<d.returnprevious();
	cout<<endl;
	int n;
	cout<<"Enter no days : ";
	cin>>n;
	d.calday(n);
	
	return 0;
	
	
}
daytype::daytype()
{
	day="Monday";
}
void daytype::setday(string n)
{
	day=n;
	
}
string daytype::printday()
{
	return day;
}
string daytype::returnday()
{
	return day;
}
string daytype::returnnext()
{
    if(day=="Monday")
    {
    	return "Tuesday";
	}
	else if(day=="Tuesday")
	{
		return "Wednesday";
	}
	else if(day=="Wednesday")
	{
		return "Thursday";
	}
	else if(day=="Thursday")
	{
		return "Friday";
	}
	else if(day=="Friday")
	{
		return "Saturday";
	}
	else if(day=="Saturday")
	{
		return "Sunday";
	}
	else if(day=="Sunday")
	{
		return "Monday";
	}
}
string daytype::returnprevious()
{
    if(day=="Monday")
    {
    	return "Sunday";
	}
	else if(day=="Tuesday")
	{
		return "Monday";
	}
	else if(day=="Wednesday")
	{
		return "Tuesday";
	}
	else if(day=="Thursday")
	{
		return "Wednesday";
	}
	else if(day=="Friday")
	{
		return "Thursday";
	}
	else if(day=="Saturday")
	{
		return "Friday";
	}
	else if(day=="Sunday")
	{
		return "Saturday";
	}
}
void daytype::calday(int n)
{
	if(day=="Monday")
	{
		
		for(int i=1;i<1000;i=i+7)
		{
			if(i==n)
			{
				cout<<"Day after "<<i<<"Days will be: Tuesday";
			}
		}
		for(int i=2;i<1000;i=i+7)
		{
			if(i==n)
			{
				cout<<"Day after "<<i<<"Days will be: Wednesday";
			}
		}
		for(int i=3;i<1000;i=i+7)
		{
			if(i==n)
			{
				cout<<"Day after "<<i<<"Days will be: Thursday";
			}
		}
		for(int i=4;i<1000;i=i+7)
		{
			if(i==n)
			{
				cout<<"Day after "<<i<<"Days will be: Friday";
			}
		}
		for(int i=5;i<1000;i=i+7)
		{
			if(i==n)
			{
				cout<<"Day after "<<i<<"Days will be: Saturday";
			}
		}
			for(int i=6;i<1000;i=i+7)
		{
			if(i==n)
			{
				cout<<"Day after "<<i<<"Days will be: Sunday";
			}
		}
			for(int i=8;i<1000;i=i+7)
		{
			if(i==n)
			{
				cout<<"Day after "<<i<<"Days will be: Monday";
			}
		}
		
	}
else if(day=="Tuesday")
	{
		
		for(int i=7;i<1000;i=i+7)
		{
			if(i==n)
			{
				cout<<"Day after "<<i<<"Days will be: Tuesday";
			}
		}
		for(int i=1;i<1000;i=i+7)
		{
			if(i==n)
			{
				cout<<"Day after "<<i<<"Days will be: Wednesday";
			}
		}
		for(int i=2;i<1000;i=i+7)
		{
			if(i==n)
			{
				cout<<"Day after "<<i<<"Days will be: Thursday";
			}
		}
		for(int i=3;i<1000;i=i+7)
		{
			if(i==n)
			{
				cout<<"Day after "<<i<<"Days will be: Friday";
			}
		}
		for(int i=4;i<1000;i=i+7)
		{
			if(i==n)
			{
				cout<<"Day after "<<i<<"Days will be: Saturday";
			}
		}
			for(int i=5;i<1000;i=i+7)
		{
			if(i==n)
			{
				cout<<"Day after "<<i<<"Days will be: Sunday";
			}
		}
			for(int i=6;i<1000;i=i+7)
		{
			if(i==n)
			{
				cout<<"Day after "<<i<<"Days will be: Monday";
			}
		}
		
	}
else	if(day=="Wednesday")
	{
		
		for(int i=6;i<1000;i=i+7)
		{
			if(i==n)
			{
				cout<<"Day after "<<i<<"Days will be: Tuesday";
			}
		}
		for(int i=7;i<1000;i=i+7)
		{
			if(i==n)
			{
				cout<<"Day after "<<i<<"Days will be: Wednesday";
			}
		}
		for(int i=1;i<1000;i=i+7)
		{
			if(i==n)
			{
				cout<<"Day after "<<i<<"Days will be: Thursday";
			}
		}
		for(int i=2;i<1000;i=i+7)
		{
			if(i==n)
			{
				cout<<"Day after "<<i<<"Days will be: Friday";
			}
		}
		for(int i=3;i<1000;i=i+7)
		{
			if(i==n)
			{
				cout<<"Day after "<<i<<"Days will be: Saturday";
			}
		}
			for(int i=4;i<1000;i=i+7)
		{
			if(i==n)
			{
				cout<<"Day after "<<i<<"Days will be: Sunday";
			}
		}
			for(int i=5;i<1000;i=i+7)
		{
			if(i==n)
			{
				cout<<"Day after "<<i<<"Days will be: Monday";
			}
		}
		
	}
else	if(day=="Thursday")
	{
		
		for(int i=5;i<1000;i=i+7)
		{
			if(i==n)
			{
				cout<<"Day after "<<i<<"Days will be: Tuesday";
			}
		}
		for(int i=6;i<1000;i=i+7)
		{
			if(i==n)
			{
				cout<<"Day after "<<i<<"Days will be: Wednesday";
			}
		}
		for(int i=7;i<1000;i=i+7)
		{
			if(i==n)
			{
			
				cout<<"Day after "<<i<<"Days will be: Thursday";
			}
		}
		for(int i=1;i<1000;i=i+7)
		{
			if(i==n)
			{
				cout<<"Day after "<<i<<"Days will be: Friday";
			}
		}
		for(int i=2;i<1000;i=i+7)
		{
			if(i==n)
			{
				cout<<"Day after "<<i<<"Days will be: Saturday";
			}
		}
			for(int i=3;i<1000;i=i+7)
		{
			if(i==n)
			{
				cout<<"Day after "<<i<<"Days will be: Sunday";
			}
		}
			for(int i=4;i<1000;i=i+7)
		{
			if(i==n)
			{
				cout<<"Day after "<<i<<"Days will be: Monday";
			}
		}
		
	}
else	if(day=="Friday")
	{
		
		for(int i=4;i<1000;i=i+7)
		{
			if(i==n)
			{
				cout<<"Day after "<<i<<"Days will be: Tuesday";
			}
		}
		for(int i=5;i<1000;i=i+7)
		{
			if(i==n)
			{
				cout<<"Day after "<<i<<"Days will be: Wednesday";
			}
		}
		for(int i=6;i<1000;i=i+7)
		{
			if(i==n)
			{
				cout<<"Day after "<<i<<"Days will be: Thursday";
			}
		}
		for(int i=7;i<1000;i=i+7)
		{
			if(i==n)
			{
				cout<<"Day after "<<i<<"Days will be: Friday";
			}
		}
		for(int i=1;i<1000;i=i+7)
		{
			if(i==n)
			{
				cout<<"Day after "<<i<<"Days will be: Saturday";
			}
		}
			for(int i=2;i<1000;i=i+7)
		{
			if(i==n)
			{
				cout<<"Day after "<<i<<"Days will be: Sunday";
			}
		}
			for(int i=3;i<1000;i=i+7)
		{
			if(i==n)
			{
				cout<<"Day after "<<i<<"Days will be: Monday";
			}
		}
		
	}
else	if(day=="Saturday")
	{
		
		for(int i=3;i<1000;i=i+7)
		{
			if(i==n)
			{
				cout<<"Day after "<<i<<"Days will be: Tuesday";
			}
		}
		for(int i=4;i<1000;i=i+7)
		{
			if(i==n)
			{
				cout<<"Day after "<<i<<"Days will be: Wednesday";
			}
		}
		for(int i=5;i<1000;i=i+7)
		{
			if(i==n)
			{
				cout<<"Day after "<<i<<"Days will be: Thursday";
			}
		}
		for(int i=6;i<1000;i=i+7)
		{
			if(i==n)
			{
				cout<<"Day after "<<i<<"Days will be: Friday";
			}
		}
		for(int i=7;i<1000;i=i+7)
		{
			if(i==n)
			{
				cout<<"Day after "<<i<<"Days will be: Saturday";
			}
		}
			for(int i=1;i<1000;i=i+7)
		{
			if(i==n)
			{
				cout<<"Day after "<<i<<"Days will be: Sunday";
			}
		}
			for(int i=2;i<1000;i=i+7)
		{
			if(i==n)
			{
				cout<<"Day after "<<i<<"Days will be: Monday";
			}
		}
		
	}
else	if(day=="Sunday")
	{
		
		for(int i=2;i<1000;i=i+7)
		{
			if(i==n)
			{
				cout<<"Day after "<<i<<"Days will be: Tuesday";
			}
		}
		for(int i=3;i<1000;i=i+7)
		{
			if(i==n)
			{
				cout<<"Day after "<<i<<"Days will be: Wednesday";
			}
		}
		for(int i=4;i<1000;i=i+7)
		{
			if(i==n)
			{
				cout<<"Day after "<<i<<"Days will be: Thursday";
			}
		}
		for(int i=5;i<1000;i=i+7)
		{
			if(i==n)
			{
				cout<<"Day after "<<i<<"Days will be: Friday";
			}
		}
		for(int i=6;i<1000;i=i+7)
		{
			if(i==n)
			{
				cout<<"Day after "<<i<<"Days will be: Saturday";
			}
		}
			for(int i=7;i<1000;i=i+7)
		{
			if(i==n)
			{
				cout<<"Day after "<<i<<"Days will be: Sunday";
			}
		}
			for(int i=1;i<1000;i=i+7)
		{
			if(i==n)
			{
				cout<<"Day after "<<i<<"Days will be: Monday";
			}
		}
		
	}
}
