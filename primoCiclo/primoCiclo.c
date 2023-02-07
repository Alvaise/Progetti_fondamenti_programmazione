#include <stdio.h>
#include <stdlib.h>

/* programma che esegue la stampa dei numeri da 0 a 9 */

int main(int argc, char *argv[]) 
{
	int c; // dichiarazione della variabile intera c
	
	c=0;
	while(c<10) //ciclare sempre per vero
	{
		printf("%d\n", c); // stampo variabile e vado a capo
		c++; // incremento variabile di 1 
	}
	
	
	
	
	return 0;
}
