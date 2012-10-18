#include <conio.h>
#include <iostream.h>
#include <stdio.h>

void main()
{
clrscr();
int matriks[3][2];
int a[3][2];
int b[3][2];
int c[3][2];
int j,k;

//input matriks A
for(j=0; j<3; j++)
{
	for (k=0; k<2; k++)
	{
		cout<<"A["<<j<<"]["<<k<<"]=";
		cin>>a[j][k];
	}
}
cout<<endl;

//input ,atriks B
for (j=0; j<3; j++)
{
	for (k=0; k<2; k++)
	{
		cout<<"B["<<j<<"]["<<k<<"]=";
		cin>>b[j][k];
	}
}
cout<<endl;

//penjumlahan
for (j=0; j<3; j++)
{
	for (k=0; k<2; k++)
	{
		c[j][k]=a[j][k]+b[j][k];
	}
}

//cetak
for (j=0; j<3; j++)
{
	for (k=0; k<2; k++)
	{
		cout<<"C["<<j<<"]["<<k<<"]="<<c[j][k]<<endl;
	}
}
getch();
}
