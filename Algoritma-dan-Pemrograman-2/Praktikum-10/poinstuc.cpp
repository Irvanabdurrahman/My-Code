#include <conio.h>
#include <iostream.h>
#include <stdio.h>

void main()
{
clrscr();
cout <<"______________________________________\n";
cout <<"\nProgram : Pointer to Struct\n";
cout <<"Pembuat : Irvan Abdurrahman | 4510210003\n";
cout <<"Update  : 31 Mei 2011\n";
cout <<"______________________________________\n";
struct mahasiswa
 {
 char NIM[11];
 char Nama[50];
 float IPK;
 };
struct mahasiswa UP, *pointerUP;
pointerUP=&UP;
 cout <<"\nNIM  : ";
 cin >>pointerUP->NIM;
 cout <<"Nama : ";
 gets(pointerUP->Nama);
 cout <<"IPK  : ";
 cin >>pointerUP->IPK;
 cout <<"\nData Anda adalah : \n";
 cout <<"_____________________________________\n";
 cout <<"\nNIM  : "<<pointerUP->NIM<<endl;
 cout <<"Nama : "<<pointerUP->Nama<<endl;
 cout <<"IPK  : "<<pointerUP->IPK<<endl;
 cout <<"_____________________________________\n";
getch();
}


