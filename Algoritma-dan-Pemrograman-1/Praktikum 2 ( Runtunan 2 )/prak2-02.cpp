#include <conio.h>
#include <iostream.h>

void main()
{
clrscr();
float Jumlah, depan, baris;
cout << "Menghitung Kursi Kelas" << endl;
cout << endl;
cout << "Masukkan Bangku Depan:";
cin >> depan;
cout << "Masukkan Bangku Baris:";
cin >> baris;
Jumlah = depan * baris;
cout << "Nilai Jumlah:" << Jumlah;
getch();
}
