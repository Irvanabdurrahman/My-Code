#include <conio.h>
#include <iostream.h>

float jumlah (float Vo, float sin, float cos, float g);

void main()
{
clrscr();
float Vo, sin, cos, g;
cout << "Nilai Vo = ";
cin >> Vo;
cout << "Nilai sin = ";
cin >> sin;
cout << "Nilai cos = ";
cin >> cos;
cout << "Nilai g = ";
cin >> g;
cout << "Jumlah: "<< jumlah (Vo, sin, cos, g);
getch();
}

float jumlah (float Vo, float sin, float cos, float g)
{
float jumlah;
jumlah = (2 * Vo * Vo * sin * cos)/g;
return jumlah;
}
