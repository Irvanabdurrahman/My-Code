#include <iostream.h>
#include <string.h>
#include <stdio.h>
#define MAX 100
#define true 1
#define false 0


struct biodata{
	char nama[20];
	char almt[100];
	char tgl_lahir[40];
	char telp[20];
};

struct biodata krywn;
struct biodata stack[MAX];

void init(void);
int full(void);
int empty(void);
struct biodata entridata(void);
void push(struct biodata krywn);
struct biodata pop(void);
struct biodata info;
void display(struct biodata krywn);
void baca(void);

int i,top;
char jawab;

void main(){
	char pilih;
	cout<<"___________________________________________________________\n";
	cout <<"\nNama	: Irvan Abdurrahman | 4510210003\n";
	cout <<"Program	: Data Karyawan Menggunakan Stack Dengan Array\n";
	cout<<"___________________________________________________________\n";
	init();
	do{
		cout<<"____________________________________\n";
		cout << "\n\t==MENU PILIHAN==\n";
		cout<<"____________________________________\n";
		cout << "\n1. Input Data\n";
		cout << "2. Hapus Data Terakhir\n";
		cout << "3. Lihat Daftar Karyawan\n";
		cout << "4. Hapus Semua Data\n";
		cout << "5. Keluar\n";
		cout << "Masukkan Pilihan Anda : ";
		cin >> pilih;
		switch(pilih){
			case '1' : krywn = entridata();
					   push(krywn);
						break;
			case '2' : cout << "\n>>DATA YANG DIHAPUS\n";
					   krywn = pop();
					   display(krywn);
					   break;
			case '3' : baca();
					   break;
			case '4' : init();
					   cout << "\nData telah dikosongkan\n";
					   break;
			case '5' :cout<<"Terima Kasih Telah Menggunakan Program Ini\n";
						cout<<"\nApakah Anda Mau Proses Lagi [Y/N] ? : ";
						cin>>jawab;
			break;
			default : cout << "Pilihan Yang Anda Masukkan Salah";
					  break;
		}
		cout << "\n";
	}while(pilih != '5'||jawab=='Y');
}

void init(void){
	top = -1;
}

void push(struct biodata krywn){
	if(full() != true){
		top++;
		stack[top]=krywn;
	}else cout << "Stack sudah penuh..!!\n";
}

struct biodata pop(void){
	if(empty() != true){
		krywn=stack[top];
		top--;
		return krywn;
	}else cout << "Stack kosong..!!\n";
}

int full(void){
	if(top == MAX-1) return(true);
	else return(false);
}

int empty(void){
	if(top == -1) return true;
	else return(false);
}

void baca(void){
	cout << ">>ISI STACK\n";
	if(top>-1){
		for(i=0;i<=top;i++){
			cout<<"_______________________________________\n";
			cout << "\nNama		: " << stack[i].nama << "\n";
			cout << "Alamat		: " << stack[i].almt << "\n";
			cout << "Tanggal Lahir	: " << stack[i].tgl_lahir << "\n";
			cout << "No Telpon	: " << stack[i].telp << "\n";
			cout<<"_______________________________________\n";
		}
	}else cout << "Data kosong...!!";
	cout << "\n";
}

struct biodata entridata(void){
	struct biodata krywn;
	cout << "\n";
	cout << "Masukkan Nama	: ";gets(krywn.nama);
	cout << "Masukkan Alamat	: ";cin >> krywn.almt;
	cout << "Masukkan Tanggal Lahir : ";gets(krywn.tgl_lahir);
	cout << "Masukkan No Telpon  : ";cin >> krywn.telp;
	return(krywn);
}

void display(struct biodata krywn){
	cout << "\n";
	cout << "Nama		: " << krywn.nama << "\n";
	cout << "Alamat		: " << krywn.almt << "\n";
	cout << "Tanggal Lahir	: " << krywn.tgl_lahir << "\n";
	cout << "No Telpon	: " << krywn.telp << "\n";
}