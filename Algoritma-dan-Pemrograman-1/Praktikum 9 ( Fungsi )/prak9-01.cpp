#include <conio.h>
#include <iostream.h>

long faktorial (long a);

void main()
{
clrscr();
long x;
cout << "Masukkan Faktorial Yang Diinginkan = ";
cin >> x;
cout << endl;
cout << x<< " Faktorialnya adalah = " << faktorial(x);
getch();
}

long faktorial(long a)
{
if (a>1)
	 return (a* faktorial(a - 1));
else
	 return (1);
}

