# include <conio.h>
# include <iostream.h>

float rad (float sudut);

void main ()
{
clrscr ();
float sudut;
cout << "Besar sudut = ";
cin >> sudut;
cout << sudut << " Sudut derajat = " << rad (sudut)<< " Sudut radian " ;
getch();
}

float rad (float sudut)
{
float rad;
rad = (sudut * 3.14) / 180;
return rad ;
}


