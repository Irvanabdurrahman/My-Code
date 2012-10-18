#include <conio.h>
#include <iostream.h>

float luas (float r);
float keliling (float r);

void main()
{
clrscr();
float r;
cout << " Masukkan nilai jari-jari = ";
cin >> r;
cout << " Luas lingkaran : "<< luas (r)<<endl;
cout << " Keliling lingkaran : "<< keliling (r);
getch();
}

float luas (float r)
{
float luas;
luas = 3.14*r*r;
return luas;
}

float keliling (float r)
{
float keliling;
keliling = 2*3.14*r;
return keliling;
}


