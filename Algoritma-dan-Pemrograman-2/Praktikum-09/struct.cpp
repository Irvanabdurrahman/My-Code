#include <conio.h>
#include <iostream.h>
#include <stdio.h>
#include <string.h>

void main()
{
clrscr();
char jawab;
int menu;
int jumlah,a;
char cari[11];
cout <<"_________________________________________________\n";
cout <<"\nProgram : Pencarian Struct string\n";
cout <<"Pembuat : Irvan Abdurrahman | 4510210003\n";
cout <<"Update  : 24 Mei 2011\n";
cout <<"_________________________________________________\n";
struct mahasiswa
 {
 char NIM[11];
 char Nama[20];
 float IPK;
 };

do
{
cout <<"\n==MENU PILIHAN==\n";
cout <<"1.Input Data\n";
cout <<"2.Pencarian Data\n";
cout <<"3.Keluar\n";
cout <<"Masukkan Pilihan Anda : ";
cin>>menu;
switch(menu)
 {
 case 1:struct mahasiswa UP[50];
		  cout <<"Masukkan Jumlah Mahasiswa : ";
		  cin >>jumlah;
		  for (a=0;a<jumlah;a++)
		  {
		  cout <<"______________________________________\n";
		  cout <<"\nMahasiswa ke- " <<a+1<<endl;
		  cout <<"______________________________________\n";
		  cout <<"\nNIM = ";
		  cin >>UP[a].NIM;
		  cout <<"Nama = ";
		  gets(UP[a].Nama);
		  cout <<"IPK = ";
		  cin >>UP[a].IPK;
		  cout <<"______________________________________\n";
		  }
 break;
 case 2:
		  {
			cout <<"\n Masukkan NIM yang ingin dicari : ";
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
				cout <<"Data Tidak Ditemukan " <<endl;
				}
			  else
				{
				cout <<"\nData Ditemukan " <<endl;
				cout <<"___________________________________________\n";
				cout <<"\nMahasiswa ke - :"<<a+1<<endl;
				cout <<"____________________________________________\n";
				cout <<"\nNIM  : "<<UP[a].NIM<<endl;
				cout <<"Nama : "<<UP[a].Nama<<endl;
				cout <<"IPK  : "<<UP[a].IPK<<endl;
				cout <<"____________________________________________\n";
				}
		  }

 break;
 case 3: cout <<" Terima Kasih\n";
 cout <<"\nApakah Anda Mau Proses Lagi [Y/N] ? : ";
 cin >>jawab;
 break;
 }
}while(menu!=3||jawab=='Y');
getch();
}
