#include <conio.h>
#include <iostream.h>
#include <math.h>

void main()
{
clrscr();
long keluaran,hari,jam,menit,detik,sisajam,sisamenit;
cout << "Menghitung biaya telepon:" << endl;
cout << endl;
cout << "Masukan hari:";
cin >> hari;
cout << "Masukan jam:";
cin >> jam;
cout << "Masukan menit:";
cin >> menit;
cout << "Masukan detik:";
cin >> detik;
cout << "Masukan sisajam:";
cin >> sisajam;
cout << "Masukan sisamenit:";
cin >> sisamenit;
hari = detik / (24*60*60);
sisajam = detik % (24*60*60);
jam = sisajam / (60*60);
menit = sisamenit / 60;
detik = sisamenit % 60;
cout << "keluaran :" << keluaran ;
getch();
}
