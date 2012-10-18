#include<conio.h>
#include<iostream.h>
#include<string.h>
#include<stdio.h>

const max=100;
int awal,akhir;

struct biodata{
	char nama[20];
	int usia;
	char tlahir[20];
	char telp[20];
	int height;
	int anak;
};

struct biodata kry;
struct biodata queue[max];

void init(void);

int full(void);
int empty(void);

struct biodata masukan(void);
void enqueue(struct biodata kry);
struct biodata dequeue(void);
void display(struct biodata kry);
void baca(void);

void main(){
char pilih;
cout<<"\t---program data karyawan---\n";
init();
do{
	cout<<"\n\tMenu Pilihan\n";
	cout<<"\t1. Input data \n";
	cout<<"\t2. Hapus data \n";
	cout<<"\t3. lihat daftar karyawan\n";
	cout<<"\t4. Hapus semua data\n";
	cout<<"\t5. Keluar";
	cout<<"\nmasukkan pilihan anda : ";
	cin>>pilih;
	switch(pilih){
		case '1' :
			if(full()!=1){
				kry=masukan();
				}
			enqueue(kry);
		break;
		case '2' :
			cout<<"\ndata yang dihapus :";
			kry=dequeue();
			display(kry);
		break;
		case '3':
			baca();
		break;
		case '4':
			init();
			cout<<"semua data telah dihapus\n";
		break;
		case '5':
			cout<<"terima kasih telah mencoba program ini\n";
			break;
		default:
			cout<<"maaf, pilian anda tidak ada\n";
	}cout<<endl;
} while(pilih!='5');
getch();
}

void init(){
	awal=-1;
	akhir=-1;
}

void enqueue(struct biodata kry){
	if(empty()==1){
		awal = 0;
		akhir = 0;
		queue[awal]=kry;
	}else if(full()!=1){
		akhir++;
		queue[akhir]=kry;
	}else	cout<<"Queue sudah penuh\n";
}

struct biodata dequeue(void){
	int i;
	if(empty()!=1){
		kry=queue[awal];
		for(i=awal;i<=akhir;i++)
			queue[i]=queue[i+1];
			akhir--;
			return(kry);
	}else cout<<"Queue kosong \n";
}

int full(void){
	if(akhir==max-1)
		return 1;
	else
		return 0;
}

int empty(void){
	if(akhir==-1)
		return 1;
	else
		return 0;
}

void baca(void){
	int i;
	cout<<"\nIsi Queue : \n ";
	if(empty()!=1){
		for(i=awal;i<=akhir;i++){
			display(queue[i]);
		}
	}else cout<<"data kosong \n";
}

struct biodata masukan(void){
	struct biodata kry;
	cout<<"\nmasukkan Nama karyawan : ";
	gets(kry.nama);
	cout<<"masukkan usia : ";
	cin>>kry.usia;
	cout<<"masukkan tanggal lahir :";
	gets(kry.tlahir);
	cout<<"masukkan no telpon: ";
	cin>>kry.telp;
	cout<<"masukkan tinggi : ";
	cin>>kry.height;
	cout<<"masukkan jumlah anak :";
	cin>>kry.anak;
	return(kry);
}

void display(struct biodata kry){
	cout<<"\nnama : "<<kry.nama;
	cout<<"\nusia : "<<kry.usia;
	cout<<"\ntanggal lahir : "<<kry.tlahir;
	cout<<"\nno telpon : "<<kry.telp;
	cout<<"\ntinggi : "<<kry.height;
	cout<<"\njumlah anak : "<<kry.anak;
}
