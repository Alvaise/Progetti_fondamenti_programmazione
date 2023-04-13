#include <stdio.h>
#include <stdlib.h>
#define DIM 5
/* Es su array */

/**funzione per caricare valori in array
*@param v array
*@param dim dimensione array
*@modify array con i valori inseriti
*/
void caricaArray(int v[],int dim){
	int i,n;
	for(i=0;i<dim;i++){
		scanf("%d",&n);
		v[i]=n;
	}
}
/** funzione che trova il massimo valore contenuto in un array
*@param v[] array
*@param dim dimensione array
*@return massimo valore dell'array
*/
int maxArray(int v[],int dim){
	int max,i;
	max=v[0];
	for(i=1;i<dim;i++){
		if(v[i]>max){
			max=v[i];
		}
	}
	return(max);
}
/** funzione che stampa i valori dell'array
*@param v[] array di interi
*@param dim dimensione array
*/
void stampaArray(int v[], int dim){
	int i;
	for(i=0;i<dim;i++){
		printf("%d\t",v[i]);
	}
}
int main(int argc, char *argv[]) {
	int massimo,vet[DIM];
	caricaArray(vet,DIM);
	stampaArray(vet,DIM);
	massimo= maxArray(vet,DIM);
	printf("\nIl max e %d",massimo);
	return 0;
}
