#include <iostream.h>
#include <conio.h>
#include <stdio.h>

int main()
{
 FILE * pFile;
 pFile=fopen ("READ.txt","r");//r untuk membaca file
 cout <<"_____________________________________________\n";
 cout <<"\nProgram : Open file untuk read\n";
 cout <<"Pembuat : Irvan Abdurrahman | 4510210003\n";
 cout <<"Update  : 5 April 2011\n";
 cout <<"_____________________________________________\n";
 if (pFile!=NULL)
 {
  cout <<"FILE ADA !!!!!";
  fputs ("Perintah untuk menuliskan di FILE",pFile);
  fclose (pFile);
 }
 else
 {
  cout <<"FILE TIDAK ADA !!!!!";
 }
return 0;
}
