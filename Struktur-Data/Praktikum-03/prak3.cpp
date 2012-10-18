#include <iostream.h>
#include <string.h>
#include <conio.h>
#include <stdio.h>
#include <stdlib.h>

struct biodata{
	char nama[20];
	int usia;
	struct biodata *LINK;
};
struct biodata data;
struct biodata *P, *TOP, *Q;

void init(void);
void cetak(void);
void buat_simpul(void);
void push(void);
struct biodata pop(void);
void display (struct biodata data);

main(){
	char pilih;
	cout<<"__________________________________________________\n";
	cout<<"\nNama	: Irvan Abdurrahman | 4510210003\n";
	cout<<"Tanggal	: 06 Desember 2011\n";
	cout<<"Program	: Stack Dengan Single Linked List\n";
	cout<<"__________________________________________________\n";
	init();
	do {
		cout<<"___________________________________\n";
		cout<<"\n\t== MENU PILIHAN ==\n";
		cout<<"___________________________________\n";
		cout<<"\n1. Input Data\n";
		cout<<"2. Hapus Data Terakhir\n";
		cout<<"3. Lihat Daftar Mahasiswa\n";
		cout<<"4. Hapus Semua Data\n";
		cout<<"5. Selesai\n";
		cout<<"Masukkan Pilihan Anda : ";
		cin>>pilih;
		switch(pilih){
			case '1' : buat_simpul();
						  push();
			break;
			case '2' : cout<<"\nData yang dihapus :\n";
						  data = pop();
						  display(data);
			break;
			case '3' : cetak();
			break;
			case '4' : init();
						  cout<<"\nData Telah dikosongkan\n";
			break;
			case '5' : cout<<"Selesai\n";
			break;
			default 	: cout<<"Pilih 1 sd 5..!!";
			break;
		}
		cout<<"\n";
	}while(pilih != '5');
}

void cetak(void){
		cout<<"\n";
		cout<<"Biodata yang Anda Masukkan Adalah : \n";
		cout<<"Nama : "<<P->nama;
		cout<<"\nUsia : "<<P->usia;
}
void init(void){
	TOP = NULL;
}

void buat_simpul(void){
	P = new biodata;
	if(P != NULL){
		cout<<"\n";
		cout<<"Masukkan Nama : ";gets(P->nama);
		cout<<"Masukkan Usia : ";cin>>P->usia;
	}else{
		cout<<"Pembuatan biodata gagal";
		exit(1);
	}
}

void push(void){
	if(TOP == NULL){
		TOP = P;
		TOP->LINK = NULL;
	}else{
		P->LINK = TOP;
		TOP = P;
	}
}

struct biodata pop(void){
	struct biodata data;
	if(TOP != NULL){
		data = *TOP;
			Q = TOP->LINK;
			free(TOP);
			TOP = Q;
			return(data);
		}else{
			cout<<"Stack Kosong";
		}
}

void display (struct biodata data){
	cout<<"\n";
	cout<<"Nama : "<<data.nama<<"\n";
	cout<<"Usia : "<<data.usia;
}

/* By Irvan Abdurrahman | 4510210003*/

