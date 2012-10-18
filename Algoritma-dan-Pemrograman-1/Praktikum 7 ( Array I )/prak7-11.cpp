#include <conio.h>
#include <iostream.h>
void main()
{
clrscr();
int nilai[3][3];
int i, j;
for (i = 0; i< 3; i++)
  {
  for (j= 0; j<3;j++)
	 {
		cout << "Masukan angka pada baris ke " << i << " kolom ke " << j << ": ";
		cin >> nilai[i][j];
    }
		cout << endl;
  }
//mencetak dalam bentuk matriks
for (i = 0; i< 3; i++)
  {
  for (j= 0; j<3; j++)
	 {
		cout << nilai[i][j] << " ";
	 }
  cout << endl;
  }
getch();
}