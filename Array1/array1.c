#include <stdio.h>
#include <stdlib.h>
#define DIM 5
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	int vet[DIM],i; // definisco grandezza array 
	//Definire un indice sempre come intero
	vet[0]=0;
	vet[1]=10;
	vet[2]=20;
	vet[3]=30;
	vet[4]=40;
	
	//for(i=0;i<DIM;i++){
	//	printf("\nvet[%d] = %d",i, vet[i]); // primo i indica indice il secondo dal valore contenuto dentro cella array
	//}
//	for(i=0;i<DIM;i++){
//		vet[i]=0;
//	}
	
//	for(i=DIM-1;i>=0;i--){
//		printf("\nvet[%d] = %d",i, vet[i]); // primo i indica indice il secondo dal valore contenuto dentro cella array
//	}
//	
//	printf("Inserisci valori array: \n");
//	for(i=0;i<DIM;i++){
//		printf("vet[%d]: ", i);
//		scanf("%d",&vet[i]); // per far inserire i valori dentro l'array
//		
//	}
	printf("%d",vet[i]);
	return 0;
}
