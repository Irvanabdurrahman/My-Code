#include <conio.h>
#include <iostream.h>

void main()
{
clrscr();
float y,b,x,c;
cout << "Menghitung ekspresi Matematik Y = b.x.x+c" << endl;
cout << endl;
cout << "Masukan Nilai b :";
cin >> b;
cout << "Masukan Nilai x :";
cin >> x;
cout << "Masukan Nilai c :";
cin >> c;
y=b*x*x+c;
cout << "Nilai Y:" << y ;
getch();
}


