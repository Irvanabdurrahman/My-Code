#include <conio.h>
#include <iostream.h>
#include <math.h>

void main()
{
clrscr();
float s,vo,t,a;
cout << "Menghitung kecepatan" << endl;
cout << endl;
cout << "Masukan Vo:";
cin >> vo;
cout << "Masukan t:";
cin >> t;
cout << "Masukan a:";
cin >> a;
s = vo * t + 0.5 * a * t * t;
cout << "Nilai S: " << s;
getch();
}

