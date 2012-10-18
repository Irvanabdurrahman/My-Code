#include <conio.h>
#include <iostream.h>
#include <stdio.h>

int main()
{
int a, nilai[20], *penunjuknilai;
double angka[20], *penunjukangka;
clrscr();
cout <<"_____________________________________________\n";
cout <<"\nProgram  : Pointer Aritmatika \n";
cout <<"Pembuat  : Irvan Abdurrahman | 4510210003\n";
cout <<"Update   : 15 Maret 2011\n";
cout <<"_____________________________________________\n";
penunjuknilai=nilai;
penunjukangka=angka;
cout <<"\nPenunjuknilai  penunjukangka\n";
  for (a=0;a<10;a++)
cout <<penunjuknilai+a<<"      "<<penunjukangka+a<<"\n";
return 0;
}

