#include <stdio.h>
#include <stdlib.h>
#define DIM 32
/* decimale to binario con array */

/** inserisce in un array i bit della rappresentazione binario di un numero decimale
*@param v[] vettore in cui inserire i bit
*@param dim dimensione del vettore
*@param n numero decimale di cui trovare la rappresentazione binaria
*@return il numero di bit inseriti
*@modify bin[] inserendo i bit
*/
int binario(int v[], int dim, int n){
	int q,r,i;
	
	for(q=n,i=0;q>0; q=q/2,i++){
		r=q%2;
		v[i]=r;
	}
	return (i);
}

int main(int argc, char *argv[]) {
	int n,bin[DIM],nB,i;
	printf("Inserisci numero ");
	scanf("%d",&n);
	nB=binario(bin,DIM,n);
	printf("\n%d = (",n);
	for(i=nB-1;i>=0;i--){
		printf("%d", bin[i]);
	}
	
	printf(")2");
	return 0;
}
