#include <conio.h>
#include <iostream.h>

void main()
{
clrscr();
float Diskon,total;
cout << "menghitung diskon" << endl;
cout << endl;
cout << "masukan total belanja:";
cin >> total;
Diskon = 0.1 * total;
cout << "Total: " << Diskon;
getch();
}