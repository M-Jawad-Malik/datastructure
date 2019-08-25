#include<iostream>
#include"tree.h"
int main()
{
	tree t;
	int data[15]={32,16,34,1,87,13,7,18,14,19,23,24,41,5,53};
	for(int i=0;i<15;i++)
	{
		t.add(data[i]);
		
	}
	t.transverse(); 
	t.del(23);
	t.del(24);
	t.transverse();
	t.transverse();
	return 0;
	}	

