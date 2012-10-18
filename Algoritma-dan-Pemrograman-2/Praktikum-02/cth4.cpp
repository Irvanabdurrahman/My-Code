#include <conio.h>
#include <iostream.h>
#include <stdio.h>

int main()
{
clrscr();
char *kalimat;
cout <<"_____________________________________________\n";
cout <<"\nProgram  : Contoh Pointer String\n";
cout <<"Pembuat  : Irvan Abdurrahman | 4510210003\n";
cout <<"Update   : 15 Maret 2011\n";
cout <<"_____________________________________________\n";
kalimat="Pointer mudah digunakan.\n";
cout <<"\nIsi variabel kalimat : ";
cout <<kalimat;
cout <<"\n dengan alamat variabel kalimat : ";
cout <<&kalimat;
return 0;
}

