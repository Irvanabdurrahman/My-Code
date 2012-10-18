#include<conio.h>
#include<iostream.h>
void main()

{
clrscr();
int belanja, quantity, harga;
cout<<"masukkan quantity:"<<endl;
cin>>quantity;
cout<< "masukkan harga:"<<endl;
cin>>harga;
belanja=quantity*harga;
if (belanja<100000)
	cout<<"tidak dapat diskon";
getch();
}