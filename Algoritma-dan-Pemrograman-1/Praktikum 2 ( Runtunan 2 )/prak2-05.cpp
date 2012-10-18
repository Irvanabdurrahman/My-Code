#include <conio.h>
#include <iostream.h>

void main()
{
clrscr();
float rs, rp, r1, r2, r3, r4, r5;
cout << "Menghitung 5 buah bilangan bulat :" << endl;
cout << endl;
cout << "Masukan Nilai r1:";
cin >> r1;
cout << "Masukan Nilai r2 :";
cin >> r2;
cout << "Masukan Nilai r3 :";
cin >> r3;
cout << "Masukan Nilai r4 :";
cin >> r4;
cout << "Masukan Nilai r5 :";
cin >> r5;
rs = r1 + r2 + r3 + r4 + r5;
rp = 1/r1 + 1/r2 + 1/r3 + 1/r4 + 1/r5;
cout << "Nilai rs: " << rs<<endl;
cout << "Nilai rp: " << rp;
getch();
}



