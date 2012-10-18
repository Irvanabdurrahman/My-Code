#include <conio.h>
#include <iostream.h>

void main()
{
clrscr();
float Vt,Vo,a,t;
cout << "Menghitung kecepatan :" << endl;
cout << endl;
cout << "Masukan Vo:";
cin >> Vo;
cout << "Masukan a :";
cin >> a;
cout << "Masukan t :";
cin >> t;
Vt = Vo + a * t;
cout << "Nilai kecepatan: " << Vt;
getch();
}
