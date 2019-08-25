#include<iostream>
using namespace std;
template <class type>
void min(type a[5])
{
	type mini;
	mini=a[0];
    for(int i=0;i<5;i++)
    {
    	if(mini>a[i])
    	{
    		mini=a[i];
		}
	}
	cout<<"minimum value = "<<mini<<endl;
}
int main()
{
	int a[5]={0,16,45,31,2};
	char b[5]={'F','D','d','f','G'};
	float c[5]={1.34,2.34,1.03,2.89,1.09};
	
	min(a);
	min(b);
	min(c);
	return 0;
	
}
