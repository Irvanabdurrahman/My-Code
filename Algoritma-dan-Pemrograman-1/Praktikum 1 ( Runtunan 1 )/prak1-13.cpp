#include <conio.h>
#include <iostream.h>

void main()
{
clrscr();
int Keliling, P, L;
cout << "Menghitung Keliling Persegi Panjang" << endl;
cout << endl;
cout << "Masukan Nilai Panjang:";
cin >> P;
cout << "Masukan Nilai Luas:";
cin >> L;
Keliling = 2 * ( P + L );
cout << "Nilai Keliling: " << Keliling;
getch();
}
