#include <conio.h>
#include <iostream.h>
#include <stdio.h>

int main()
{
int *penunjuk, angka;
clrscr();
cout <<"_____________________________________________\n";
cout <<"\nProgram  : Pointer dengan operator\n";
cout <<"Pembuat  : Irvan Abdurrahman | 4510210003\n";
cout <<"Update   : 15 Maret 2011\n";
cout <<"_____________________________________________\n";
penunjuk = &angka;
*penunjuk = 10;
cout <<"\nAngka awal : ";
cout <<angka;
cout <<"\nditambah dengan 1 hasilnya ";
(*penunjuk)++;
cout <<angka <<" ";
cout <<"\ndikalikan dengan 2 hasilnya ";
(*penunjuk) = (*penunjuk)* 2;
cout <<angka  <<"\n";
getch();
return 0;
}

