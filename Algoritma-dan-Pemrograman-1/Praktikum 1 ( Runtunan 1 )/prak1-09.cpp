#include <conio.h>
#include <iostream.h>

void main()
{
clrscr();
float V, P, L, T;
cout << "Menghitung Volume Kamar Mandi" << endl;
cout << endl;
cout << "Masukan Nilai Panjang:";
cin >> P;
cout << "Masukan Nilai Lebar:";
cin >> L;
cout << "Masukan Nilai Tinggi:";
cin >> T;
V = P * L * T;
cout << "Nilai Volume: " << V;
getch();
}