#include <conio.h>
#include <iostream.h>
#include <math.h>

void main()
{
clrscr();
const float phi=3.14;
float luas,r;
cout << "Menghitung luas lapangan:" << endl;
cout << endl;
cout << "nilai r:";
cin >> r;
luas = phi*r*r;
cout << "Nilai luas: " << luas;
getch();
}
