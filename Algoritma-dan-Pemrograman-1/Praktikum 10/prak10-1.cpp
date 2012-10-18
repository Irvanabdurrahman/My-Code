#include<conio.h>
#include<iostream.h>

float luas(float a, float t);                                             
int luas(int w);
float luas(float p);

void main()
{
float a, t, p;
int w;
cout<<"program menghitung luas segitiga"<<endl;
cout<<"masukkan alas (cm): ";
cin>>a;
cout<<"masukkan tinggi (cm):";
cin>>t;
cout<<"luas segitiga adalah : "<<luas(a,t)<<"cm2"<<endl;
cout<<"===================================================="<<endl;
cout<<"program menghitung luas segiempat"<<endl;
cout<<"masukkan panjang sisi (cm): ";
cin>>w;
cout<<"luas segiempat adalah : "<<luas(w)<<"cm2"<<endl;
cout<<"===================================================="<<endl;
cout<<"program menghitung luas lingkaran"<<endl;
cout<<"masukkan panjang jari-jari (cm): ";
cin>>p;
cout<<"luas lingkaran  adalah : "<<luas(p)<<"cm2"<<endl;
getch();
}

float luas(float a, float t)
{
return 0.5*a*t;
}

int luas(int w)
{
return w*w;
}

float luas(float p)
{
return 3.14*p*p;
}

