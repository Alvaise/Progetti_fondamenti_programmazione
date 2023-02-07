#include <stdio.h>
#include <stdlib.h>

/* Dati 5 numeri inseriti dall'utente, ne stampo la somma */
/*int somma()
{
	int s,n,c;
	s=0;
	for(c=0;c<5;c++)
	{
		printf("Inserire valore: ");
		scanf("%d",&n);
		s=s+n;
	}
	return (s);
}*/
int main(int argc, char *argv[]) 
{
	int max, a, c;
	printf("Introduci un valore: ");
	scanf("%d", &a);
	max=a;
	c=0;
	while(c<10)
	{
		printf("Introduci un valore: ");
		scanf("%d", &a);
		if(a>max)
		{
			max=a;
		}
		c=c+1;
	}
	
	printf("\nvalore massimo: %d", max);
	return 0;
}
