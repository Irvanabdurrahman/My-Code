#include<conio.h>
#include<iostream.h>

void main()
{
clrscr();
int menu;
cout << "Masukkan menu:";
cin >> menu;
switch (menu)
{
  case 1 : cout <<"Nasi Goreng dengan harga Rp 5.000,-";
  break;
  case 2 : cout <<"Gado-gado dengan harga Rp 3.500,-";
  break;
  case 3 : cout <<"Bubur Ayam dengan harga Rp 2.500,-";
  break;
  case 4 : cout<<"Ayam Bakar Pedas dengan harga Rp 7.500,-";
  break;
default : cout<< "pilihan anda salah";
}
getch();
}
