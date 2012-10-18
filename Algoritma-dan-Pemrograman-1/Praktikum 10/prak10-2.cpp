#include<iostream.h>
#include<conio.h>
#include<math.h>

float keliling(float a, float t);
int keliling(int w);
float keliling(float p);

void main()
{
clrscr();
float a,t,p;
int w;
cout<<"program menghitung keliling segitiga"<<endl;
cout<<"masukkan panjang alas (cm):";
cin>>a;
cout<<"masukkan tinggi (cm): ";
cin>>t;
cout<<"keliling segitiga adalah : "<<keliling(a,t)<<"cm"<<endl;
cout<<"================================================="<<endl;
cout<<"program menghitung keliling segiempat"<<endl;
cout<<"masukkan panjang sisi (cm):";
cin>>w;
cout<<"keliling segiempat adalah : "<<keliling(w)<<"cm"<<endl;
cout<<"================================================="<<endl;
cout<<"program menghitung keliling lingkaran"<<endl;
cout<<"masukkan jari-jari (cm):";
cin>>p;
cout<<"keliling lingkaran adalah : "<<keliling(p)<<"cm";
getch();
}

float keliling(float a, float t)
{
float s;
s=sqrt((0.5*a*0.5*a)+t*t);
return 2*s+a;
}

int keliling(int w)
{
return 4*w;
}

float keliling(float p)
{
return 2*p*3.14;
}

