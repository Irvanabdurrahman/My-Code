#include <iostream.h>
#include <conio.h>

class kendaraanku
{
protected:
  int jarak;
public:
  void hasil (int a)
  {jarak=a;}
};

class kendaraan:public kendaraanku
{
public:
 void belokiri()
 {cout<<"Kendaraan belok kiri dengan jarak " << jarak << " KM\n";}
 void rem()
 {cout <<"Kendaraan rem dengan jarak " << jarak << " KM\n";}
 void lampusen()
 {cout <<"Kendaraan lampusennya nyala pada jarak " << jarak << " KM\n";}
};

void main()
{
clrscr();
float j;
//untuk mobil
kendaraan mobil;
kendaraan motor;
cout <<"_____________________________________\n";
cout <<"\nProgram : Inheritance\n";
cout <<"Nama    : Irvan Abdurrahman | 4510210003\n";
cout <<"Update  : 7 Juni 2011\n";
cout <<"_____________________________________\n";
cout <<"\nMasukkan Jarak : ";
cin>>j;
cout <<"Mobil\n";
mobil.hasil(j);
mobil.belokiri();
mobil.rem();
mobil.lampusen();
cout <<"\nMotor\n";
motor.hasil(j);
motor.belokiri();
motor.rem();
motor.lampusen();
getch();
}
