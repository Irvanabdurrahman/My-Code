#include <conio.h>
#include <iostream.h>
#include <math.h>

void main()
{
clrscr();
const float phi=3.14;
float luas,d;
cout << "Menghitung luas lingkaran:" << endl;
cout << endl;
cout << "Masukan d:";
cin >> d;
luas = d / 2 * phi;
cout << "Nilai luas: " << luas <<"meter persegi";
getch();
}
