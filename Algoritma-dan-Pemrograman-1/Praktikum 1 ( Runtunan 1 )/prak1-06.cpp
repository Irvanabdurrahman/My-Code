#include <conio.h>
#include <iostream.h>

void main()
{
clrscr();
int Luas, S;
cout << "Menghitung Luas Kubus" << endl;
cout << endl;
cout << "Masukan Nilai Sisi:";
cin >> S;
Luas =  S * S * S;
cout << "Nilai Luas: " << Luas;
getch();
}