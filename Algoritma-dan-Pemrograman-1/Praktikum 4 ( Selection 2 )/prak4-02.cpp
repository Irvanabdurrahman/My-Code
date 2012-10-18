#include<conio.h>
#include<iostream.h>

void main()
{
clrscr();
char huruf;
cout << "masukkan kode bonus:";
cin >> huruf;
if(huruf=='a')
  cout << "Bonus A mendapat 5%";
else if(huruf=='b')
  cout << "Bonus B mendapat 7%";
else if(huruf=='c')
  cout << "Bonus C mendapat 10%";
else
  cout << "anda kurang beruntung";
getch();
}