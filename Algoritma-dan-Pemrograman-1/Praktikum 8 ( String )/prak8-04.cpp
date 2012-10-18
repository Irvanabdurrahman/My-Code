#include <conio.h>
#include <iostream.h>
#include <stdio.h>
void main()
{
clrscr();

char teks[6];
int i;
cout<<"Masukkan password :";
gets(teks);
for(i=0;teks[i];i++)
	 teks[i]='*';
    cout<<teks;
getch();
}
