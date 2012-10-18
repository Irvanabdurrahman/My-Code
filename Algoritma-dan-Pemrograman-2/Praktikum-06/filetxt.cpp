#include<conio.h>
#include<iostream.h>
#include <fstream.h>

float penjumlahan(float *a, float *b);
float pengurangan(float *a, float *b);
float perkalian(float *a, float *b);
float pembagian(float *a, float *b);
void main()
{
ofstream file_keluaran;
file_keluaran.open("FILE.TXT");
int menu;
float x, y, hasil;
cout<<"_________________________________________________\n";
cout<<"\nProgram		:Operator by adress\n";
cout<<"Pembuat		:Irvan Abdurrahman | 4510210003\n";
cout<<"Update		:12 April 2011\n";
cout<<"_________________________________________________\n";
cout<<"\nMasukkan angka ke-1 = ";
cin>>x;
cout<<"Masukkan angka ke-2 = ";
cin>>y;

//Openfile
file_keluaran<<"_________________________________________________\n";
file_keluaran<<"\nProgram		:Operator by adress\n";
file_keluaran<<"Pembuat		:Irvan Abdurrahman | 4510210003\n";
file_keluaran<<"Update		:12 April 2011\n";
file_keluaran<<"_________________________________________________\n";
file_keluaran<<"\nMasukkan angka ke-1 = ";
file_keluaran<<x;
file_keluaran<<"\nMasukkan angka ke-2 = ";
file_keluaran<<y;

do
{
cout<<"\n=Operator=\n";
cout<<"1.Penjumlahan\n";
cout<<"2.Pengurangan\n";
cout<<"3.Perkalian\n";
cout<<"4.Pembagian\n";
cout<<"5.Keluar\n";
cout<<"Masukkan pilihan anda : ";
cin>>menu;

//openfile
file_keluaran<<endl;
file_keluaran<<"\n=Operator=\n";
file_keluaran<<"1.Penjumlahan\n";
file_keluaran<<"2.Pengurangan\n";
file_keluaran<<"3.Perkalian\n";
file_keluaran<<"4.Pembagian\n";
file_keluaran<<"5.Keluar\n";
file_keluaran<<"Masukkan pilihan anda : ";
file_keluaran<<menu;
switch(menu)
	{
	case 1:cout<<"Hasil Penjumlahan = "<<penjumlahan(&x,&y)<<endl;
			 file_keluaran<<"\nHasil Penjumlahan = "<<penjumlahan(&x,&y)<<endl;
	break;
	case 2:cout<<"Hasil Pengurangan = "<<pengurangan(&x, &y)<<endl;
			 file_keluaran<<"\nHasil Pengurangan = "<<pengurangan(&x, &y)<<endl;
	break;
	case 3:cout<<"Hasil perkalian = "<<perkalian(&x, &y)<<endl;
			 file_keluaran<<"\nHasil perkalian = "<<perkalian(&x, &y)<<endl;
	break;
	case 4:cout<<"Hasil pembagian = "<<pembagian(&x, &y)<<endl;
			 file_keluaran<<"\nHasil pembagian = "<<pembagian(&x, &y)<<endl;
	break;
	case 5:cout<<"Terima Kasih"<<endl;
			 file_keluaran<<"\nTerima Kasih"<<endl;
	break;
	default:cout<<"Menu Tidak Terdaftar"<<endl;
	file_keluaran<<"Menu Tidak Terdaftar"<<endl;
	}
}
while(menu!=5);
getch();
file_keluaran.close();
}

float penjumlahan (float*a, float *b)
{
return (*a + *b);
}

float pengurangan (float*a, float *b)
{
return (*a - *b);
}

float perkalian (float*a, float *b)
{
return(*a * (*b));
}

float pembagian (float*a, float *b)
{
return(*a/(*b));
}
