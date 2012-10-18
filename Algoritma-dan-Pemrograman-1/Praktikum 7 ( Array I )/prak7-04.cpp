#include <conio.h>
#include <iostream.h>
void main()
{
clrscr();
int nilai[7];
float jumlah,rata;
int x;
jumlah = 0;
for (x = 1; x <=7; x++)
  {
  cout << "Nilai tes ke-" << x << " :";
  cin >> nilai[x];
  jumlah = jumlah + nilai[x];
  }
rata = jumlah / 7;
cout << "==================================" << endl;
cout << "Nilai rata-rata: " << rata;
getch();
}

