#include <iostream.h>
#include <conio.h>
#include <stdio.h>

int main()
{
 FILE * pFile;
 pFile=fopen ("D:/WRITE.txt","w");//w untuk menuliskan file
 cout <<"___________________________________________\n";
 cout <<"\nProgram : Open file untuk Write\n";
 cout <<"Pembuat : Irvan Abdurrahman | 4510210003\n";
 cout <<"Update  : 5 April 2011\n";
 cout <<"___________________________________________\n";
 if (pFile!=NULL)
 {
  cout <<"FILE ADA !!!!!";
  fputs ("Saya menuliskan di file READ.txt",pFile);
  fclose (pFile);
 }
 else
 {
  cout <<"FILE TIDAK ADA !!!!!";
 }
return 0;
}