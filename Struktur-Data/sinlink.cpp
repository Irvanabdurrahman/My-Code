#include <conio.h>
#include <iostream.h>
#include <string.h>
#include <stdio.h>

struct dt{
	int A;
	dt *N;
};
dt *F, *L, *H;

void init (){
	F = NULL;
	L = NULL;
	H = NULL;
}

void PUSH(int A){
	H = new dt;
	H -> A;
	H -> N = NULL;
if(F == NULL){
	F = H;
	L = H;
}else{
 L -> N = H;
 L = H;
 }
}


void POP(){
	if(F==L){
		F = NULL;
		L=NULL;
 }else{
		cout<<"Kosong..!!";
 }else{
	struct dt H2;
	H2=F;
	while (H2-> N !=L){
		H2 = H2 -> N;
	}
	H=L;
	L=H2;
	free(H);
 }
}
