#include <iostream.h>
#include <conio.h>

class pengaturan
{
protected:
	int alas, tinggi;
public:
	void luas (int a, int b)
	{alas=a;tinggi=b;}
};

class keluaran
{
public:
  void output (int i);
};

void keluaran::output (int i)
{
cout <<"Outputnya = " << i <<endl;
}

class segitiga: public pengaturan, public keluaran
{
public:
 int area (void)
 {return (alas * tinggi * 0.5);}
};

class segitiga_2:public pengaturan, public keluaran
{
public:
 int area (void)
 {return (alas * tinggi * 0.5);}
};

void main ()
{
clrscr();
cout <<"_______________________________________\n";
cout <<"\nMateri : Inheritance\n";
cout <<"Nama   : Irvan Abdurrahman | 4510210003\n";
cout <<"Update : 6 Juni 2011\n";
cout <<"_______________________________________\n";

segitiga sg3;
segitiga_2 segi3;
sg3.luas (8,5);
segi3.luas (4,5);
sg3.output (sg3.area());
segi3.output (segi3.area());
getch();
}

