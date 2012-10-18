#include<iostream.h>
#include<conio.h>
#include<math.h>
float volum(float r);
float volum_sil(float r, float t);
float volum(float r, float t);

void main()
{
clrscr();
float r,t;
cout<<"program menghitung volum kerucut"<<endl;
cout<<"masukkan jari-jari (cm): ";
cin>>r;
cout<<"masukkan tinggi (cm): ";
cin>>t;
cout<<"volum kerucut adalah : "<<volum(r,t)<<"cm3"<<endl;
cout<<"==================================================="<<endl;
cout<<"program menghitung volum silinder"<<endl;
cout<<"masukkan jari-jari (cm): ";
cin>>r;
cout<<"masukkan tinggi (cm): ";
cin>>t;
cout<<"volum silinder adalah : "<<volum_sil(r,t)<<"cm3"<<endl;
cout<<"==================================================="<<endl;
cout<<"program menghitung volum bola"<<endl;
cout<<"masukkan jari-jari (cm): ";
cin>>r;
cout<<"volum bola adalah : "<<volum(r)<<"cm3"<<endl;
getch();
}

float volum(float r)
{
return((3.14*(pow(r,3)))*4/3);
}

float volum_sil(float r, float t)
{
return(3.14*r*r*t);
}

float volum(float r, float t)
{
return((3.14*r*r*t)*1/3);
}
