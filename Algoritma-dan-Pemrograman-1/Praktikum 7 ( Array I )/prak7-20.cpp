#include <conio.h>
#include <iostream.h>
#include <stdio.h>

void main()
{
clrscr();
int a [2][5];
int b [2][5];
int i,j;
char nama[20];
float rata,jumlah,x,y;
cout <<"Masukkan nama Mahasiswa : " ;gets (nama);
for (i = 1; i<2; i++)
{
	 for (j=1; j<5;j++)
	 {
	 cout << "Nilai [" << i << "][" << j << "]: ";
	 cin >>a[i][j];
	 jumlah = jumlah + a[i][j];
	 }
}
	 cout << "Jumlah : " << jumlah << endl;
	 rata = jumlah /4;
	 cout << "Rata-rata: " << rata;
	 cout <<endl;
    cout <<"======================================================"<<endl;

cout <<"Masukkan nama mata kuliah : " ;gets (nama);
for (i = 1; i<2; i++)
{
	 for (j=1; j<=5;j++)
	 {
	 cout << "Nilai [" << i << "][" << j << "]: ";
	 cin >>b[i][j];
	 x = x + b[i][j];
	 }
}
	 cout << "Jumlah : " << x << endl;
	 y = x /5;
	 cout << "Rata-rata: " << y;
getch();
}
