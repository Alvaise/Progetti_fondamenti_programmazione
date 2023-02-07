#include <stdio.h>
#include <stdlib.h>

/* programma che legge cifra come carattere */
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
	printf("Inserisci una cifra decimale; ");
	cifra=leggiCifra();
	printf("%c",cifra);
	cifra=leggiCifra();
	printf("%c",cifra);
	return 0;
}
