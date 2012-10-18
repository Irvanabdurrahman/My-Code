#include <conio.h>
#include <iostream.h>

void main ()
{
clrscr () ;
long Quantity,Harga,belanja;
cout << "Masukkan Quantity:";
cin >> Quantity;
cout << " Masukkan Harga:";
cin >> Harga;
belanja=Quantity * Harga;
if  (belanja < 100000)
	cout <<"tidak dapat diskon";
else
	cout <<"mendapatkan diskon";
getch();
}
