#include <conio.h>
#include <iostream.h>
#include <stdio.h>

int pangkat(int *x, int *y);
int main()
{
int pil,x,y;
clrscr();
cout << "_________________________________________________\n";
cout << "\nNama Program : Menghitung Pangkat by Address \n";
cout << "Pembuat      : Irvan Abdurrahman | 4510210003\n";
cout << "Update       : 23 Maret 2011 \n";
cout << "_________________________________________________\n";
do
{
cout << "\n==MENU PILIHAN== \n";
cout << "1. Input Angka \n";
cout << "2. Hitung Pangkat \n";
cout << "3. Keluar \n";
cout << "\nMasukkan Pilihan : ";
cin >> pil;
	switch(pil)
	{
	case 1: cout << "Masukkan angka yang ingin dipangkatkan  : ";
	cin >> x;
	cout << "Masukkan jumlah pangkat : ";
	cin >> y;
	break;
	case 2:
	cout << "Hasil perpangkatannya : " << pangkat (&x,&y) << endl;
	break;
	case 3:cout<<"Terima Kasih\n";
   break;
	}
}
while(pil<=2);
getch();
}

int pangkat(int *x, int *y)
{
 int hasil=1;
 for(int i=1; i<=*y; i++)
 {
 hasil=hasil* *x;
 }
return hasil;
}