#include <conio.h>
#include <iostream.h>
#include <stdio.h>
int a=4;
void getAGlobal()
 {
 cout <<"\nVariabel a adalah variabel Global berisi "<<a;
 cout <<"Alamatnya di "<<&a;
 }
void fungsi_by_value (int *a)
 {
 *a=*a*3;
 cout <<"\n Isi Variabel A by address adalah = "<<*a;
 cout <<"alamatnya di"<<&a;
 }
int main()
{
int a=5;
cout <<"_____________________________________________\n";
cout <<"\nProgram  : Pengiriman By Address\n";
cout <<"Pembuat  : Irvan Abdurrahman | 4510210003\n";
cout <<"Update   : 22 Maret 2011\n";
cout <<"_____________________________________________\n";
getAGlobal();
cout <<"\n A di main adalah = "<<a<< " alamatnya di "<<&a;
fungsi_by_value(&a);
cout <<"\n A dimain setelah fungsi dipanggil adalah = "<<a;
cout <<" alamatnya di "<<&a;
getch();
return 0;
}

