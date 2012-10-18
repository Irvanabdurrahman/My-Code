#include <conio.h>
#include <iostream.h>

void main()
{
clrscr();
float Volume, alas, tinggi, tinggi_prisma;
cout << "Menghitung Volume Prisma Segitiga" << endl;
cout << endl;
cout << "Masukan Nilai alas:";
cin >> alas;
cout << "Masukan Nilai tinggi:";
cin >> tinggi;
cout << "Masukan Nilai tinggi prisma:";
cin >> tinggi_prisma;
Volume = (0.5 * alas * tinggi * tinggi_prisma) / 3;
cout << "Nilai Volume: " << Volume;
getch();
}