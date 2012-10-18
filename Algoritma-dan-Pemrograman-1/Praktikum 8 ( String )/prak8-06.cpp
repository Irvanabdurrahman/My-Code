#include<conio.h>
#include<iostream.h>
#include<string.h>
#include<stdio.h>
#include<ctype.h>

void main()
{
clrscr();
char kata[20];
int x,jumlah=1;
cout<<"mencari panjang string"<<endl;
cout<<"masukkan kata :";
gets(kata);
for(x=0;kata[x];x++)
	{
	if(isalpha(kata[x])||isdigit(kata[x]))
		jumlah=jumlah+1;
	}
cout<<"panjang string adalah :";
cout<<jumlah-1;
getch();
}