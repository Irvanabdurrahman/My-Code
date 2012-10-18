#include <conio.h>
#include <iostream.h>
void persegi(int sisi);

void main()
{
clrscr();
int s;
cout<<"Masukkan Nilai Sisi:";
cin>>s;
persegi(s);
getch();
}
void persegi(int sisi)
{
float luas,kel;
luas=sisi*sisi;
cout<<"Luas Persegi :"<<" "<<luas<<endl;
kel=4*sisi;
cout<<"Keliling Persegi :"<<" "<<kel;
}