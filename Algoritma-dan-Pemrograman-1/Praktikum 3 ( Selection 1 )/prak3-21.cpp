#include<conio.h>
#include<iostream.h>

void main()
{
clrscr();
int umur;
cout<<"masukkan umur:";
cin>>umur;
if (umur<20||umur>30)
  cout<<"tidak dipanggil";
else
  cout<<"dipanggil";
getch();
}