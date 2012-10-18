/* Program 2.1 - Manajemen Data Queue Menggunakan Array*/

#include <iostream.h>
#include <string.h>
#include <conio.h>
#include <stdio.h>
#define MAX 100
#define true 1
#define false 0

struct biodata{
	char nama[20];
	int usia;
};

struct biodata mhs;
struct biodata queue[MAX];

void init(void);
int full(void);
int empty(void);
struct biodata entridata(void);
void enqueue(struct biodata mhs);
struct biodata dequeue(void);
void display(struct biodata mhs);
void baca(void);

int awal,akhir;

int main(){
	char pilih;
	cout<<"Program entri data Mahasiswa\n";
	init();
	do{
		cout<<"MENU PILIHAN\n";
		cout<<"1.Input data\n";
		cout<<"2.Hapus Data\n";
		cout<<"3.Lihat Daftar Mahasiswa\n";
		cout<<"4.Hapus Semua Data\n";
		cout<<"5.Selesai\n";
		cout<<"Masukkan Pilihan Anda : ";
		cin>>pilih;
		switch(pilih){
			case '1':mhs = entridata();
						enqueue(mhs);
						break;
			case '2':cout<<"\nData yang dihapus : \n";
						mhs = dequeue();
						display(mhs);
						break;
			case '3':baca();
						break;
			case '4':init();
						cout<<"\nData telah Dikosongkan\n";
						break;
			case '5':break;
			default:cout<<"Pilihan Yang Anda Masukkan salah";
			break;
		}
		cout<<"\n";
	}while(pilih!='5');
	return 0;
}

void init(void){
	awal = -1;
	akhir = -1;
}

void enqueue(struct biodata mhs){
	if(empty()==true){
		awal = 0;
		akhir = 0;
		queue[awal] = mhs;
	}else if(full() != true){
		akhir++;
		queue[akhir]=mhs;
	}else cout<<"Queue Sudah Penuh..!!\n";
}

struct biodata dequeue(void){
	int i;
	if(empty()!=true){
		mhs=queue[awal];
		for(i=awal;i<=akhir;i++)
			queue[i]=queue[i+1];
		akhir--;
		return(mhs);
	}else cout<<"Queue Kosong..!!\n";
}

int full(void){
	if(akhir==MAX-1)return(true);
	else return(false);
}

int empty(void){
	if(akhir==-1)return(true);
	else return(false);
}

void baca(void){
	int i;
	cout<<"\nIsi Queue : \n";
	if(empty()!=true){
		for(i=awal;i<=akhir;i++){
			display(queue[i]);
		}
	}else cout<<"Data Kosong..!!";
	cout<<"\n";
}

struct biodata entridata(void){
	struct biodata mhs;
	cout<<"\n";
	cout<<"Masukkan Nama : ";cin>>mhs.nama;
	cout<<"Masukkan Usia : ";cin>>mhs.usia;
	return(mhs);
}

void display(struct biodata mhs){
	cout<<"\n";
	cout<<"Nama	: " <<mhs.nama<<"\n";
	cout<<"Usia	: " <<mhs.usia<<"\n";
}


