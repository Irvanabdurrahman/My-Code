#include<conio.h>
#include<iostream.h>

void main()
{
clrscr();
int angka, y;
cout<<"masukkan angka:"<<endl;
cin>>angka;
y=angka*10+100;
if (angka> 5)
	cout<<"Y="<<y<<endl;
else
	cout<<"y=0";
getch();
}