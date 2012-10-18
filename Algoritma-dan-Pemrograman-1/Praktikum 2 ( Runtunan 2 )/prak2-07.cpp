#include <conio.h>
#include <iostream.h>
#include <math.h>

void main()
{
clrscr();
float d,x1,x2,y1,y2;
cout << "Menghitung titik tengah:" << endl;
cout << endl;
cout << "Masukan x1:";
cin >> x1;
cout << "Masukan x2:";
cin >> x2;
cout << "Masukan y1:";
cin >> y1;
cout << "Masukan y2:";
cin >> y2;
d = sqrt((x2-x1)*(x2-x1))+((y2-y1)*(y2-y1));
cout << "Nilai titik tengah: " << d;
getch();
}
