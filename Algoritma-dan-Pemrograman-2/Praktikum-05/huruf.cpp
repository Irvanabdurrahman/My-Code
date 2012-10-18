#include <iostream.h>
#include <conio.h>
#include <stdio.h>
#include <stdlib.h>

int main()
{
 FILE * data;
 int i;
 int tampil;
 data = fopen ("HURUF.txt","w"); //w berarti menuliskan difile
 cout <<"___________________________________________________________\n";
 cout <<"\nProgram : Open file untuk menuliskan 1 karakter\n";
 cout <<"Pembuat : Irvan Abdurrahman | 4510210003\n";
 cout <<"Update  : 5 April 2011\n";
 cout <<"___________________________________________________________\n";
 for (i='A';i<='Z';i++) //perulangan untuk menuliskan karakter A-Z
 {
  fputc (i,data); //menuliskan karakter A-Z
  fputc ('\n', data); //menuliskan pergantian baris
 }
 fclose (data);
 if ((data = fopen("HURUF.txt","r"))==NULL)
  {
  cout <<"Salah dalam pembacaan file";
  exit(1);
  }
cout<<"\n Hasil yang disimpan di FILE:\n";
while (tampil!=EOF)
 {
 //baca file sampai tanda EOF (End of file)
 tampil=fgetc(data); //ambil satu karater
 putchar (tampil); //menampilkan karakter ke layar
 }
 fclose (data);
 return 0;
 }
