#include<conio.h>
#include<iostream.h>

void main()
{
clrscr();
int dosen, senior,ps,nilai;
cout<<"jumlah tanda tangan dosen:";
cin>>dosen;
cout<<"jumlah tanda tangan senior panitia:";
cin>>senior;
cout<<"jumlah tanda pegawai dan senior:";
cin>>ps;
nilai=dosen*3+senior*2+ps*1;
cout<<"jumlah nilai:"<<nilai<<endl;
if (nilai>=80)
  cout<<"lulus";
else if(nilai<80&&nilai>60)
  cout<<"mendapat hukuman ringan";
else
  cout<<"mendapat hukuman berat";
getch();
}
