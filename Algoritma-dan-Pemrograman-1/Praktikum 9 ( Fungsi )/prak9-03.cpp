#include <conio.h>
#include <iostream.h>

void angka(int x, int y);

void main ()
{
clrscr();
int a,b;
cout << "Nilai sebelum pemanggilan fungsi : "<<endl;
cout << "Nilai a = ";
cin >> a;
cout << "Nilai b = ";
cin >> b;
cout << "Nilai sesudah pemanggilan fungsi :"<<endl;
angka (a,b);
getch();
}

void angka(int x, int y)
{
int z;
z=y;
y=x;
x=z;
cout <<"nilai a = " << x << endl;
cout <<"nilai b = " << y << endl;
}


