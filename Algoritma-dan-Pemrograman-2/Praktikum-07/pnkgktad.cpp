#include <iostream.h>
#include <conio.h>
#include <math.h>
#include <stdio.h>
#include <fstream.h>

int pangkat (int *a, int *b);
void main()
{
clrscr();
ofstream file_keluaran;
file_keluaran.open ("PANGKATAD.TXT");
int pil,a,b;
cout <<"_______________________________________________\n";
cout <<"\nPembuat : Irvan Abdurrahman | 4510210003\n";
cout <<"Program : Perpangkatan By Address\n";
cout <<"Update  : 19 April 2011\n";
cout <<"_______________________________________________\n";

//open file
file_keluaran<<"_______________________________________________\n";
file_keluaran<<"\nPembuat : Irvan Abdurrahman | 4510210003  \n";
file_keluaran<<"Program : Perpangkatan By Address\n";
file_keluaran<<"Update  : 19 April 2011\n";
file_keluaran<<"_______________________________________________\n";
do
{
cout <<"\n==MENU PILIHAN==\n";
cout <<"1.Input Angka\n";
cout <<"2.Hitung pangkat\n";
cout <<"3.Exit\n";
cout <<"Masukkan Pilihan Anda : ";
cin >>pil;

//open file
file_keluaran<<"\n==MENU PILIHAN==\n";
file_keluaran<<"1.Input Angka\n";
file_keluaran<<"2.Hitung pangkat\n";
file_keluaran<<"3.Exit\n";
file_keluaran<<"Masukkan Pilihan Anda : ";
file_keluaran<<pil<<endl;
switch (pil)
 {
 case 1:cout <<"Masukkan Angka : ";
		  file_keluaran<<"Masukkan Angka : ";
		  cin >>a;
		  file_keluaran<<a<<endl;
		  cout <<"Masukkan Nilai Pangkat : ";
		  file_keluaran<<"Masukkan Nilai Pangkat : ";
		  cin >>b;
		  file_keluaran<<b<<endl;
 break;
 case 2:cout <<"Hasilnya Adalah : "<<pangkat (&a,&b)<<endl;
		  file_keluaran<<"Hasilnya Adalah : "<<pangkat (&a,&b)<<endl;
 break;
 case 3:cout <<"Exit\n";
		  cout <<"Terima Kasih";
 break;
 default :cout <<"Anda Salah Memasukkan Nilai\n";
 break;
 }
}while (pil!=3);
file_keluaran.close();
getch();
}

int pangkat (int *a, int *b)
{
return (pow(*a,*b));
}
