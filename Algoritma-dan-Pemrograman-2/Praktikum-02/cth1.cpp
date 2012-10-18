#include <conio.h>
#include <iostream.h>
#include <stdio.h>

void main()
{
int nilaiku=10, *point;
point=&nilaiku;
clrscr();
cout <<"______________________________________________\n";
cout <<"\nProgram  : Pointer\n";
cout <<"Pembuat  : Irvan Abdurrahman | 4510210003\n";
cout <<"Update   : 15 Maret 2011\n";
cout <<"______________________________________________\n";
cout <<"\nNilai dari Variabel nilaiku = "<<nilaiku;
cout <<"\nNilai variabel point = "<<*point;
cout <<"\nAlamatnya adalah = "<<point;
getch();
}

