#include <stdio.h>
#include <stdlib.h>

/* stampa tabellina di una cifra inserita dall'utente */
char leggiCifra()
{
	char cifra;
	cifra=getch();
	while(cifra<'0' || cifra>'9')
	{
		cifra=getch();
	}
	return(cifra);
}
int main(int argc, char *argv[]) 
{
	char cifra;
	int nCifra,t;
	printf("inserisci cifra decimale: ");
	cifra=leggiCifra();
	nCifra=cifra-'0';
	for(t=nCifra;t<=nCifra*10;t=t+nCifra)
	{
		prinf("%d",t);
	}
	return 0;
}
