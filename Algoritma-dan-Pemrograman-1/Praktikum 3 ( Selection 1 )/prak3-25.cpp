#include <conio.h>
#include <iostream.h>

void main()
{
clrscr();
long total,total_akhir,lama_menginap,harga_kamar;
cout <<"lama_menginap:";
cin >>lama_menginap;
cout <<"harga_kamar:";
cin >>harga_kamar;
total=lama_menginap * harga_kamar;
if (total>700000)
	{
	total_akhir=total-(total*0.03);
	cout <<"total_akhir:"<<total;
	}
else
	{
	total_akhir=total-(total*0.02);
	cout <<"total_akhir:"<<total;
	}
getch();
}


