#include <stdio.h>
#include <stdlib.h>
#define DIM 5

/**
*funzione che scambia i valori dei due parametri passati 
*@param a
*@param b
*/
void scambiaValori(int a, int b){
	int aux=a;
	a=b;
	b=aux;
	printf("a=%d - b=%d",a,b);
}

/**carica un array con valori inseriti dall'utente
*@param v vettore
*@param dim dimensione array
*@modify v con i valori inseriti
*/
void caricaVet(int v[],int dim){
	int i;
	for(i=0;i<dim;i++){
		printf("\nv[%d]= ",i);
		scanf("%d", &v[i]);
	}
}

/**
*scambia i valori di due elementi dell'array
*@param vet vettore di cui scambiare glli elementi
*@param i<dim array indice del primo elemento
*@param j<dim array indice del secondo
*@modify vet con gli elementi corrispondenti scambiati
*/
void scambia(int vet[],int i,int j){
	int aux = vet[i];
	vet[i] = vet[j];
	vet[j]= aux;
}
/**funzione per trovare l'indice del primo valore massimo in un array
*@param vet vettore in cui cercare il massimo
*@param dim dimensione array
*@return iM indice del valore maggiore
*/
int maggiore(int vet[],int dim){
	int i,M=vet[0],iM=0;
	for(i=1;i<dim;i++){
		if(vet[i]>M){
			M=vet[i];
			iM=i;
		}
	}
	return iM;
}
/**funzione che trova il massimo valore della porzione di un array in cui viene passato da dove partire
*@param vet vettore in cui cercare il massimo
*@param dim dimensione array
*@param st<dim indice da cui iniziare per trovare il massimo
*@return iM indice del valore maggiore
*/
int indiceMaxStart(int vet[],int dim,int st){
	int i,M=vet[st],iM=st;
	for(i=st+1;i<dim;i++){
		if(vet[i]>M){
			M=vet[i];
			iM=i;
		}
	}
	return iM;
}
/**funzione per trovare l'indice del valore minimo in un array di interi
*@param vet vettore in cui cercare il minimo
*@param dim dimensione array
*@return iM indice del valore minimo
*/
int minore(int vet[],int dim){
	int i,m,im;
	m=vet[0];
	for(i=1;i<dim;i++){
		if(vet[i]<m){
			m=vet[i];
			im=i;
		}
	}
	return im;
}
void ordinamentoDesc( int vet[], int dim){
	int iM,st;
	for(st=0;st<dim;st++){
		iM=indiceMaxStart(vet,dim,st);
		scambia(vet,st,iM);
	}
}

/* areaer */

int main(int argc, char *argv[]) {
	
	int vet[DIM],i,iM,im,st=3,iMaxR;
	printf("Inserimento valori vettore");
	caricaVet(vet,DIM);
	for(i=0;i<DIM;i++){
		printf("%d\t",vet[i]);
	}
	printf("\n");
	scambia(vet,1,2);
	for(i=0;i<DIM;i++){
		printf("%d\t",vet[i]);
	}
	iM=maggiore(vet,DIM);
	printf("\nIndice del maggiore = v[%d]",iM);
	im=minore(vet,DIM);
	printf("\nIndice del minore = v[%d]",im);
	iMaxR=indiceMaxStart(vet,DIM,st);
	printf("\nIndice del maggiore partendo da %d = v[%d]",st,iMaxR);
	printf("\n");
	ordinamentoDesc(vet,DIM);
	for(i=0;i<DIM;i++){
		printf("%d\t",vet[i]);
	}
	return 0;
}
