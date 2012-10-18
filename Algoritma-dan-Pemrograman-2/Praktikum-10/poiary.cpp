#include <conio.h>
#include <iostream.h>
#include <stdio.h>

void main()
{
clrscr();
int jumlah,a;
cout <<"____________________________________________________\n";
cout <<"\nProgram : Pengulangan Pointer to Struct\n";
cout <<"Pembuat : Irvan Abdurrahman | 4510210003\n";
cout <<"Update  : 31 Mei 2011\n";
cout <<"_____________________________________________________\n";
struct mahasiswa
 {
 char NIM[11];
 char Nama[20];
 float IPK;
 };
struct mahasiswa UP[20], *pointerUP;
pointerUP=&UP[20];
cout <<"\nMasukkan Jumlah Mahasiswa : ";
cin >>jumlah;
for(a=0;a<jumlah;a++)
 {
 cout <<"____________________________________\n";
 cout <<"\nMahasiswa ke- "<<a+1<<endl;
 cout <<"____________________________________\n";
 cout <<"\nNIM  : ";
 cin >>pointerUP->NIM;
 cout <<"Nama : ";
 gets(pointerUP->Nama);
 cout <<"IPK  : ";
 cin >>pointerUP->IPK;
 cout <<"____________________________________\n";
 }
cout <<"\nData Anda adalah : "<<jumlah<<endl;
for (a=0;a<jumlah;a++)
 {
 cout <<"_____________________________________\n";
 cout <<"\nMahasiswa ke- "<<a+1<<endl;
 cout <<"_____________________________________\n";
 cout <<"\nNIM  : "<<pointerUP->NIM<<endl;
 cout <<"Nama : "<<pointerUP->Nama<<endl;
 cout <<"IPK  : "<<pointerUP->IPK<<endl;
 cout <<"_____________________________________\n";
 }
getch();
}

