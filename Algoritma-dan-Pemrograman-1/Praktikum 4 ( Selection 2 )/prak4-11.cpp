#include<conio.h>
#include<iostream.h>

void main()
{
clrscr();
long total,total_akhir,lama_nginep,harga_kamar;
cout << "Lama Menginap:";
cin >> lama_nginep;
cout << "Harga kamar:";
cin >> harga_kamar;
total = lama_nginep*harga_kamar;
if(total > 700000)
{
	total_akhir=total-(total*0.03);
	cout << "total=" << total_akhir<<"rupiah"<<endl;
	cout <<"anda mendapatkan diskon 30%";
}
else if(total > 500000)
{
	total_akhir=total-(total*0.02);
	cout << "total=" << total_akhir<<"rupiah"<<endl;
	cout <<"anda mendapatkan diskon 20%";
}
else if(total > 300000)
{
	total_akhir=total-(total*0.01);
	cout << "total=" << total_akhir<<"rupiah"<<endl;
	cout <<"anda mendapatkan diskon 10%";
}
else
{
	cout << "total=" << total << "rupiah" << endl;
	cout << "anda tidak dapat bonus";
}
getch();
}

