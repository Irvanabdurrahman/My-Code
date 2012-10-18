#include <conio.h>
#include <iostream.h>

void main()
{
clrscr();
int y;
cout <<"_____________________________________________\n";
cout <<"\nProgram : Bintang Descending\n";
cout <<"Pembuat : Irvan Abdurrahman | 4510210003\n";
cout <<"Update  : 8 Maret 2011\n";
cout <<"_____________________________________________\n";
cout <<"\nMasukkan Jumlah Descending :";
cin>>y;
for (int x=y;x>=1;x--)
  {
  for (int z=1;z<=x;z++)
	 {
	 cout <<" *";
	 }
  cout <<endl;
  }
getch();
}
