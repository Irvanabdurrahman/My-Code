#include <conio.h>
#include <iostream.h>
#include <stdio.h>

int main()
{
clrscr();
char a[3][5]={"ABCDE","FGHIJ","KLMNO"};
char *p;
p=&a[0][0];
cout <<"_____________________________________________\n";
cout <<"\nProgram  : Pointer pada Array 2 Dimensi\n";
cout <<"Pembuat  : Irvan Abdurrahman | 4510210003\n";
cout <<"Update   : 15 Maret 2011\n";
cout <<"_____________________________________________\n";
cout <<"\n";
for (int i=1;i<=3;i++)
 {
 for (int j=1;j<=5;j++)
 {
  cout <<"Nilai a["<<i<<"]["<<j<<"] adalah : "<<*p<<"\n";
  p++;
 }
 cout <<"\n";
 }
 getch();
return 0;
}

