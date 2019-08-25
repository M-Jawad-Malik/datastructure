#include<iostream>
#include"list.h"
using namespace std;
int main()
{
	list l;
	l.add(1231);
	l.add(1511);
	l.add(1911);
	l.add(5898);
	l.add(3241);
	l.show();
	l.remove(1511);
	l.show();
	l.remove(3241);
	l.show();
	return 0;
	
}
