#include <stdio.h>
#include <stdlib.h>
#define DIM 10
/** lettura lettera minuscola
*@return la lettera minuscola digitata ( e solo una lettera minuscola)*/
char leggiLetteraMin(){
	char l;
	l=getch();
	while(l<'a'||l>'z'){
		l=getch();
	}
	return (l);
}
/* utilizziamo array di caratteri */

int main(int argc, char *argv[]) {
	
	char parola[DIM],min;
	int i;
	// introduzione delle lettere in un array di caratteri
	printf("Introduci parola di 10 lettere ");
	for(i=0;i<DIM;i++){
		parola[i]=leggiLetteraMin();
		printf("%c", parola[i]);
	}
	printf("\n");
	for(i=DIM-1;i>=0;i--){ //stampa a ritroso della parola
		printf("%c", parola[i]);
	}
	min = parola[0];
	for(i=0;i<DIM;i++){
		if(parola[i]<min){
			min=parola[i];
		}
	}
	printf("\nLa lettera più piccola : %c",min);
	return 0;
}
