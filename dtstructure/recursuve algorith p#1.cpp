#include<iostream>
using namespace std;
int n_th_odd(int n)
{
	int a=1;
	while(a<=n)
	{
	
	a=n_th_odd(a-1)+2;
}
return a;
}
int n_th_even(int n)
{
	int a=1;
	while(a<=n)
	{
		a=n_th_even(a)+2;
	}
}
int main()
{
	int n;
	cout<<"Enter number to check odd number : ";
	cin>>n;
	cout<<
	n_th_odd(n);
	return 0;
}
