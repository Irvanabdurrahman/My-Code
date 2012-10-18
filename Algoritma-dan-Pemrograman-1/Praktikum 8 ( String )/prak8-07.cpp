#include<conio.h>
#include<iostream.h>
#include<string.h>
#include<stdio.h>

void main()
{
int x;
char kata[4];
cout<<"masukkan kata adalah:";
gets(kata);
for(x=4;x>0;x--)
	{
	cout<<kata[x];
	}
cout<<kata[0];
getch();
}
