#include <conio.h>
#include <iostream.h>

void main()
{
clrscr();
int nilai,uas,uts,tugas,absen;
cout << "masukan nilai UAS :";
cin >> uas;
cout << "masukan nilai UTS :";
cin >> uts;
cout << "masukan nilai Tugas :";
cin >> tugas;
cout << "masukan nilai absen :";
cin >> absen;
nilai=0.4*uas+0.3*uts+0.2*tugas+0.1*absen;
if (nilai < 60 )
        {
 	cout << "Tidak Lulus" << endl;
        }
else
        {
	cout << "Lulus" << endl;
        }
getch();
}
