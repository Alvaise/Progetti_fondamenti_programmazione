#include <stdio.h>
#include <stdlib.h>

/* dati 10 valori inseriti dall'utente ne restituisce il maggiore e il minore */

int main(int argc, char *argv[]) 
{
	int max,min,c,a;
	c=0;
	printf("Inserire valore: ");
	scanf("%d",&max);
	min=max;
	while(c<9)
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
		c++;
	}
	printf("\nmin = %d - max = %d", min,max);
	return 0;
}
