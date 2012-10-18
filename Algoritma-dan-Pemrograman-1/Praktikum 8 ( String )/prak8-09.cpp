#include <conio.h>
#include <iostream.h>
#include <string.h>

void main()
{
clrscr();
char biner[4];
int i, j, k,  desimal = 0, pangkat = 1, angka;
cout << "Masukkan 4 digit bilangan biner: ";
cin >> biner;
strrev(biner);
for (i = 0; i < 4; i++)
  {
  if (i == 0)
	  {
		pangkat = 1;
	  }
  else
	  {
		for (j = 0; j < i; j++)
		  {
			pangkat = pangkat * 2;
		  }
	  }
//  cout << "Pangkat: " << pangkat << endl;
  if (biner[i] == '0')
	 {
	 angka = 0;
	 }
  else
	 {
	 angka = 1;
	 }
//	 cout << "Angka: " << angka << endl;
  desimal = desimal + angka * pangkat;
//  cout << "Desimal: " << desimal << endl;
  pangkat = 1;
  }
cout << "Nilai desimal: " << desimal;
getch();
}