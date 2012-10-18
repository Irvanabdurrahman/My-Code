#include <conio.h>
#include <iostream.h>
#include <math.h>

void main()
{
clrscr();
int i;
float jml;
for (i=1;i<=11;i++)
  {
  jml=sqrt(i*i);
  cout << "Pangkat dari " << i << " adalah " << (i*i) << " akar " << jml << endl;
  }
getch();
}

