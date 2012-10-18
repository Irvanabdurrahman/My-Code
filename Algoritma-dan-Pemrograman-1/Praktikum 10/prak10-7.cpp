#include <conio.h>
#include <iostream.h>

int nilai (int w, int x);
int nilai (int w,int x,int y);
int nilai (int w,int x,int y,int z);

void main()
{
clrscr();
int w,x,y,z;
cout<<"Jumlah nilai dari dua paremeter"<<endl;
cout<<"Nilai terbesarnya adalah : "<<nilai(w,x)<<endl;
cout<<"************************************************"<<endl;
cout<<"Jumlah nilai dari tiga paremeter"<<endl;
cout<<"Nilai terbesarnya adalah : "<<nilai(w,x,y)<<endl;
cout<<"************************************************"<<endl;
cout<<"Jumlah nilai dari empat paremeter"<<endl;
cout<<"Nilai terbesarnya adalah : "<<nilai(w,x,y,z)<<endl;
cout<<"************************************************"<<endl;
getch();
}

int nilai (int w, int x)
{
int nilai[2];
int i, maks;
for (i = 0; i< 2; i++)
  {
	cout << "Masukkan nilai: ";
	cin >>nilai[i];
  }
maks = nilai[0];
for (i = 0; i< 2; i++)
  {
  if (maks < nilai[i])
  maks = nilai[i];
  }
return maks;
}

int nilai (int w,int x,int y)
{
int nilai[3];
int i, maks;
for (i = 0; i< 3; i++)
  {
	cout << "Masukkan nilai: ";
	cin >>nilai[i];
  }
maks = nilai[0];
for (i = 0; i< 3; i++)
  {
  if (maks < nilai[i])
  maks = nilai[i];
  }
return maks;
}

int nilai (int w,int x,int y,int z)
{
int nilai[4];
int i, maks;
for (i = 0; i< 4; i++)
  {
	cout << "Masukkan nilai: ";
	cin >>nilai[i];
  }
maks = nilai[0];
for (i = 0; i< 4; i++)
  {
  if (maks < nilai[i])
  maks = nilai[i];
  }
return maks;
}



