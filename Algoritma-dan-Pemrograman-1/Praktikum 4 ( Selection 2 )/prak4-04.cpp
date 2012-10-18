#include<conio.h>
#include<iostream.h>

void main()
{
clrscr();
char golongan;
cout << "masukkan golongan:";
cin >> golongan;
if(golongan=='a')
  cout << "Rp 3000";
else if(golongan=='b')
  cout << "Rp 3500";
else if(golongan=='c')
  cout << "Rp 4000";
else if (golongan=='d')
  cout <<"Rp 4500";
else
  cout << "salah memasukkan golongan";
getch();
}
