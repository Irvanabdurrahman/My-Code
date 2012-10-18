#include <conio.h>
#include <iostream.h>
#include <stdio.h>

void main()
{
clrscr();
int jumlah,a;
cout <<"_____________________________________________\n";
cout <<"\nProgram : Struct\n";
cout <<"Pembuat : Irvan Abdurrahman | 4510210003\n";
cout <<"Update  : 10 Mei 2011\n";
cout <<"_____________________________________________\n";
struct mahasiswa
 {
 char NIM[11];
 char Nama[20];
 float IPK;
 };
struct mahasiswa UP[50];
cout <<"\nMasukkan Jumlah Mahasiswa : ";
cin >>jumlah;
for (a=0;a<jumlah;a++)
 {
 cout <<"____________________________________\n";
 cout <<"\nMahasiswa ke- " <<a+1<<endl;
 cout <<"____________________________________\n";
 cout <<"\nNIM  : ";
 cin >>UP[a].NIM;
 cout <<"Nama : ";
 gets(UP[a].Nama);
 cout <<"IPK  : ";
 cin >>UP[a].IPK;
 cout <<"____________________________________\n";
 }

 cout <<"\nData Yang Anda Masukkan : "<<jumlah<<endl;
 for (a=0;a<jumlah;a++)
 {
 cout <<"____________________________________\n";
 cout <<"\nMahasiswa ke - "<<a+1<<endl;
 cout <<"____________________________________\n";
 cout <<"\nNIM  : "<<UP[a].NIM<<endl;
 cout <<"Nama : "<<UP[a].Nama<<endl;
 cout <<"IPK  : "<<UP[a].IPK<<endl;
 cout <<"____________________________________\n";
 }
getch();
}


