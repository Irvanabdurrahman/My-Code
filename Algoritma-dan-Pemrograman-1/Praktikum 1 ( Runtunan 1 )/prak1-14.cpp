#include <conio.h>
#include <iostream.h>

void main()
{
clrscr();
float Jumlah, depan, baris;
cout << "Menghitung Kursi Kelas SD TUGU IBU" << endl;
cout << endl;
cout << "Masukan Bangku Depan:";
cin >> depan;
cout << "Masukan Baris:";
cin >> baris;
Jumlah = depan * baris;
cout << "Nilai Jumlah: " << Jumlah <<"bangku";
getch();
}