#include <conio.h>
#include <iostream.h>

int kuadrat(int a);
float kuadrat(float b);

void main()
{
clrscr();
float a;
int b;
cout<<"mencari kuadrat dengan bertipe integer"<<endl;
cout <<"Masukkan nilai A : " ;
cin >> a;
cout << "Nilai kuadrat dari " << a << " adalah : " << kuadrat(a)<< endl;
cout<<"================================================="<<endl;
cout<<"mencari kuadrat dengan bertipe float"<<endl;
cout <<"Masukkan nilai B : " ;
cin >> b;
cout << "Nilai kuadrat dari " << b << " adalah : " << kuadrat(b)<< endl;
getch();
}

int kuadrat(int a)
{
return a * a;
}


float kuadrat(float b)
{
return b * b;
}





