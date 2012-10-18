#include <conio.h>
#include <iostream.h>

void main()
{
clrscr();
float F,R;
int Tc;
cout << "Konversi suhu"<<endl;
cout << endl;
cout << "masukkan nilai Tc:";
cin >> Tc;
F=((9*Tc)/5)+32;
R=(4*Tc)/5;
cout << "konfersi suhu dalam Fahrenheit:"<< F;
cout << endl;
cout << "konfersi suhu dalam Reamur:"<< R;
getch();
}
