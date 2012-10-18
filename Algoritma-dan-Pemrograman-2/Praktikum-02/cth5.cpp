#include <conio.h>
#include <iostream.h>
#include <stdio.h>

int main()
{
clrscr();
int a[5]={1,2,3,4,5};
int *p;
p=a;
cout <<"_____________________________________________\n";
cout <<"\nProgram  : Pointer pada Array\n";
cout <<"Pembuat  : Irvan Abdurrahman | 4510210003\n";
cout <<"Update   : 15 Maret 2011\n";
cout <<"_____________________________________________\n";
cout <<"\nHasil dari variabel p adalah : ";
cout <<*p<<endl;
cout <<"Menampilkan semua data array a dengan pointer :\n";
for (int i=0;i<5;i++)
 {
 cout <<"Nilai p ke - "<<i+1<<" adalah : "<<*p<<"\n";
 p++;
 }
return 0;
}

