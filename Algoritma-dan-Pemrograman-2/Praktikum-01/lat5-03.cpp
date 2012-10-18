#include <conio.h>
#include <iostream.h>

void main()
{
clrscr();
int a, b, c;
cout <<"_____________________________________________\n";
cout << "\nProgram    : Jam Pasir\n";
cout << "Pembuat    : Irvan Abdurrahman | 4510210003\n";
cout << "Update     : 8 Maret 2011\n";
cout <<"_____________________________________________\n";
cout << "\nMasukkan angka : ";
cin >> a;
for (b=a; b>=1; b--)
{
for (c=a; c>=b; c--)
cout << " ";
	{
	for (c=b; c>=1; c--)
	cout << "* ";
	cout << endl;
	}
}
for (b=2; b<=a; b++)
{
for (c=b; c<=a; c++)
{
cout << " ";
}
	{
	for (c=1; c<=b; c++)
	cout << "* " ;
	cout << endl;
	}
}
getch();
}