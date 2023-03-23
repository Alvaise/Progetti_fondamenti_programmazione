#include <stdio.h>
#include <stdlib.h>
#define DIM 10

/** introduzione voti dentro un array di interi (1-10)
*@param v vettore in cui introdurre i valori
*@param dim dimensione del vettore
*@modify il vettore v inserendo i valori introdotti dall'utente
*/
void caricaVoti(int v[],int dim){
	int i, voto;
	for(i=0;i<dim;i++){
		printf("inserisci un voto nell'array: ");
		scanf("%d",&voto);
		while(voto<1 || voto>10){
			printf("Errore:inserisci un voto nell'array(1-10): ");
			scanf("%d",&voto);
		}
		v[i]=voto;
	}
}
/** stampa dei valori contenuti in un array di interi
*@param v vettore 
*@param dim dimensione del vettore
*/
void stampaArray(int v[],int dim){
	int i;
	for(i=0;i<dim;i++){
		printf("\t%d",v[i]);
	}
}
/**
*Funzione che conta i voti maggiori o uguali a 6
*@param vettore v di interi 
*@param dim dimensione del vettore
*@return nS voti sufficienti
*/
int nSuff(int v[], int dim){
	int i,nS;
	nS=0;
	for (i=0;i<dim;i++){
		if(v[i]>= 6){
			nS++;
		}
	}
	return(nS);
}
/**
*Funzione che conta i voti minori di 6
*@param vettore v di interi 
*@param dim dimensione del vettore
*@return nI voti Insufficienti (<6)
*/
int nInsuff(int v[], int dim){
	int i,nI;
	nI=0;
	for(i=0;i<dim;i++){
		if(v[i]<6){
			nI++;
		}
	}
	return(nI);
}

/* carica i voti da 1 a 10 in un array e conta gli insufficienti e i sufficienti */

int main(int argc, char *argv[]) {
	int v[DIM],numSuff,numInsuff;
	caricaVoti(v,DIM);
	numSuff = nSuff(v,DIM);
	numInsuff = nInsuff(v,DIM);
	printf("\n");
	stampaArray(v,DIM);
	printf("\n");
	printf("\n");
	printf("Il numero di sufficienti e %d",numSuff);
	printf("\nIl numero di insufficienti e %d",numInsuff);
	return 0;
}
