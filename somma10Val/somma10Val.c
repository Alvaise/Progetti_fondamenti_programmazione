#include <stdio.h>
#include <stdlib.h>

/* dati 10 valori inseriti dall'utente, ne restituisce la somma */

int main(int argc, char *argv[]) 
{
	int c,s,nu;
	s=0;
	c=0;
	while(c<10)
	{
		printf("Inserire valore: ");
		scanf("%d", &nu);
		s=s+nu;
		c=c+1;
	}
	printf("\nsomma = %d", s);
	return 0;
}
