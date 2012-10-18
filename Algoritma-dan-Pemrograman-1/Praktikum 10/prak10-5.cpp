#include<iostream.h>
#include<conio.h>
#include<math.h>

float volume_kubus(float r);
float volume_balok(float p, float l,float t);

void main()
{
clrscr();
float r,p,l,t;
cout<<"program menghitung volume kubus"<<endl;
cout<<"masukkan jari-jari: ";
cin>>r;
cout<<"volume kubus adalah : "<<volume_kubus(r)<<endl;
cout<<"==================================================="<<endl;
cout<<"program menghitung volume balok"<<endl;
cout<<"masukkan nilai panjang: ";
cin>>p;
cout<<"masukkan nilai lebar: ";
cin>>l;
cout<<"masukkan nilai tinggi: ";
cin>>t;
cout<<"volume balok adalah : "<<volume_balok(p,l,t)<<endl;
getch();
}

float volume_kubus(float r)
{
return r*r*r;
}

float volume_balok(float p, float l,float t)
{
return p*l*t;
}

