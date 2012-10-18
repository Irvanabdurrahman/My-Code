#include <conio.h>
#include <iostream.h>

void main()
{
clrscr();
const float phi=3.14;
float luas,r;
cout << "Menghitung luas halaman rumah:" << endl;
cout << endl;
cout << "masukan r:";
cin >> r;
luas = phi*r*r;
cout << "Nilai luas: " << luas <<"meter persegi";
getch();
}

