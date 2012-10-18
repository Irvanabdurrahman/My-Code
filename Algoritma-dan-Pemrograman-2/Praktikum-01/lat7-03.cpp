#include<iostream.h>
#include<conio.h>

void main()
{
 int nilai,a;
cout <<"_____________________________________________\n";
cout<<"\nProgram  : Segitiga Pascal\n";
cout<<"Pembuat  : Irvan Abdurrahman | 4510210003\n";
cout<<"Update   : 09 Maret 2011\n";
cout <<"_____________________________________________\n";
cout << "\nMasukkan angka : ";
cin >> nilai;
cout<<endl;

for (int x=0; x<=nilai; x++)
{
for(int y=nilai;y>x;y--)
{
cout << "  ";
}

for (int z=0; z<=x; z++)
{
if (z==0||x==z)
{ a=1; }

else
{a = a * (x+1-z)/z;}
cout << " " << a <<"  ";
}
cout <<endl;
}
cout<<endl;
cout << "Referensi : raditblogger" ;
getch();
}
