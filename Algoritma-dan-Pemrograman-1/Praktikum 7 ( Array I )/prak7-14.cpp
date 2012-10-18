#include <conio.h>
#include <iostream.h>
void main()
{
clrscr();
int nilai[1];
int i,angka;
//mengisi array otomatis
for (i= 0; i < 1; i++)
  {
  cout << "Masukkan tahun dari data ingin anda ketahui [2002...2004] :";
  cin >> nilai[i];
  }

//mencetak array
for (i= 0; i < 1; i++)
  {
  if (nilai[i]==2002)
  {
	cout << "masukan kode program berdasarkan mata kuliah" << endl;
	cout << "sesuai yang anda inginkan"<<endl;
	cout << "1=Algo by pascal 2= Algo by C++ 3=Algo by Java 4=Algo by VB :";
	cin >> angka;
	cout << endl;
	{
		switch(angka)
		{
		case 1 : cout << "Total Kelulusan = 99";
		break;
		case 2 : cout << "Total Kelulusan = 14";
		break;
		case 3 : cout << "Total Kelulusan = 9";
		break;
		case 4 : cout << "Total Kelulusan = 11";
		break;
		}
  }
  }
  else if (nilai[i]==2003)
  {
	cout << "masukan kode program berdasarkan mata kuliah" << endl;
	cout << "sesuai yang anda inginkan"<<endl;
	cout << "1=Algo by pascal 2= Algo by C++ 3=Algo by Java 4=Algo by VB :";
	cin >> angka;
	cout << endl;
	{
		switch(angka)
		{
		case 1 : cout << "Total Kelulusan = 245";
		break;
		case 2 : cout << "Total Kelulusan = 12";
		break;
		case 3 : cout << "Total Kelulusan = 89";
		break;
		case 4 : cout << "Total Kelulusan = 111";
		break;
		}
  }
  }
  else if (nilai[i]==2004)
  {
	cout << "masukan kode program berdasarkan mata kuliah" << endl;
	cout << "sesuai yang anda inginkan"<<endl;
	cout << "1=Algo by pascal 2= Algo by C++ 3=Algo by Java 4=Algo by VB :";
	cin >> angka;
	cout << endl;
	{
		switch(angka)
		{
		case 1 : cout << "Total Kelulusan = 111";
		break;
		case 2 : cout << "Total Kelulusan = 125";
		break;
		case 3 : cout << "Total Kelulusan = 999";
		break;
		case 4 : cout << "Total Kelulusan = 1250";
		break;
		}
 	 }
  }
  else
  {
	cout << "Salah memasukan Tahun";
  }
}
getch();
}
