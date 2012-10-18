#include <conio.h>
#include <iostream.h>

void main()
{
clrscr();
int ab,s2,t;
cout << "Menghitung AB = (S2 - T) * 50" << endl;
cout << endl;
cout << "Masukan Nilai S2:";
cin >> s2;
cout << "Masukan Nilai t:";
cin >> t;
ab = (s2 - t) * 50;
cout << "Nilai AB: " << ab;
getch();
}

