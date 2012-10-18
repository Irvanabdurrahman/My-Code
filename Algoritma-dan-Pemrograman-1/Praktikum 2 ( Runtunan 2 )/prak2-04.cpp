#include <conio.h>
#include <iostream.h>

void main()
{
clrscr();
float yard,kaki,inch,meter;
cout << "Konversi panjang"<<endl;
cout << endl;
cout << "masukkan nilai yard:";
cin >> yard;
cout << "masukkan nilai kaki:";
cin >> kaki;
cout << "masukkan nilai inch:";
cin >> inch;
meter=0.9144*yard+0.3048*kaki+0.0254*inch;
cout << "nilai meter:"<<meter;
getch();
}
