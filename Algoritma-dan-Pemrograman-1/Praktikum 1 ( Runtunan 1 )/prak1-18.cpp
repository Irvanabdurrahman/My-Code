#include <conio.h>
#include <iostream.h>

void main()
{
clrscr();
long Upah, tahun;
cout << "Menghitung Gaji buruh Pertahun" << endl;
cout << endl;
cout << "Masukan Pertahun Kerja Anda:";
cin >> tahun;
Upah = 9000000 * tahun;
cout << "Nilai Upah: " << Upah;
getch();
}