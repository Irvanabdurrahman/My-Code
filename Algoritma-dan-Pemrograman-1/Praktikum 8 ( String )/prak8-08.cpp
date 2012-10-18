#include <conio.h>
#include <iostream.h>
#include <stdio.h>

void main()
{
char nama [20];
clrscr;
cout <<"Masukkan karakter nama = "; gets (nama);
cout << endl;
cout <<"Hasil Karakter Pertama Yang Telah Diganti = ";
nama [0] ='K';
cout << nama;
cout << endl;

cout <<"Hasil Karakter Tiga Yang Telah Diganti = ";
nama [2] ='r';
cout << nama;
cout << endl;

cout <<"Hasil Karakter Empat Yang Telah Diganti = ";
nama [3] ='n';
cout << nama;
cout << endl;

cout <<"Hasil Karakter Lima Yang Telah Diganti = ";
nama [3] ='z';
cout << nama;
cout << endl;
getch();
}