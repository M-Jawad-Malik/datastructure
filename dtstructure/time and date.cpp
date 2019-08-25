#include<iostream>
#include<time.h>
using namespace std;
int main()
{
	time_t now=time(0);
	char *t=ctime(&now);
	cout<<t<<"\n";
	tm *gmtm=gmtime(&now);
	t=asctime(gmtm);
	cout<<t<<"\n";
}
