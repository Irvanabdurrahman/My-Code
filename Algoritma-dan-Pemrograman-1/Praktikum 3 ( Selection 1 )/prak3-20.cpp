#include<conio.h>
#include<iostream.h>

void main()
{
clrscr();
long jumlah, dibayar, total;
cout<<"masukkan quantity:"<<endl;
cin>>jumlah;
total = jumlah*1100;
cout<<"total belanjaan:"<<total<<endl;
dibayar =total - total*0.1;
if (total>100000)
  {
	cout<<"mendapatkan diskon"<<endl;
	cout<<"yang harus dibayar:"<<dibayar;
  }
else
  cout<<"mendapatkan diskon"<<endl;
getch();
}