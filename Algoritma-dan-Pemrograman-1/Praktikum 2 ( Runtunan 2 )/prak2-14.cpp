#include <conio.h>
#include <iostream.h>

void main()
{
clrscr();
float akhir, tugas, uts, uas;
cout << "Menghitung Nilai Akhir Mahasiswa" << endl;
cout << endl;
cout << "Masukan Nilai Tugas:";
cin >> tugas;
cout << "Masukan Nilai UTS :";
cin >> uts;
cout << "Masukan Nilai UAS :";
cin >> uas;
akhir = 0.25 * tugas + 0.3 * uts + 0.45 * uas;
cout << "Nilai Akhir Mahasiswa: " << akhir;
getch();
}

