#include<conio.h>
#include<iostream.h>
void main()

{
double k,i,j,n=1;
for(k=1;k<=2;k++)
  {
  for (i=1;i<=4;i++)
  n=n*2+1;
	 {
	 for (j=1;j<=6;j++)
	 n=n*2+1;
	 }
  }
cout<<n;
getch();
}