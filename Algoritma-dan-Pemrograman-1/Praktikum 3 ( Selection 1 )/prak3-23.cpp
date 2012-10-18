#include<conio.h>
#include<iostream.h>

void main()
{
clrscr();
char huruf;
cout<<"masukkan huruf:";
cin>>huruf;

if (huruf=='a'||huruf=='e'||huruf=='i'||huruf=='o'||huruf=='u')
  cout<<"huruf vokal";
else
  cout<<"bukan huruf vokal";
getch();
}
