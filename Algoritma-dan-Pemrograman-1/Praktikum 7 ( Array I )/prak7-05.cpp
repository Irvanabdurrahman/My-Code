#include <conio.h>
#include <iostream.h>
void main()
{
clrscr();
int nilai[10];
int x;
float rata, jumlah;
jumlah=0;
for (x=1; x<=10; x++)
  {
  cout << "masukkan nilai mahasiswa"<<x<<" :";
  cin >> nilai[x];
  jumlah =jumlah + nilai[x];
  }
  rata=jumlah/10;
  cout<<"jumlah nilai mahasiswa :"<<jumlah<<endl;
  cout<<"nilai rata-rata mahasiswa :"<< rata;
getch();
}

