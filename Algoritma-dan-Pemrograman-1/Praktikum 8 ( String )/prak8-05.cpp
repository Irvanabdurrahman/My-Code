#include<conio.h>
#include<iostream.h>
#include<ctype.h>
#include<string.h>
#include<stdio.h>

void main()
{
clrscr();
int x;
char kata[20];
char salin[20];
cout<<"masukkan kata : ";
gets(kata);
for(x=0;kata[x];x++)
	{
	if(isspace(kata[x])||ispunct(kata[x]))
		cout<<endl;
	else
		cout<<kata[x];
	}
getch();
}
