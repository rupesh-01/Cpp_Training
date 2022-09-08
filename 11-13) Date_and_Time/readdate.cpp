#include<iostream>
#include<stdio.h>
#include<stdlib.h>
using namespace std;

void setDateTime(int date, int month, int year,int hour, int min, int sec)
{
	unsigned char buff[32]={0};
	//formatting command with the given parameters
	sprintf((char*)buff,(const char *)"date -s \"%02d/%02d/%04d %02d:%02d:%02d\"",month,date,year,hour,min,sec);
	//execute formatted command using system()
	system((const char *)buff);
}

int main()
{
	setDateTime(30,6 , 2020,10, 10,10);
	cout<<endl;
	return 0;
}
