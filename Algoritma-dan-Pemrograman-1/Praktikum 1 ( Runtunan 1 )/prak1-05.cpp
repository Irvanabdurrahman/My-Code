#include <conio.h>
#include <iostream.h>

void main()
{
clrscr();
float F, G, H;
cout << "Menghitung Luas Segitiga" << endl;
cout << endl;
cout << "Masukan Nilai Alas:";
cin >> G;
cout << "Masukan Nilai tinggi:";
cin >> H;
F = 0.5 * G * H;
cout << "Nilai F: " << F;
getch();
}
