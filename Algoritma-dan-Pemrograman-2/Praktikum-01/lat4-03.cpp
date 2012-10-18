#include <conio.h>
#include <iostream.h>

void main()
{
clrscr();
int sisi;
{
cout <<"_____________________________________________\n";
cout <<"\nProgram : Membuat Bintang Persegi\n";
cout <<"Pembuat : Irvan Abdurrahman | 4510210003\n";
cout <<"Update  : 8 Maret 2011\n";
cout <<"_____________________________________________\n";
cout <<"\nMasukkan Banyak Sisi :";
cin>>sisi;
}
for (int a=1;a<=sisi;a++)
 {
 for (int b=1;b<=sisi;b++)
	{
	if (a==1||b==1||a==sisi||b==sisi)
	  {
	  cout <<" *";
	  }
	  else
	  {
	  cout <<"  ";
	  }
	}
 cout <<endl;
  }
getch();
}
