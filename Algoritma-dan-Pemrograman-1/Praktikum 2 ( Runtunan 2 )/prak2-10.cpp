#include <conio.h>
#include <iostream.h>

void main()
{
clrscr();
float Jam,Detik,Menit,Biaya,JD,SMDSD,SJDSD,LSP,HSP;
cout <<"JD:";
cin >> JD;
cout <<"SMDSD:";
cin >> SMDSD;
cout <<"SJDSD:";
cin >> SJDSD;
cout <<"LSP:";
cin >> LSP;
cout <<"HSP:";
cin >> HSP;
Jam=JD/SJDSD;
Menit=JD/SMDSD;
Biaya=JD/LSP*HSP;
Detik=JD;
cout <<"Jam:"<<Jam;
cout <<endl;
cout <<"Menit:"<<Menit;
cout <<endl;
cout <<"Biaya:"<<Biaya;
cout <<endl;
cout <<"Detik:"<<Detik;
cout <<endl;
getch();
}