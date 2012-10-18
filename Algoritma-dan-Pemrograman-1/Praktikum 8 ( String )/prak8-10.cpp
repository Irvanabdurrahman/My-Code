#include <conio.h>
#include <iostream.h>
void main()
{
clrscr();
int nilai[10];
char huruf[6];
nilai[0] = 48;
nilai[1] = 49;
nilai[2] = 50;
nilai[3] = 51;
nilai[4] = 52;
nilai[5] = 53;
nilai[6] = 54;
nilai[7] = 55;
nilai[8] = 56;
nilai[9] = 57;
{
for (int i= 0; i < 10; i++)
  {
  cout <<i << " = "<<  nilai[i] << endl;
  }
cout << endl;
}
huruf[65]='A';
huruf[66]='B';
huruf[67]='C';
huruf[68]='D';
huruf[69]='E';
huruf[70]='F';
{
for (int j=65; j<71; j++)
  {
  cout <<huruf[j]<< " = "<<  j << endl;
  }
}
getch();
}