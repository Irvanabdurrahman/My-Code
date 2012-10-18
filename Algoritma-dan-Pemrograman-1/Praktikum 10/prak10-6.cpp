#include<conio.h>
#include<iostream.h>

int umur(int a);
int umur(int a, int b);
int umur(int a, int b, int c);

void main()
{
clrscr();
int a, b, c;
cout<<"SATU PARAMETER"<<endl;
cout << "Masukkan umur ayah: " ;
cin >> a;
cout<<"Umur ayah adalah: "<<umur(a)<<" Tahun" <<endl;
cout<<"==================================================="<<endl;
cout<<"DUA PARAMETER"<<endl;
cout << "Masukkan umur anak: ";
cin >> b;
cout<<"Umur ayah adalah: "<<umur(a)<<" Tahun" <<endl;
cout<<"Umur anak adalah: "<<umur(b)<<" Tahun" <<endl;
cout<<"==================================================="<<endl;
cout<<"TIGA PARAMETER"<<endl;
cout << "Masukkan umur cucu: ";
cin >> c;
cout<<"Umur ayah adalah: "<<umur(a)<<" Tahun" <<endl;
cout<<"Umur anak adalah: "<<umur(b)<<" Tahun" <<endl;
cout<<"Umur cucu adalah: "<<umur(c)<<" Tahun" <<endl;;
getch();
}


int umur(int a)
{
return a;
}

int umur(int a, int b)
{
return b;
}

int umur(int a, int b, int c)
{
return c;
}
