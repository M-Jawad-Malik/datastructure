#include<iostream>
#include<conio.h>
#include<time.h>

int main()
{


	time_t now=time(0);   // current system date/time

	char* dt = ctime(&now);   // convert in string form

	std::cout<<"Local date and time is:-\n\t\t"<<dt<<"\n";

	tm *gmtm = gmtime(&now);   // converting now to tm struct for UTC date/time
	dt = asctime(gmtm);
	std::cout<<"UTC date and time is:-\n\t\t"<<dt;

	getch();
}
