#include <conio.h>
#include <iostream.h>

void main()
{
clrscr();
long Pendapatan, PK, lokasi, PD, KP;
cout << " PK: ";
cin >> PK;
cout << " lokasi: ";
cin >> lokasi;
cout << " PD: ";
cin >> PD;
cout << " KP; ";
cin >> KP;
Pendapatan = lokasi*PD+PK*KP;
cout << " Pendapatan bulan april: " << Pendapatan;
getch();
}