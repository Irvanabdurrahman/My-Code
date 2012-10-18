#include <conio.h>
#include <iostream.h>

void main()
{
clrscr();
int y;
cout <<"_____________________________________________\n";
cout <<"\nProgram : Bintang Ascending\n";
cout <<"Pembuat : Irvan Abdurrahman | 4510210003\n";
cout <<"Update  : 8 Maret 2011\n";
cout <<"_____________________________________________\n";
cout <<"\nMasukkan Jumlah Ascending : ";
cin>>y;
for (int x=1;x<=y;x++)
  {
  for (int z=1;z<=x;z++)
	 {
	 cout <<" *";
	 }
  cout <<endl;
  }
getch();
}
