#include <conio.h>
#include <iostream.h>

void main()
{
clrscr();
long gaji, tahun;
cout << "Menghitung Gaji Pegawai Pertahun" << endl;
cout << endl;
cout << "Masukan Lama Kerja Anda Selama pertahun:";
cin >> tahun;
gaji = 1000000*12;
cout << "Nilai Gaji: " << gaji <<"rupiah";
getch();
}
