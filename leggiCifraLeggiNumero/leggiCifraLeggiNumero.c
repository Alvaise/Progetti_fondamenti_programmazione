#include <stdio.h>
#include <stdlib.h>
#define INVIO 13
/* programma che legge un carattere e lo trasforma in numero */

/**funzione che legge una cifra come carattere e la trasforma in in cifra
*@return numero di tipo intero
*/
int leggiCifra(){
	char nC=getch();
	int n;
	while(nC<'0'||nC>'9'){
		nC=getch();
	}
	n=nC-'0';
	return(n);
}

int main(int argc, char *argv[]) {
	int n=leggiCifra();
	printf("%d",n);
	return 0;
}
