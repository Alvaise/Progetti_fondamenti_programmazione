#include <stdio.h>
#include <stdlib.h>
#define DIM 1000
#define SPAZIO 32
#define INVIO 13
/**
 * funzione per introdurre i caratteri in un array vuoto e termina l'inserimento con invio
 * la funzione utilizza funzione helper leggiLettere()
 * @param v vettore in cui introdurre i caratteri
 * @param dim dimensione del vettore
 * @return il numero di caratteri della frase
 * @modify i valori del vettore con i caratteri inseriti dall'utente
*/
int caricaArrayChar(char v[],int dim){
	int i;
	char lettera;
	int nl;
	nl=0;
	i=0;
	lettera=leggiLettera();
	while(lettera!=INVIO && nl<DIM){
		v[i]=leggiLettera();
		printf("%c",v[i]);
		nl++;
		lettera=leggiLettera();
		i++;
}
return(nl);
}
/* programma che stampa l'occorenza di qualsiasi lettere dell'alfabeto */

int main(int argc, char *argv[]) {
	return 0;
}
