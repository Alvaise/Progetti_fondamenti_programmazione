#include <stdio.h>
#include <stdlib.h>
#define INVIO 13
/* funzione leggi numero*/
/**funzione che legge un numero cifra per cifra sino a INVIo e restituisce il valore corrispondente, il valore è intero quindi arrivo massimo a 10 cifre
*Serve costante INVIO = 13
*@return numero digitato cifra per cifra controllando che non si superino le nove cifre 
*/
int leggiNumero()
{
	int lCifra;
	int cifra,n;
	n=0;
	lCifra=1;
	cifra=leggiCifra();
	while(cifra>=0&&lCifra<10){
		n=n*10+cifra;
		printf("%d",cifra);
		cifra=leggiCifra();
		lCifra++;
	}
	return(n);	
}
int main(int argc, char *argv[]) 
{
	int numero;
	printf("Metti un numero");
	numero=leggiNumero();
	printf("\nn = %d", numero);
	return 0;
}
