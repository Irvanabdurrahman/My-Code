#include <conio.h>
#include <iostream.h>
void main()
{
clrscr();
char huruf[26];
int i;
for (i=1; i<= 26; i++)
  {
   cout << i << " : ";
   cin >> huruf[i];
  }
getch();
}



