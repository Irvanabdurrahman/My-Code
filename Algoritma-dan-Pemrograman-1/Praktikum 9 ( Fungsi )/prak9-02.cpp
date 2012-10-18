#include <conio.h>
#include <iostream.h>

int bilangan (int x, int y);

void main()
{
clrscr();
int x;
int y;
cout << "Masukkan nilai N1: ";
cin >> x;
cout << "Masukkan nilai N2: ";
cin >> y;
if ( x>y )
  cout << x << " lebih besar dari " << y;
else
  cout << y << " lebih besar dari " << x;
getch();
}

int bilangan (int x, int y)
{
if ( x>y )
  return 0;
else
  return 1;
}
