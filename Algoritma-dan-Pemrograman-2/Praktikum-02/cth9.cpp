#include <conio.h>
#include <iostream.h>
#include <stdio.h>

int main()
{
clrscr();
int a[5]={1,2,3,4,5};
int *p;
cout <<"_____________________________________________\n";
cout <<"\nProgram  : Pointer pada Array\n";
cout <<"Pembuat  : Irvan Abdurrahman | 4510210003\n";
cout <<"Update   : 15 Maret 2011\n";
cout <<"_____________________________________________\n";
p=a;
cout <<"\nHasil dari variabel p adalah : ";
cout <<*p;
return 0;
}

