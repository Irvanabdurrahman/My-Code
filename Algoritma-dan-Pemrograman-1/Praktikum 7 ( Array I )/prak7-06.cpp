#include<conio.h>
#include<iostream.h>
void main()
{
clrscr();
int y, min, x;
int bil[100];
cout<<"masukkan panjang array (max 100):";
cin>>y;
for(x=0;x<y;x++)
  {
  cout<<"nilai ke"<<x+1<<" :";
  cin>> bil[x];
  }
min=bil[0];
for(x=1;x<y;x++)
  {
  if(min>bil[x])
	 min=bil[x];
  }
cout<<"nilai terkecil adalah :"<<min;
getch();

}