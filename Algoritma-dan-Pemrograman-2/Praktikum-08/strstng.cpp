#include <conio.h>
#include <iostream.h>
#include <stdio.h>
#include <string.h>

void main()
{
clrscr();
int jumlah,a;
char cari[11];
cout <<"______________________________________________\n";
cout <<"\nProgram : Contoh Pencarian Struct string\n";
cout <<"Pembuat : Irvan Abdurrahman | 4510210003\n";
cout <<"Update  : 10 Mei 2011\n";
cout <<"______________________________________________\n";
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
 cout <<"_____________________________________\n";
 cout <<"\nMahasiswa ke- " <<a+1<<endl;
 cout <<"_____________________________________\n";
 cout <<"\nNIM  : ";
 cin >>UP[a].NIM;
 cout <<"Nama : ";
 gets(UP[a].Nama);
 cout <<"IPK  : ";
 cin >>UP[a].IPK;
 cout <<"_____________________________________\n";
 }

cout <<"\n Data Yang ingin ditampilkan berdasarkan NIM : ";
cin >>cari;
int hasil=0;
for (a=0;a<jumlah;a++)
 {
 if (strcmp(cari,UP[a].NIM)!=0)
	{
	hasil=0;
	}
	else
	{
	 hasil=1;
	 break;
	}
 }
if(hasil==0)
 {
 cout <<"Data Tidak Ditemukan" <<endl;
  }
  else
  {
  cout <<"\nData Ditemukan " <<endl;
  cout <<"_____________________________________\n";
  cout <<"\nMahasiswa ke - :"<<a+1<<endl;
  cout <<"_____________________________________\n";
  cout <<"\nNIM  : "<<UP[a].NIM<<endl;
  cout <<"Nama : "<<UP[a].Nama<<endl;
  cout <<"IPK  : "<<UP[a].IPK<<endl;
  cout <<"_____________________________________\n";
  }
getch();
}


