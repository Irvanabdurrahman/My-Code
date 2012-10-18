#include <conio.h>
#include <iostream.h>

void main()
{
clrscr();
float jumlah,nilai[10];
int i;
jumlah=0;
for (i=1;i<=10;i++)
	{
	cout <<"Masukkan bilangan prima [" << i << "]: ";
	cin >>nilai[i];
	jumlah = jumlah + nilai[i];
	}
	cout <<"Jumlah bilangan prima : "<<jumlah;
getch();
}



