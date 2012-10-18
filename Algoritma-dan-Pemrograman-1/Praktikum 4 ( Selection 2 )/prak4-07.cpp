#include<conio.h>
#include<iostream.h>

void main()
{
clrscr();
long angka;
cout<<"masukkan angka:";
cin>>angka;
if (angka==0)
  cout<<"minggu";
else if(angka==1)
  cout<<"senin";
else if( angka==2)
  cout<<"selasa";
else if( angka==3)
  cout<<"rabu";
else if( angka==4)
  cout<<"kamis";
else if( angka==5)
  cout<<"jum'at";
else if(angka==6)
  cout<<"sabtu";
else
  cout<<"hari tidak valid";
getch();
}
