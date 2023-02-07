#include <stdio.h>
#include <stdlib.h>

/* stampa tabellina del valore inserito da utente */

int main(int argc, char *argv[]) 
{
	int n, c; //dichiaro le variabili
	printf("introduci un valore tra 2 e 9: ");
	scanf("%d", &n);
	
	c=n;
	while(c<=n*10)
	{
		printf("%d\t", c); //stampa di c, spaziato di una tabulazione(\t)
		c=c+n;
	}
	return 0;
}
