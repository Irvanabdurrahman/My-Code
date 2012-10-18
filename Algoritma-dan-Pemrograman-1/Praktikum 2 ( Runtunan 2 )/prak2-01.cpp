#include <conio.h>
#include <iostream.h>

void main()
{
clrscr();
float V, A, T;
cout << "Menghitung Ukuran Arus (ampere) dan Tahanan (ohm)" << endl;
cout <<  endl;
cout << "Masukkan Nilai A:";
cin >> A;
cout << "Masukkan Nilai T:";
cin >> T;
V = A * T;
cout << "Nilai V:" << V;
getch();
}