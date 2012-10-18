#include <conio.h>
#include <iostream.h>

void main()
{
clrscr();
long hasil,total;
cout << "masukan nilai total belanja :";
cin >> total;
if (total > 5000000)
{
	hasil=total-(total/100*5);
	cout << "Nilai Total: " << hasil ;
}
else
{
	hasil=total;
	cout << "Nilai Total: " << hasil ;
}
getch();
}
