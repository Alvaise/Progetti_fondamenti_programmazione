#include <stdio.h>
#include <stdlib.h>
#define DIM 10

int v[DIM];

/** funzione per l'introduzione dei valori di un array dichiarato globale*/


void introduci(){
	int i;
	for(i=0;i<DIM;i++){
		printf("\nintroduci un valore v[%d]: ", i);
		scanf("%d", &v[i]);
	}
}

/** funzione per la stampa dei valori di un array*/
void stampaValori(){
	int i;
	for(i=0;i<DIM;i++){
		printf("%d\t",v[i]);
	}
}

/** funzione che calcola il massimo valore contenuto nell'array
@return valore massimo contenuto nell'array
*/
int massimo(){
	int i,max;
	max= v[0];
	for(i=1;i<DIM;i++){
		if(v[i]>max){
			max=v[i];
		}
	}
	return(max);
}

/** funzione che calcola il minimo valore dell'array 
@return valore minimo contenuto nell'array
*/
int minimo(){
	int i,min;
	min= v[0];
	for(i=0;i<DIM;i++){
		if(v[i]<min){
			min=v[i];
		}
	}
	return(min);
}

/**funzione che calcola la media dei valori contenuto nell'array
@return valore medio float di tutti i valori dell'array
*/
float media(){
	int i;
	float s,media;
	s=0;
	for(i=0;i<DIM;i++){
		s+=v[i];
	}
	media=(float)s/DIM;
	return(media);
}
/* array e funzioni pt.1 */

int main(int argc, char *argv[]) {
	
	int max,min;
	float m;
	
	introduci();
	printf("\n");
	stampaValori();
	
	max=massimo();
	min=minimo();
	m=media();
	
	printf("\n");
	
	printf("Il max: %d",max);
	printf("\n");
	printf("Il min: %d",min);
	printf("\n");
	printf("La media: %g",m);
	return 0;
}
