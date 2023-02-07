#include <stdio.h>
#include <stdlib.h>

/* calcolo della media di 3 valori interi inseriti dall'utente */

int main(int argc, char *argv[]) 
{
	int c, n, s;
	float m;
	s=0;
	c=0;
	while (c<3)
	{
		printf("Inserire valore: ");
		scanf("%d", &n);
		s=s+n;
		c=c+1;
	}
	m=(float)s/c;
	printf("media = %g", m);
	return 0;
}
