#include <stdio.h>
#include <stdlib.h>

/* somma di 10 numeri */

/** funzione che restituisce la somma di n numeri introdotti da utente
*@param n numero di numeri da introdurre 
*@return la somma dei numeri inseriti da utente
*/
int somma(int n){
	int s,c, num;
	s=0;
	for(c=0;c<n;c++){
		printf("introduci un valore: ");
		scanf("%d",&num);
		s=s+num;
	}
	return(s);
}

int main(int argc, char *argv[]) {
	int s;
	float m;
	s=somma(5);
	printf("La somma e: %d",s);
	m=(float)s/5;
	printf("\nLa media e: %g",m);
	return 0;
}
