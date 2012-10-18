#include <conio.h>
#include <iostream.h>

void main()
{
clrscr();
float z,x,y;
cout << "Menghitung ekspresi Matematik" << endl;
cout << endl;
cout << "Masukan Nilai z :";
cin >> z;
cout << "Masukan Nilai x :";
cin >> x;
cout << "Masukan Nilai y :";
cin >> y;
z=x+y/x-y;
cout << "Nilai Z:" << z ;
getch();
}
