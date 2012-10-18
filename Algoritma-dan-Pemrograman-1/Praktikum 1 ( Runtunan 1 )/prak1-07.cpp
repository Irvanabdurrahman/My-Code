#include <conio.h>
#include <iostream.h>

void main()
{
clrscr();
double Gaji, Jam;
cout << "Menghitung Gaji Pegawai" << endl;
cout << endl;
cout << "Masukan Lama Jam Kerja Anda:";
cin >> Jam;
Gaji = 10000 * Jam;
cout << "Nilai Gaji: " << Gaji <<"rupiah";
getch();
}