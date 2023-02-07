#include <stdio.h>
#include <stdlib.h>

/* dati 10 valori inseriti dall'utente ne restituisce il maggiore e il minore */

void maxMin()
{
	int max,min,c,a;
	printf("\nInserire valore: ");
	scanf("%d",&max);
	min=max;
	for(c=0;c<3;c++)
	{
		printf("Inserire valore: ");
		scanf("%d",&a);
		if(a>max)
		{
			max=a;
		}
		else if(a<min)
		{
			min=a;
		}
	}
	printf("\nmin = %d - max = %d", min,max);
}

