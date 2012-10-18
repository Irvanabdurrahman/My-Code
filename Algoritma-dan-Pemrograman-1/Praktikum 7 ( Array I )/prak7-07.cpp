#include<conio.h>
#include<iostream.h>
void main()

{
clrscr();
int x, y, maks;
int bil[100];
cout<<"maukkan panjang array (max 100):";
cin>>y;
for(x=0;x<y;x++)
	{
	 cout<<"bilangan ke"<<x+1<<" adalah :";
	 cin>>bil[x];
	}
maks=bil[0];
for(x=1;x<y;x++)
	{
	 if(maks<bil[x])
	 maks=bil[x];
	}
cout<<"bilangan terbesar adalah:"<<maks;
getch();
}

