/*Program mengubah huruf*/

#include <conio.h>
#include <iostream.h>
#include <ctype.h>
#include <stdio.h>

void main()
{
//deklarasi variabel
  char kata[20];

//deskripsi
	clrscr;
	cout << "Masukkan Kata Yang Diinginkan = "; gets (kata);
	cout << endl;
	for (int i=0; kata[i]; i++)
		  kata[i] = tolower (kata[i]);
		  cout << "Hasilnya adalah = "<< kata << endl;
		  cout << endl;
getch();
}