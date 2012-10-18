#include <conio.h>
#include <iostream.h>
#include <limits.h>

void main()
{
clrscr();
int jml_bil,bil,i,max;
cout << "Masukkan Jumlah Bilangan Yang anda inginkan:";
cin >> jml_bil;
max = INT_MIN;
i=0;
while (i<jml_bil)
  {
  cout << "Masukkan bilangan:";
  cin >> bil;
	 if (bil>max)
	 max=bil;i++;
  }
cout <<"Bilangan Tertingginya adalah:"<<max<<endl;
getch();
}
