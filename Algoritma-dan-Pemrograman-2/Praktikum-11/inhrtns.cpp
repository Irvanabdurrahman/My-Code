#include <iostream.h>
#include <conio.h>
#include <string.h>

class kendaraanku
{
protected:
  int jarak;
  char jenis[4];
public:
  void hasil (int a)
  {jarak=a;}
};

class kendaraan:public kendaraanku
{
public:
 void rem()
 {cout <<jenis+4<<" rem dengan jarak " << jarak << " KM\n";}
 void belokiri()
 {cout <<jenis+4<<" belok kiri dengan jarak " << jarak << " KM\n";}
 void belokanan()
 {cout <<jenis+4<<" belok kanan dengan jarak " << jarak << " KM\n";}
 void maju()
 {cout <<jenis+4<<" maju dengan jarak " << jarak << " KM\n";}
 void mundur()
 {cout <<jenis+4<<" mundur dengan jarak " << jarak << " KM\n";}
 void lampusen()
 {cout <<jenis+4<<" lampusennya nyala pada jarak " << jarak << " KM\n";}
};

void main()
{
clrscr();
float j;
int menu;
char pil,jenis[4];
kendaraan irvan;
cout <<"______________________________________________\n";
cout <<"\nProgram : Inheritance\n";
cout <<"Nama    : Irvan Abdurrahman | 4510210003\n";
cout <<"Update  : 7 Juni 2011\n";
cout <<"______________________________________________\n";

do
{
cout <<"\nMENU PILIHAN\n";
cout <<"Jarak Yang ditempuh : ";
cin>>j;
cout <<"Masukkan Jenis Kendaraan [Mobil/Motor] : ";
cin >>jenis;
cout <<"1.Rem\n";
cout <<"2.Belok Kiri\n";
cout <<"3.Belok Kanan\n";
cout <<"4.Maju\n";
cout <<"5.Mundur\n";
cout <<"6.Lampu Sen\n";
cout <<"7.Keluar\n";
cout <<"Masukkan Pilihan Anda : ";
cin >>menu;
switch (menu)
 {
 case 1:irvan.hasil(j);
		  irvan.rem();
 break;
 case 2:irvan.hasil(j);
		  irvan.belokiri();
 break;
 case 3:irvan.hasil(j);
		  irvan.belokanan();
 break;
 case 4:irvan.hasil(j);
		  irvan.maju();
 break;
 case 5:irvan.hasil(j);
		  irvan.mundur();
 break;
 case 6:irvan.hasil(j);
		  irvan.lampusen();
 break;
 case 7:cout <<"Terima Kasih\n";
		  cout <<"\nApakah anda mau proses lagi [Y/N] : ";
		  cin>>pil;
 break;
 default:cout <<"Anda Salah Memasukkan Pilihan\n";
 break;
 }
}while(menu!=7||pil=='Y');
getch();
}
