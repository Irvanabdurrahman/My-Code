#include <conio.h>
#include <iostream.h>

void main()
{
clrscr();
float a;
cout <<"_____________________________________________\n";
cout <<"\nProgram : Menghitung Nilai Mata Kuliah\n";
cout <<"Pembuat : Irvan Abdurrahman | 4510210003\n";
cout <<"Update  : 8 Maret 2011\n";
cout <<"_____________________________________________\n";
cout <<endl;
cout <<"Masukkan Nilai :";
cin>>a;
if (a>=80&&a<=100)
  {
  cout <<"A";
  }
  else
  if (a>=76&&a<=79.99)
  {
  cout <<"A-";
  }
  else
  if (a>=72&&a<=75.99)
  {
  cout <<"B+";
  }
  else
  if (a>=68&&a<=71.99)
  {
  cout <<"B";
  }
  else
  if (a>=64&&a<=67.99)
  {
  cout <<"B-";
  }
  else
  cout <<"E";
getch();
}
