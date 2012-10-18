#include <conio.h>
#include <iostream.h>
#include <math.h>
void akarpangkat(float a, double b);

void main()
{
clrscr();
float akr;
double pkt;
cout<<"Masukkan Bilangan(akar):";
cin>>akr;
cout<<"Masukkan Bilangan(pangkat):";
cin>>pkt;
akarpangkat(akr,pkt);
getch();
}
void akarpangkat(float a, double b)
{
float akar;
double pangkat;
akar=sqrt(a);
cout<<"Hasil akar dari"<<" "<<a<<" "<<"adalah"<<" "<<akar<<endl;
pangkat=b*b;
cout<<"Hasil pangkat dari"<<" "<<b<<" "<<"adalah"<<" "<<pangkat;

}