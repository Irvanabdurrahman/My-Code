#include <iostream.h>
#include<conio.h>

void main()
{
clrscr();
int x=1,y=1,p,i,a;
cout <<"_____________________________________________\n";
cout <<"\nProgram : Deret Fibonacci\n";
cout <<"Pembuat : Irvan Abdurrahman | 4510210003\n";
cout <<"Update  : 8 Maret 2011\n";
cout <<"_____________________________________________\n";
cout<<"\nMasukkan batas deret fibonacci : ";
cin>>a;
cout<<x<<" ";
cout<<y<<" ";
for(i=0;i<=a-3;i++)
	 {
	  p=x+y;
	  cout<<p<<" ";
	  x=y;
	  y=p;
	 }
cout <<endl;
cout <<"Total : "<<(p+x+y)-1;
getch();
}


