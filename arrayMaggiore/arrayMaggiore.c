#include <stdio.h>
#include <stdlib.h>
#define DIM 5
/* Inserisce dentro un array 10 valori interi, poi stampa il valore maggiore  */

int main(int argc, char *argv[]) {
	int aValInt[DIM],max,i;
	//scanf("%d",&n);
	//max=n;
	for(i=0;i<DIM;i++){
		printf("Inserisci valore");
		scanf("%d",&aValInt[i]);	
	}
	for(i=0;i<DIM;i++){
		printf("\naValInt[%d] = %d",i,aValInt[i]);
	}
	max = aValInt[0];
	for(i=1;i<DIM;i++){
		if(aValInt[i]>max){
			max=aValInt[i];
		}
	}
	printf("\nIl maggiore: %d",max);
	return 0;
}
