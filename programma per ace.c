#include<stdio.h>
#include<stdlib.h>
#include<time.h>

const int DIM=12;
int MAX_NUM=100;
void caricavettore(int n,int V[]);
void visualizzaVet(int n,int V[]);
void OrdinamentoPerSelezione(int u, int W[]);
void Sommacifre(int n, int V[], int W[]);



int main(){
int Vnum[DIM], Wnum[DIM];
caricavettore (DIM, Vnum);
visualizzaVet(DIM, Vnum);
Sommacifre(DIM, Vnum, Wnum);
visualizzaVet(DIM, Wnum);
OrdinamentoPerSelezione (DIM, Wnum);
visualizzaVet(DIM, Wnum);
}

void caricavettore(int n,int V[]){
	srand(time(0));
	int i;
	for(i=0;i<n;i++)
		V[i]=rand()%MAX_NUM;
}

void visualizzaVet(int n,int V[]){
	int i;
	for(i=0;i<n;i++){
	
		printf("%d ",V[i]);	
	}
printf("\n");
}


void Sommacifre(int n, int V[], int W[]){
	int i,somma,primacifra,secondacifra;
	
	for(i=0;i<n;i++){
		primacifra=V[i]/10;
		secondacifra=V[i]%10;
		somma=primacifra+secondacifra;
		W[i]=somma;
		}
}


void OrdinamentoPerSelezione(int n, int W[]){
int temp, ind_min, j, i;
for( i=0; i<n-1; i++){
	ind_min = i;
	for( j=i+1; j<n; j++)
		if(W[ind_min] > W[j])
		ind_min = j;
		temp = W[i];
		W[i] = W[ind_min];
		W[ind_min] = temp;
	}
}



