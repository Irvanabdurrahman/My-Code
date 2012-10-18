#include <conio.h>
#include <iostream.h>

void main()
{
clrscr();
int nilai;
cout << "masukan nilai ujian :";
cin >> nilai;
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
