#include<conio.h>
#include<iostream.h>

void main()
{
clrscr();
const float phi=3.14;
float luas,angka,sisi,panjang,lebar,r;
cout << "Masukkan angka:";
cin >> angka;
if (angka==1)
  {
  cout<<"Menghitung luas dan keliling bujur sangkar"<<endl;
  cout<<"Masukkan panjang sisinya:";
  cin>>sisi;
  luas=sisi*sisi;
  cout<<"nilai luas:"<<luas;
  }
else if(angka==2)
  {
  cout<<"Menghitung Luas dan keliling persegi panjang"<<endl;
  cout<<"masukkan nilai panjang:";
  cin>>panjang;
  cout<<"masukkan nilai lebar:";
  cin>>lebar;
  luas=panjang*lebar;
  cout<<"nilai luas:"<<luas;
  }
else if( angka==3)
  {
  cout<<"menghitung luas dan keliling lingkaran"<<endl;
  cout<<"masukkan nilai r:";
  cin>>r;
  luas = phi*r*r;
  cout<<"nilai luas:"<<luas;
  }
else if( angka==4)
{
  cout<<"Pilihan anda salah";
  }
getch();
}
