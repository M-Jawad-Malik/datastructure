#include<iostream>
#include "Complex.h"
using namespace std;
int main()
{
	Complex obj1(3,4),obj2,obj3,obj4,obj5;
	obj2.set(5,6);
	obj2.get();
	obj3=obj1+obj2;
	obj4=obj1*obj2;
	cin>>obj5;
	cout<<obj1<<endl<<obj2<<endl<<obj3<<endl<<obj4<<endl<<obj5<<endl;
	return 0;
}
