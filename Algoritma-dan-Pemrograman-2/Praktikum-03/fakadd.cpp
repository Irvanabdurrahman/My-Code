#include <conio.h>
#include <iostream.h>
#include <stdio.h>

int faktorial(int *x);
void main()
{
clrscr();
int angka,x;
cout << "_____________________________________________________\n";
cout << "\nNama Program : Menghitung faktorial by Address \n";
cout << "Pembuat      : Irvan Abdurrahman | 4510210003\n";
cout << "Update       : 22 Maret 2011 \n";
cout << "_____________________________________________________\n";
do
{
cout << "\n==MENU PILIHAN== \n";
cout << "1. Input Nilai \n";
cout << "2. Menghitung Faktorial \n";
cout << "3. Keluar \n";
cout << "\nMasukkan pilihan : ";
cin >> angka;
	switch(angka)
	{
	case 1: cout << "Input Nilai : ";
	cin >> x;
	break;
	case 2:
	cout << "Hasil faktorial : ";
	cout << faktorial(&x) << endl;
	break;
	case 3:cout <<"Terima Kasih\n";
	break;
	}
}
while(angka!=3);
getch();
}

int faktorial(int *x)
{
int jml=1;
for(int i=1; i<=*x; i++)
	{
	if(i==*x)
		{
		cout << i << " = ";
		}
	else
		{
		cout << i << " * ";
		}
jml = jml * i;
	}
return jml;
}